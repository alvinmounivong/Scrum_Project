#include <iostream>

void firstCalculation(int a, int b) {
	int result = a + b;
	std::cout << "The result of the calculation is: " << result << std::endl;
}

int main() {
	int x, y;
	
	std::cout << "Enter the first number: ";
	std::cin >> x;
	
	std::cout << "Enter the second number: ";
	std::cin >> y;
	
	firstCalculation(x, y);
	
	return 0;
}