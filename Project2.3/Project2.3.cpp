#include <iostream>

int usrIn()
{
	std::cout << "Enter an integer: \n";
	int x;
	std::cin >> x;
	
	return x;
}

void usrDbl(int x)
{
	std::cout << x << " doubled = " << x * 2;
}

int main() 
{
	int x{ usrIn() };
	usrDbl(x);

	return 0;
}

