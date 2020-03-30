#include<iostream>
#include"Header.h"
#include<string>
#include<list>
using namespace std;

void SetColor(int text, int bg)

{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}
enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};
void addNewEvent()
{
	event newEvent;
	/*date newDate;
	time newTime;*/
	cout << "Enter new event: " << endl;
	cin >> newEvent.title;
	cout << "Enter description: " << endl;
	cin >> newEvent.description;
	cout << "Enter date of event: " << endl;
	{
		cout << "day:";
		cin >> newEvent.eventDate.day;
		cout << "month:";
		cin >> newEvent.eventDate.month;
		cout << "year:";
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
void showEvents()
{
	
	for (event item : eventArr)
	{
			cout << "Event title: " << item.title << endl;
			cout << "Description: " << item.description << endl;
			{
				cout << "Event date: " << endl;
				cout << item.eventDate.day << " ";
				cout << item.eventDate.month << " ";
				cout << item.eventDate.year;

			}
			cout << "Event time: " << endl;
			{
				cout << item.timeEvent.hour << " : ";
				cout << item.timeEvent.min;
			}
			cout << "Urgent rate: " << item.urgentRate << endl;
	}
}
