/* Calculator 
 * Hello!
 * This is a simple calculator that do calculations with two integers, like sum, subtraction, multiplication and division
 * */

#include <iostream>

int main()
{
    int i;
	std::cout << "           Calculator  \n";
	std::cout << "Press number 1 to sum two integers\n ";
	std::cout << "Press number 2 to subtract two integers\n ";
	std::cout << "Press number 3 to multiply two integers\n ";
	std::cout << "Press number 4 to divide two integers\n ";
	std::cout << "Press number 0 to exit\n ";
	std::cin >> i;
	
	switch(i){
		case 0:
			
			break;
			
		case 1:
			int a, b;
			std::cout << "  	Sum:\n";
			std::cout << "Type two integers\n";
			std::cin >> a;
			std::cin >> b;
			std::cout << "The sum of " << a << " + " << b << " is: " << (a+b); std::cout << "\n";
			
			break;
		case 2:
			
			std::cout <<"		Subtraction:\n";
			std::cout << "Type two integers\n";
			std::cin >> a;
			std::cin >> b;
			std::cout << "The difference between " << a << " - " << b << " is: " << (a-b); std::cout << "\n";
			
			break;
		case 3:
			
			std::cout << "		Multiplication:\n";
			std::cout << "Type two integers\n";
			std::cin >> a;
			std::cin >> b;
			std::cout << "The result of " << a << " x " << b << " is: " << (a*b); std::cout <<  "\n";
			
			break;
		case 4:
			
			std::cout <<"	Integer division\n";
			std::cout << "Type two integers\n";
			std::cin >> a;
			std::cin >> b;
			std::cout << "The result of " << a << " / " << b << " is: " << (a/b); std::cout << "\n";
			
			break;
		default:
			std::cout << "Please, select an option between 0 and 4\n";
		}

}
