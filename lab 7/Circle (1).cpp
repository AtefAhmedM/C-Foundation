#include <iostream>
#include <cmath>
#include <cassert>
#include <fstream>
#include <windows.h>
#include <process.h>
#include <stdlib.h>

using namespace std;

void gotoxy(double x, double y)
{
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;
	cout.flush( );
	dwCursorPosition.X = x;
	dwCursorPosition.Y = y;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

struct Point
{

};

class Circle
{

};

ifstream inFile("Circle.txt", ios::in);

int main()
{
	Circle Dairaa;

    	Dairaa.set(160);
	Dairaa.draw();

	for(int i=0; i<50; i++)
        	cout << endl;

	return 0;
}

void Circle::set(int nP)
{

}

void Circle::draw() const
{
    for(int i=0; i<numberOfPoints; i++)
    {
        gotoxy(p[i].xCoordinate, p[i].yCoordinate);
        cout << '*';
    }
}

Circle::Circle(int nP)
{

}
