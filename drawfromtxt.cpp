#include<cstdlib>
#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

int main()
/*
This program takes in a .txt file of the user's choosing
that contains characters with a coordinate value (x and y)
indicating where said character should be printed. 

Column max is 79, row max is 200. See attached files for examples.

It displays the drawing to the console.
*/
{
	//Receive file name from user.
	string fileName = "";
	cout<< "Enter file name: ";
	cin>>fileName;
	ifstream FileIn(fileName.c_str());
	
	//If file can not be found, return failure
	if(!FileIn)
	{
		cout<<"Unable to open file";
		return EXIT_FAILURE;
	}
	
	//Max size of the drawing is 79x200.
	const int CONSTANT_COLUMNS = 79;
	const int CONSTANT_ROWS = 200;
	
	//Create blank 2D array for the drawing to store characters
	char drawing[CONSTANT_ROWS][CONSTANT_COLUMNS] = {' '};

	//Read through input file and fill up drawing array
	int rows = 0;
	FileIn>>rows;
	int indexRow = 0;
	int indexColumn = 0;
	char character = ' ';
	while(FileIn >> indexRow >> indexColumn >> character)
	{
		drawing[indexRow][indexColumn] = character;
	}
	
	//Print out the drawing to the console
	for(int row = 0; row < rows-1; row++)
	{
		for(int column = 0; column < CONSTANT_COLUMNS; column++)
		{
			cout<<drawing[row][column];
		}
		cout<<endl;
	}
	
	FileIn.close();
	return EXIT_SUCCESS;
}