/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:18:36 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/18 17:18:08 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main(void) {
    std::cout << "Serializer Test" << std::endl << std::endl;
    // Test 1: Basic serialization/deserialization
    std::cout << "Test 1: Basic serialization/deserialization" << std::endl;
    Data* original = new Data();
    std::cout << "Original pointer address: " << original << std::endl;
    
    uintptr_t serialized = Serializer::serialize(original);
    std::cout << "Serialized value: " << serialized << std::endl;
    
    Data* deserialized = Serializer::deserialize(serialized);
    std::cout << "Deserialized pointer address: " << deserialized << std::endl;
    
    if (original == deserialized)
        std::cout << "Success: Pointers are equal!" << std::endl;
    else
        std::cout << "Error: Pointers are NOT equal!" << std::endl;
    std::cout << std::endl;

    // Test 2: Multiple objects
    std::cout << " Test 2: Multiple objects" << std::endl;
    Data* data1 = new Data();
    Data* data2 = new Data();
    Data* data3 = new Data();
    
    uintptr_t raw1 = Serializer::serialize(data1);
    uintptr_t raw2 = Serializer::serialize(data2);
    uintptr_t raw3 = Serializer::serialize(data3);
    
    std::cout << "Data1: " << data1 << " -> " << raw1 << " -> " << Serializer::deserialize(raw1) << std::endl;
    std::cout << "Data2: " << data2 << " -> " << raw2 << " -> " << Serializer::deserialize(raw2) << std::endl;
    std::cout << "Data3: " << data3 << " -> " << raw3 << " -> " << Serializer::deserialize(raw3) << std::endl;
    
    if (data1 == Serializer::deserialize(raw1) && 
        data2 == Serializer::deserialize(raw2) && 
        data3 == Serializer::deserialize(raw3))
        std::cout << "All pointers match!" << std::endl;
    else
        std::cout << "Some pointers don't match!" << std::endl;
    std::cout << std::endl;

    // Test 3: Stack vs Heap
    std::cout << "Test 3: Stack vs Heap allocation" << std::endl;
    Data stackData;
    Data* heapData = new Data();
    
    std::cout << "Stack Data address: " << &stackData << std::endl;
    uintptr_t stackSerialized = Serializer::serialize(&stackData);
    Data* stackRestored = Serializer::deserialize(stackSerialized);
    std::cout << "Restored address: " << stackRestored << std::endl;
    std::cout << "Match: " << (&stackData == stackRestored ? "Yes" : "No") << std::endl;
    
    std::cout << "Heap Data address: " << heapData << std::endl;
    uintptr_t heapSerialized = Serializer::serialize(heapData);
    Data* heapRestored = Serializer::deserialize(heapSerialized);
    std::cout << "Restored address: " << heapRestored << std::endl;
    std::cout << "Match: " << (heapData == heapRestored ? "Yes" : "No") << std::endl;

    // Cleanup
    delete original;
    delete data1;
    delete data2;
    delete data3;
    delete heapData;
    
    return 0;
}