// 
//


#include <iostream>

using namespace std;

#include "Headers.h"


int main()
{
	//variables
	int num;

	Add nx(2, 5);

	//test output
	cout << "hello" << nx.GetSum();

	//Hold screen open by asking for user input
	//Actual input is unimportant
	cin >> num;
	return 0;
}

