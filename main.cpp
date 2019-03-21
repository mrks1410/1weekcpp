#include <iostream>
#include <string>

int main() {
	int num1;
	int num2;

	std::cout << "１つ目の数:";
	std::cin >> num1;
	std::cout << "２つ目の数:";
	std::cin >> num2;
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
	std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
	
	return 0;
}
