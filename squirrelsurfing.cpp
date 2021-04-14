#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

void ShowUsage()
//show how to use program
{
	cout << "To show program usage 'S'" << endl;
	cout << "To purchase a surfboard press 'P'" << endl;
	cout << "To display current purchases press 'C'" << endl;
	cout << "To display total amount due press 'T'" << endl;
	cout << "To quit the program press 'Q'" << endl;
}



void MakePurchase(int& iTotalSmall)
//sell surfboards
{
	int quantity = 0;
	cout << "Please enter the quantity of XXXS surfboards you would like to purchase:";
	cin >> quantity;
	if (quantity > 0)
		iTotalSmall = iTotalSmall + quantity;
	else
		cout << "Invalid Entry." << endl;

}

void DisplayPurchase(const int iTotalSmall)
//show number of surfboards of each size sold
{
	if (iTotalSmall > 0)
		cout << "The total number of XXXS surfboards is " << iTotalSmall << endl;

	if (iTotalSmall == 0)
		cout << "No puchases made yet." << endl;
}

void DisplayTotal(const int iTotalSmall)
//show total amount of money made
{
	double smalltotal = 0;
	double absolutetotal = 0;
	const double smallcost = 140.00;

	if (iTotalSmall > 0)
	{
		smalltotal = iTotalSmall * smallcost;
		absolutetotal = absolutetotal + smalltotal;
		cout << "The total number of XXXS surfboards is " << iTotalSmall << " at a total of $" << fixed << setprecision(2) << (float)smalltotal << endl;
	}
	if (iTotalSmall == 0)
		cout << "No puchases made yet." << endl;

	if (absolutetotal > 0)
		cout << "Amount due: $" << absolutetotal << endl;
}

int main()
{
	ShowUsage();
	char userinput = ' ';
	int iTotalSmall = 0;

	cout << "Please enter selection:";
	cin >> userinput;

	//loop for user input
	while (userinput != 'Q' && userinput != 'q')
		if (userinput == 'S' || userinput == 's')
		{
			ShowUsage();

			//ask user again
			cout << " " << endl;
			cout << "Please enter selection:";
			cin >> userinput;
		}
		else if (userinput == 'P' || userinput == 'p')
		{

			MakePurchase(iTotalSmall);

			//ask user again
			cout << " " << endl;
			cout << "Please enter selection:";
			cin >> userinput;
		}
		else if (userinput == 'C' || userinput == 'c')
		{
			DisplayPurchase(iTotalSmall);

			//ask user again
			cout << " " << endl;
			cout << "Please enter selection:";
			cin >> userinput;
		}
		else if (userinput == 'T' || userinput == 't')
		{
			DisplayTotal(iTotalSmall);

			//ask user again
			cout << " " << endl;
			cout << "Please enter selection:";
			cin >> userinput;
		}
		else
		{
			cout << "Invalid entry. Please try again.";
			cout << " " << endl;
			cout << "Please enter selection:";
			cin >> userinput;
		}
	cout << "Thank you." << endl;

	return 0;
}
