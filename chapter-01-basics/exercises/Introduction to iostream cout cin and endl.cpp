#include <iostream> // for std::cout 

int main()
{
	std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
	std::cout << "My name is Dakota" << std::endl; 

	int x{ 5 }; // define integer variable x and initialize it to 5

	std::cout << x << std::endl; // print the value of x to the console 

	std::cout << "Hello" << " World!\n"; // print "Hello World!" to the console

	std::cout << "x is equal: " << x << '\n'; // print "x is equal: 5" to the console single quotes for newline character (conventional) 
	std::cout << "Yep." << "\n"; // doubel quoted (by itself) (unconventional but ok) 
	std::cout << "And that's all, folks.\n"; // between double quotes in existing text (also conventional)

	std::cout << "Enter two numbers separated by a space: "; // ask the user for a number

	int y{}; // define variable x tro hold the user input (and value-initialize it) 
	int z{}; // define variable z to hold another user input (and value-initialize it)

	std::cin >> y >> z; // get two numbers and store in variable y and z respectively

	std::cout << "You entered: " << y << " and " << z << '\n';

	int a{};
	int b{};
	int c{};
	
	std::cout << "Enter three numbers separated by spaces: "; // ask the user for three numbers
	std::cin >> a >> b >> c; // get three numbers and store in variable a, b, and c respectively
	
	std::cout << "You entered: " << a << b << c << '\n'; // get three numbers and store in variable a, b, and c respectively 

	return 0; 
}