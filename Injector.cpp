#define vlad2830_INJECTOR
#include <iostream>
#include <Windows.h>

int InjectDLL(DWORD,  char*);
int getDLLpath(char*);
int getPID(int*);
int getProc(HANDLE*, DWORD);

int main()
{
	system("Injector By Vlad2830");

	int PID = -1;
	char* dll = new char[255];
	
	//Дальше в разработке...
}
