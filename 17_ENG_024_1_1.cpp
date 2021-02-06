//Header Files
#include<iostream>

//declare namespace
using namespace std;

//declare rec function 
char rec(int lines1, char symbol,int k,int m);

//declare main function
int main()
{
	//declare variables
	int lines;
	char symbol;

	//output to the console window
	cout << "\t\t***__________PRINT A PATTERN__________***\n\n\n";

	//output to the console window
	cout << "Enter number of lines in the half of the pattern : ";

	//getting user input
	cin >> lines;

	//declare variables and assign value for it
	int lines1 = lines;
	int k = 0;
	int m = 1;

	//output to the console window
	cout << "\n\n\nEnter symbol of the pattern : ";

	//getting user input
	cin >> symbol;

	//getting spaces
	cout << endl << endl;

	//looping for print a half of patern
	for (int i = lines; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			//output to the console window
			cout << symbol;
		}
		//getting new line
		cout << endl;
	}

	//calling function and getting spaces
	cout << rec(lines1, symbol,k,m)<<endl<<endl<<endl;

	//witting for user input
	system("pause");
	return 0;
}

//declare a function for print a half of the pattern
char rec(int lines1, char symbol,int k,int m)
{
	//consider the logic
	if (k < m && m<=lines1)
	{
		//output to the console window
		cout << symbol;

		//calling rec function itself
		rec(lines1, symbol, k + 1,m);
	}

	//consider the logic
	else if (k >= m&&m <= lines1)
	{
		//getting new line
		cout << endl;

		//assign value to the variables
		k = 0;

		//calling rec functon it self
		rec(lines1, symbol, k, m + 1);
	}
	//consider the logic
	else
	{
		return 0;
	}
}