#include <iostream>
#include <windows.h>
#include "DLL2.h"
#include "DLL2.cpp"


extern "C" __declspec(dllimport) int Group();
extern "C" __declspec(dllimport) void Name(char* name1, int n);

int main()
{
	std::cout << "Group\n" << Group() << "\n";

	char vi[20];
	Name(vi, 20);
	std::cout << "Name\n" << vi << "\n";
	system("pause");
	return 0;
}
