#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[])
{
	srand(time(NULL));
	

	int a;
	
	a = rand()%20 + 10;  
	cout << hex << a  << endl;//16

	cout << dec << a;//10
	system("pause");
	return 0;
}

