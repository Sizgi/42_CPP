/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:53:18 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/05 13:53:18 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// int main(void) {
// 	try {
// 		Bureaucrat cat;
// 		std::cout << cat << std::endl;
// 		Bureaucrat fox("Foxy", 150);
// 		std::cout << fox << std::endl;
// 		Bureaucrat *dog = new Bureaucrat("Chucky", 1);
// 		std::cout << *dog << std::endl;
// 		Bureaucrat *bear = new Bureaucrat("Winnie", 1256987987);
// 		std::cout << *bear << std::endl;
// 		delete dog;
// 	}
// 	catch(Bureaucrat::GradeTooHighException &error) {

// 		std::cout << error.what() << std::endl;
// 	}
// 	catch(Bureaucrat::GradeTooLowException &error) {
// 		std::cout << "Exception: " << error.what();
// 	}

// 	return 0;
// }

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    std::cout << "=== Test 1: Create valid forms ===" << std::endl;
    try {
        Form form1("Tax Form", 50, 25);
        std::cout << form1 << std::endl;
        
        Form form2("Permission Slip", 100, 75);
        std::cout << form2 << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 2: Invalid form grades ===" << std::endl;
    try {
        Form badForm1("Bad Form", 0, 50);  // Grade too high
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what();
    }
    
    try {
        Form badForm2("Bad Form", 151, 50);  // Grade too low
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what();
    }

    std::cout << "\n=== Test 3: Bureaucrat signs form successfully ===" << std::endl;
    try {
        Bureaucrat alice("Alice", 30);
        Form form("Contract", 50, 25);
        
        std::cout << "Before signing:" << std::endl;
        std::cout << form << std::endl;
        
        alice.signForm(form);  // Should succeed (30 < 50)
        
        std::cout << "After signing:" << std::endl;
        std::cout << form << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 4: Bureaucrat grade too low to sign ===" << std::endl;
    try {
        Bureaucrat bob("Bob", 100);
        Form form("Top Secret", 50, 25);
        
        std::cout << "Before signing attempt:" << std::endl;
        std::cout << form << std::endl;
        
        bob.signForm(form);  // Should fail (100 > 50)
        
        std::cout << "After signing attempt:" << std::endl;
        std::cout << form << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 5: Multiple bureaucrats, same form ===" << std::endl;
    try {
        Form importantDoc("Important Document", 75, 50);
        Bureaucrat lowLevel("Intern", 120);
        Bureaucrat midLevel("Manager", 60);
        Bureaucrat highLevel("Director", 10);
        
        std::cout << importantDoc << std::endl;
        
        lowLevel.signForm(importantDoc);   // Should fail
        midLevel.signForm(importantDoc);   // Should succeed
        highLevel.signForm(importantDoc);  // Already signed
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

	// std::cout << "\n=== Test 6: Edge cases - grade 1 and 150 ===" << std::endl;
	// try {
    // std::cout << "Creating easyForm..." << std::endl;
    // Form easyForm("Easy Form", 150, 150);
    
    // std::cout << "Creating hardForm..." << std::endl;
    // Form hardForm("Hard Form", 1, 1);
    
    // std::cout << "Creating newbie..." << std::endl;
    // Bureaucrat newbie("Newbie", 150);
    
    // std::cout << "Creating master..." << std::endl;
    // Bureaucrat master("Master", 1);
    
    // std::cout << "Newbie signs easy..." << std::endl;
    // newbie.signForm(easyForm);
    
    // std::cout << "Newbie tries hard..." << std::endl;
    // newbie.signForm(hardForm);
    
    // std::cout << "Master signs hard..." << std::endl;
    // master.signForm(hardForm);
    
    // std::cout << "Test 6 complete!" << std::endl;
	// }
	// catch (std::exception& e) {
  	//   std::cout << "Exception: " << e.what() << std::endl;
	// }
    std::cout << "\n=== Test 6: Edge cases - grade 1 and 150 ===" << std::endl;
    try {
        Form easyForm("Easy Form", 150, 150);
        Form hardForm("Hard Form", 1, 1);
        
        Bureaucrat newbie("Newbie", 150);
        Bureaucrat master("Master", 1);
        
        std::cout << "\nNewbie tries easy form:" << std::endl;
        newbie.signForm(easyForm);  // Should succeed
        
        std::cout << "\nNewbie tries hard form:" << std::endl;
        newbie.signForm(hardForm);  // Should fail
        
        std::cout << "\nMaster tries hard form:" << std::endl;
        master.signForm(hardForm);  // Should succeed
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 7: Form with equal sign/execute grades ===" << std::endl;
    try {
        Form balanced("Balanced Form", 75, 75);
        Bureaucrat charlie("Charlie", 75);
        
        std::cout << balanced << std::endl;
        charlie.signForm(balanced);  // Should succeed (75 <= 75)
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}