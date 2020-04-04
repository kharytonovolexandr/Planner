#include<iostream>
#include"Header.h"
#include<string>
#include<list>
using namespace std;



int main()
{
	int action = 0;

	do
	{
		cout << "1. Add new event: " << endl;
		cout << "2. Show events: " << endl;
		cout << "3. Exit: " << endl;
		cin >> action;
		switch (action)
		{
		case 1:
		{
			system("cls");
			addNewEvent();
		}break;
		case 2:
		{
			system("cls");
			showEvents();
		}break;
		case 3:
		{
			system("cls");
			cout << "Good bye! " << endl;
		}break;


		}
	} while (action != 3);

	system("pause");
	return 0;
}