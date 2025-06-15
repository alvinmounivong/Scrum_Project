#include <iostream>
#include "calculation.h"
#include "calculation2.h"


int main() {
	int x, y;
	int choice;
	
	std::cout << "Enter first number: ";
	std::cin >> x;
	
	std::cout << "Enter second number: ";
	std::cin >> y;

	std::cout << "Choose operation: \n";
	std::cout << "1. Add\n";
	std::cout << "2. Subtract\n";
	std::cout << "Enter your choice (1 or 2): ";
	std::cin >> choice;	

	if (choice == 1) {
		firstCalculation(x, y);
	} else if (choice == 2) {
		secondCalculation(x, y);
	} else {
		std::cout << "Invalid choice." << std::endl;
	}
	
	return 0;
}