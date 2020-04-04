#pragma once
#include<iostream>
#include<string>
#include<cstdlib>
#include <stdio.h>
#include<windows.h>
#include <conio.h>
#include<list>
using namespace std;

struct date
{
	int day;
	string month;
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
	date eventDate;
	time timeEvent;
	int urgentRate;
};

void addNewEvent();

void showEvents();

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
