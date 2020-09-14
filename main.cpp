#include <iostream>
#include "Prog1.h"

//using namespace Prog1;
// main function
int main()
{
	int a, b;
	Prog1::Row* head = nullptr; // The first
	head=Prog1::input(head, &a, &b); //input Matrix
	if (!head) {
		Prog1::erase(head); // освобождение памяти
		std::cout << "incorrect data" << std::endl;
		return 1;
	}
	result(head);
	output("Sourced matrix", head, &a, &b);
	Prog1::erase(head); // освобождение памяти
	return 0;
}
