#pragma once
#include<iostream>
#include<string>
#include<cstdlib>
#include <stdio.h>
#include<windows.h>
#include <conio.h>
#include<list>
#include <bits.h>
using namespace std;

struct date
{
	int day;
	int month;
	int year;
};
struct time
{
	int hour;
	int min;
};
struct event
{
	string title;
	string description;
	string category;
	date eventDate;
	time timeEvent;
	int urgentRate;
};

void sort();
void showCategory();
void showEvents();
void AddNewEvent();
void SetColor(int text, int bg);

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

enum MonthNumbers
{
	january = 1,
	february = 2,
	march=3,
	april=4,
	may=5,
	june=6,
	july=7,
	august=8,
	septmber=9,
	october=10,
	november=11,
	december=12
};