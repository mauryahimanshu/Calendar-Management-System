//*******************************************************************************************************************************
// This Header file is meant for Forward Declaration of the Functions Used
//*******************************************************************************************************************************

#include <iostream>
#include <conio.h>
#include <ctime>
#include <windows.h>
#include <string>

using namespace std;

void About();

inline void setclr(int clrcode);

void welcome();

void printCalendar(int year, int month,int day);

int dayNumber(int day, int month, int year);

string getMonthName(int monthNumber);

int numberOfDays (int monthNumber, int year);