#include<iostream>
#include"Header.h"
#include<string>
#include<list>
#include <bits.h>
using namespace std;

int sizeArr = 0;
event* eventArr;

void SetColor(int text, int bg)

{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}


void sort()
{
	for (int i = 0; i < sizeArr-1; i++)
	{
	
		for (int j = 0; j < sizeArr-1; j++)
		{
			if (eventArr[j].eventDate.month > eventArr[j + 1].eventDate.month)
			{
				swap(eventArr[j], eventArr[j + 1]);
			}
			else if (eventArr[j].eventDate.month == eventArr[j + 1].eventDate.month)
			{
				if (eventArr[j].eventDate.day > eventArr[j + 1].eventDate.day)
				{
					swap(eventArr[j], eventArr[j + 1]);
				}
				else if (eventArr[j].eventDate.day == eventArr[j + 1].eventDate.day)
				{
					if (eventArr[j].timeEvent.hour > eventArr[j + 1].timeEvent.hour)
					{
						swap(eventArr[j], eventArr[j + 1]);
					}
					else if (eventArr[j].timeEvent.hour == eventArr[j + 1].timeEvent.hour)
					{
						if (eventArr[j].timeEvent.min > eventArr[j + 1].timeEvent.min)
						{
							swap(eventArr[j], eventArr[j + 1]);
						}
					}
				}
			}
		}
	}
	showEvents();
}

void showCategory()
{
	string chooseCategory;
	cout << "Choose event category you want to see:" << endl;
	cin >> chooseCategory;
	for (int i = 0; i < sizeArr; i++)
	{
		if (eventArr[i].category == chooseCategory)
		{
			if (eventArr[i].urgentRate == 1)
			{
				SetColor(2, 0);
				goto show;

			}
			else if (eventArr[i].urgentRate == 2)
			{
				SetColor(12, 0);
				goto show;
			}
			else if (eventArr[i].urgentRate == 3)
			{
				SetColor(4, 0);
				goto show;
			}
		show:
			cout << "Event title: " << eventArr[i].title << endl;
			cout << "Description: " << eventArr[i].description << endl;
			cout << "Category: " << eventArr[i].category << endl;
			{
				cout << "Event date: " << endl;
				cout << eventArr[i].eventDate.day << " ";
				cout << eventArr[i].eventDate.month << " ";
				cout << eventArr[i].eventDate.year;
				cout << endl;
			}
			cout << "Event time: " << endl;
			{
				cout << eventArr[i].timeEvent.hour << " : ";
				cout << eventArr[i].timeEvent.min << endl;
			}
			cout << "Urgent rate: " << eventArr[i].urgentRate << "\t" << endl;
			SetColor(15, 0);
		}//Костиль, але я не знаю як інакше зробити!

	}
}

void showEvents()
{
	for (int i = 0; i < sizeArr; i++) 
	{
		if (eventArr[i].urgentRate == 1)
		{
			SetColor(2, 0);
			goto show;
			
		}
		else if (eventArr[i].urgentRate == 2)
		{
			SetColor(12, 0);
			goto show;
		}
		else if (eventArr[i].urgentRate == 3)
		{
			SetColor(4, 0);
			goto show;
		}
	show:
		cout << "Event title: " << eventArr[i].title << endl;
		cout << "Description: " << eventArr[i].description << endl;
		cout << "Category: " << eventArr[i].category << endl;
		{
			cout << "Event date: " << endl;
			cout << eventArr[i].eventDate.day << " ";
			cout << eventArr[i].eventDate.month << " ";
			cout << eventArr[i].eventDate.year;
			cout << endl;

		}
		cout << "Event time: " << endl;
		{
			cout << eventArr[i].timeEvent.hour << " : ";
			cout << eventArr[i].timeEvent.min << endl;
		}
		cout << "Urgent rate: " << eventArr[i].urgentRate << "\t" << endl;
		SetColor(15, 0);
	}
}

void AddNewEvent()
{
	event* NewEventArr = new event[sizeArr+1];
	for (int i = 0; i < sizeArr; i++)
	{
		NewEventArr[i].title=eventArr[i].title;
		NewEventArr[i].description = eventArr[i].description;
		NewEventArr[i].category = eventArr[i].category;
		NewEventArr[i].eventDate.day = eventArr[i].eventDate.day;
		NewEventArr[i].eventDate.month = eventArr[i].eventDate.month;
		NewEventArr[i].eventDate.year = eventArr[i].eventDate.year;
		NewEventArr[i].timeEvent.hour = eventArr[i].timeEvent.hour;
		NewEventArr[i].timeEvent.min = eventArr[i].timeEvent.min;
		NewEventArr[i].urgentRate = eventArr[i].urgentRate;
	}

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
		cout << "day:" << endl;
		cin >> newEvent.eventDate.day;
		cout << "month:" << endl;
		cin >> newEvent.eventDate.month;
		cout << "year:" << endl;
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
	NewEventArr[sizeArr] = newEvent;
	sizeArr++;
	eventArr = new event[sizeArr];
	for (int i = 0; i < sizeArr; i++)
	{
		eventArr[i] = NewEventArr[i];
	}
	delete[]NewEventArr;
	
}
