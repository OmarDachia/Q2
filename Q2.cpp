#include <iostream>

int main() {
  std::cout << "Q2:-> Write a program to input two number and do there addition, subtraction, multiplication, and division";
  std::cout << "\n========================================================================================================";
  std::cout << "\nResult Start here:->";
  std::cout << "\n++++++++++++++++++++\n";

  int first_number=0, second_number=0, addition=0, subtraction=0, multiplication=0, division=0;
  std::cout << "Type the First Number: "; // Type a number and press enter
  std::cin >> first_number; // Get user input from the keyboard

  std::cout << "Type the Second Number: "; // Type a number and press enter
  std::cin >> second_number; // Get user input from the keyboard

  addition = first_number + second_number;
  subtraction = first_number - second_number;
  multiplication = first_number * second_number;
  division = first_number / second_number;

  std::cout << "\nAddition: " << addition; // Display the input value
  std::cout << "\nMultiplication: " << multiplication; // Display the input value
  std::cout << "\nSubtraction: " << subtraction; // Display the input value
  std::cout << "\nDivision: " << division; // Display the input value

  return 0; //ends the main function.
}
