// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

#include "Headers.h"


int main()
{
	int num;

	Add nx(2, 5);

	cout << "hello" << nx.GetSum();
	cin >> num;
	return 0;
}

