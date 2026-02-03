/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:03:07 by marvin            #+#    #+#             */
/*   Updated: 2026/01/30 14:03:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "=== Test 1: Create ShrubberyCreationForm ===" << std::endl;
    try {
        ShrubberyCreationForm form1("home");
        std::cout << form1 << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 2: Bureaucrat can't execute unsigned form ===" << std::endl;
    try {
        ShrubberyCreationForm form("garden");
        Bureaucrat bob("Bob", 130);
        
        std::cout << "Before signing:" << std::endl;
        std::cout << form << std::endl;
        
        std::cout << "Attempting to execute unsigned form:" << std::endl;
        bob.executeForm(form);  // Should fail - not signed
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 3: Sign and execute successfully ===" << std::endl;
    try {
        ShrubberyCreationForm form("park");
        Bureaucrat alice("Alice", 100);  // High enough to sign (needs 145)
        
        std::cout << "Form status:" << std::endl;
        std::cout << form << std::endl;
        
        std::cout << "\nAlice signs the form:" << std::endl;
        alice.signAForm(form);
        
        std::cout << "\nForm status after signing:" << std::endl;
        std::cout << form << std::endl;
        
        std::cout << "\nAlice executes the form:" << std::endl;
        alice.executeForm(form);
        
        std::cout << "Check your directory for 'park_shrubbery' file!" << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 4: Grade too low to sign ===" << std::endl;
    try {
        ShrubberyCreationForm form("forest");
        Bureaucrat lowGrade("Intern", 150);  // Too low to sign (needs 145)
        
        std::cout << lowGrade << std::endl;
        std::cout << form << std::endl;
        
        lowGrade.signAForm(form);  // Should fail
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 5: Grade too low to execute ===" << std::endl;
    try {
        ShrubberyCreationForm form("jungle");
        Bureaucrat signer("Manager", 140);    // Can sign (needs 145)
        Bureaucrat executor("Newbie", 150);   // Can't execute (needs 137)
        
        std::cout << "Manager signs:" << std::endl;
        signer.signAForm(form);
        
        std::cout << "\nNewbie tries to execute:" << std::endl;
        executor.executeForm(form);  // Should fail - grade too low
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 6: Edge case - exact grades ===" << std::endl;
    try {
        ShrubberyCreationForm form("backyard");
        Bureaucrat exactSigner("John", 145);   // Exactly 145
        Bureaucrat exactExecutor("Jane", 137); // Exactly 137
        
        std::cout << "John (grade 145) signs:" << std::endl;
        exactSigner.signAForm(form);
        
        std::cout << "\nJane (grade 137) executes:" << std::endl;
        exactExecutor.executeForm(form);
        
        std::cout << "Check your directory for 'backyard_shrubbery' file!" << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 7: Multiple executions of same form ===" << std::endl;
    try {
        ShrubberyCreationForm form("plaza");
        Bureaucrat boss("Boss", 1);
        
        boss.signAForm(form);
        
        std::cout << "\nFirst execution:" << std::endl;
        boss.executeForm(form);
        
        std::cout << "\nSecond execution (should overwrite):" << std::endl;
        boss.executeForm(form);
        
        std::cout << "Check 'plaza_shrubbery' file!" << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 8: Copy constructor and assignment ===" << std::endl;
    try {
        ShrubberyCreationForm form1("original");
        Bureaucrat signer("Signer", 100);
        
        signer.signAForm(form1);
        
        std::cout << "\nOriginal form:" << std::endl;
        std::cout << form1 << std::endl;
        
        std::cout << "\nCopy constructor:" << std::endl;
        ShrubberyCreationForm form2(form1);
        std::cout << form2 << std::endl;
        
        std::cout << "\nAssignment operator:" << std::endl;
        ShrubberyCreationForm form3("temp");
        form3 = form1;
        std::cout << form3 << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

	std::cout <<"\n\n\nROBOTOMYREQUESTFORM\n";

	std::cout << "=== Testing RobotomyRequestForm ===\n\n";
    
    try {
        Bureaucrat bob("Bob", 40);
        Bureaucrat alice("Alice", 80);
        RobotomyRequestForm form("Bender");
        
        std::cout << form << "\n";
        
        // Try to execute without signing
        std::cout << "--- Attempting to execute unsigned form ---\n";
        try {
            bob.executeForm(form);
        } catch (std::exception &e) {
            std::cout << "Exception: " << e.what() << "\n";
        }
        
        // Sign the form
        std::cout << "\n--- Signing the form ---\n";
        bob.signAForm(form);
        
        // Try to execute with insufficient grade
        std::cout << "\n--- Alice (grade 80) tries to execute ---\n";
        try {
            alice.executeForm(form);
        } catch (std::exception &e) {
            std::cout << "Exception: " << e.what() << "\n";
        }
        
        // Execute with sufficient grade (multiple times to see randomness)
        std::cout << "\n--- Bob (grade 40) executes multiple times ---\n";
        for (int i = 0; i < 5; i++) {
            std::cout << "\nAttempt " << (i + 1) << ":\n";
            bob.executeForm(form);
        }
        
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << "\n";
    }
    
	std::cout << "\n\n=== Testing PresidentialPardonForm ===\n\n";
    
    try {
        Bureaucrat president("President", 1);
        Bureaucrat vicePresident("Vice President", 10);
        Bureaucrat intern("Intern", 50);
        PresidentialPardonForm pardonForm("Arthur Dent");
        
        std::cout << pardonForm << "\n";
        
        // Try to sign with insufficient grade
        std::cout << "--- Intern (grade 50) tries to sign ---\n";
        try {
            intern.signAForm(pardonForm);
        } catch (std::exception &e) {
            std::cout << "Exception: " << e.what() << "\n";
        }
        
        // Sign with sufficient grade
        std::cout << "\n--- Vice President (grade 10) signs ---\n";
        vicePresident.signAForm(pardonForm);
        
        // Try to execute with insufficient grade
        std::cout << "\n--- Vice President tries to execute ---\n";
        try {
            vicePresident.executeForm(pardonForm);
        } catch (std::exception &e) {
            std::cout << "Exception: " << e.what() << "\n";
        }
        
        // Execute with sufficient grade
        std::cout << "\n--- President (grade 1) executes ---\n";
        president.executeForm(pardonForm);
        
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << "\n";
    }
    

    return 0;
}