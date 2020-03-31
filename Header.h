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
list <event> eventArr;
void addNewEvent();

void showEvents();

void SetColor(int text, int bg);

enum ConsoleColor
{
};
