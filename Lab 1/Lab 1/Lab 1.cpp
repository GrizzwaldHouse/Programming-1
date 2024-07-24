// Lab 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include < string>
int main()
{
    // Display welcome banner

    std::cout << "Hello Full Sail!\n" << std::endl;

    // Request student's name

    std::cout << "Whats your name?" << std::endl;

    std::string name;

    std::cout << "Name: ";

    getline(std::cin, name);


    std::cout << "\n\nWelcome " + name + "!" << std::endl;

    // Use students name to ask request age of student

    std::cout << "\n\nWhat is your age " + name + "?" << std::endl;

    std::string age;

    std::cout << "age: ";

    getline(std::cin, age);
    
    // Accept age and Congratulate student on age 
    std::cout << "\n\nWow " + name + " , Congratulations for living to be " + age + " years old!" << std::endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
