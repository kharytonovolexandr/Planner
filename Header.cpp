#include<iostream>
#include"Header.h"
#include<string>
#include<list>
using namespace std;

list <event> eventArr;
void SetColor(int text, int bg)

{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}

void addNewEvent()
{
	event newEvent;
	/*date newDate;
	time newTime;*/
	cout << "Enter new event: " << endl;
	cin >> newEvent.title;
	cout << "Enter description: " << endl;
	cin >> newEvent.description;
	cout << "Enter category: " << endl;
	cin >> newEvent.category;
	cout << "Enter date of event: " << endl;
	{
		cout << "day:"<<endl;
		cin >> newEvent.eventDate.day;
		cout << "month:"<<endl;
		cin >> newEvent.eventDate.month;
		cout << "year:"<<endl;
		cin >> newEvent.eventDate.year;
	}
	cout << "Enter event time: " << endl;
	{
		cout << "Hour:";
		cin >> newEvent.timeEvent.hour;
		cout << "min:";
		cin >> newEvent.timeEvent.min;
	}
	cout << "Choose urgent rate 1-3: " << endl;
	cin >> newEvent.urgentRate;
	eventArr.push_back(newEvent);
}
void showCategory()
{
	string chooseCategory;
	cout << "Choose event category you want to see:" << endl;
	cin >> chooseCategory;
	for (event item : eventArr)
	{
		if (item.category == chooseCategory)
		{
			if (item.urgentRate == 1)
			{
				SetColor(2, 0);
				goto show;

			}
			else if (item.urgentRate == 2)
			{
				SetColor(12, 0);
				goto show;
			}
			else if (item.urgentRate == 3)
			{
				SetColor(4, 0);
				goto show;
			}
		show:
			cout << "Event title: " << item.title << endl;
			cout << "Description: " << item.description << endl;
			cout << "Category: " << item.category << endl;
			{
				cout << "Event date: " << endl;
				cout << item.eventDate.day << " ";
				cout << item.eventDate.month << " ";
				cout << item.eventDate.year;
				cout << endl;

			}
			cout << "Event time: " << endl;
			{
				cout << item.timeEvent.hour << " : ";
				cout << item.timeEvent.min << endl;
			}
			cout << "Urgent rate: " << item.urgentRate << "\t" << endl;
			SetColor(15, 0);
		}//Костиль, але я не знаю як інакше зробити!

	}
}

void showEvents()
{
	for (event item : eventArr)
	{
		if (item.urgentRate == 1)
		{
			SetColor(2, 0);
			goto show;
			
		}
		else if (item.urgentRate == 2)
		{
			SetColor(12, 0);
			goto show;
		}
		else if (item.urgentRate == 3)
		{
			SetColor(4, 0);
			goto show;
		}
		show:
		cout << "Event title: " << item.title << endl;
		cout << "Description: " << item.description << endl;
		cout << "Category: " << item.category << endl;
		{
			cout << "Event date: " << endl;
			cout << item.eventDate.day << " ";
			cout << item.eventDate.month << " ";
			cout << item.eventDate.year;
			cout << endl;

		}
		cout << "Event time: " << endl;
		{
			cout << item.timeEvent.hour << " : ";
			cout << item.timeEvent.min << endl;
		}
		cout << "Urgent rate: " << item.urgentRate << "\t" << endl;
		SetColor(15, 0);
	}
}
