#include <iostream>
#include <cstdio>

int main() {
	char str[90];
	std::cout << "Enter your string: ";	
	gets_s(str);
	std::cout << "Your string: " << str;
}