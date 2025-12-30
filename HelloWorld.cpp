#include <iostream> // for std::cout 

int main()
{
	// here's some math/physics values that we copy-paste from elsewhere
	[[maybe_unused]] double pi{ 3.14159265358979323846 };
	[[maybe_unused]] double gravity{ 9.80665 }; // m/s^2
	[[maybe_unused]] double phi{ 1.618033988749895 }; // golden ratio

	std::cout << pi << '\n';// pi is used 
	std::cout << phi << '\n';// phi is used

	// the compiler will likely complain that gravity is being defined but unused 

	return 0; 
}