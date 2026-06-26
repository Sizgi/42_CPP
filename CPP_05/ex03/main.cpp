/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:56:09 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/05 13:56:09 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main() {
    std::cout << " Test 1: creating Shrubbery Creation Form " << std::endl;
    try {
        Intern someRandomIntern;
        AForm* rrf;
        
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        
        std::cout << *rrf << std::endl;
        
        Bureaucrat bob("Bob", 100);
        bob.signAForm(*rrf);
        bob.executeForm(*rrf);
        
        delete rrf;
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n Test 2: creating Robotomy Request Form " << std::endl;
    try {
        Intern someRandomIntern;
        AForm* rrf;
        
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        
        std::cout << *rrf << std::endl;
        
        Bureaucrat alice("Alice", 40);
        alice.signAForm(*rrf);
        alice.executeForm(*rrf);
        alice.executeForm(*rrf);  // Test randomness
        alice.executeForm(*rrf);
        
        delete rrf;
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n Test 3: creating Presidential Pardon Form " << std::endl;
    try {
        Intern someRandomIntern;
        AForm* rrf;
        
        rrf = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
        
        std::cout << *rrf << std::endl;
        
        Bureaucrat president("President", 1);
        president.signAForm(*rrf);
        president.executeForm(*rrf);
        
        delete rrf;
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n  Test 4: Invalid form name " << std::endl;
    try {
        Intern someRandomIntern;
        AForm* rrf;
        
        rrf = someRandomIntern.makeForm("invalid form", "Target");
        
        delete rrf;
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n  Test 5: All forms " << std::endl;
    try {
        Intern intern;
        Bureaucrat boss("Boss", 1);
        
        AForm* forms[3];
        forms[0] = intern.makeForm("shrubbery creation", "garden");
        forms[1] = intern.makeForm("robotomy request", "criminal");
        forms[2] = intern.makeForm("presidential pardon", "prisoner");
        
        for (int i = 0; i < 3; i++) {
            std::cout << "\n--- Processing form " << i + 1 << " ---" << std::endl;
            std::cout << *forms[i] << std::endl;
            boss.signAForm(*forms[i]);
            boss.executeForm(*forms[i]);
            delete forms[i];
        }
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n Test 6: Upper-Lowercase test " << std::endl;
    try {
        Intern intern;
        AForm* form;
        
        // Should fail - upper case
        form = intern.makeForm("Shrubbery Creation", "target");
        delete form;
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}