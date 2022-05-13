#include <iostream>
#include<chrono>
#include<ctime>
#include <thread>
//#include<dos.h>
//#include<Windows.h>
#include <string>
#include<vector>
#include<sstream>
#include <iomanip>
using namespace std;










int main()
{
	cout << "               USA math Minstry and Organization            \n";
	string answer;
	int counter = 0;

	string Sent;




	while (answer != "No")
	{

		if (counter == 0)
		{
			cout << "result of  the executtion of your code  !! \n";
			cout << endl;
			cout << "Please Enter you calculation in a + b form  \n";
			getline(cin, Sent);
		}

		//Your code here**************************************************

		else
		{
			cout << "Please Enter you calculation in a + b form again \n";
			cin.ignore();
			getline(cin, Sent);


		}


		stringstream ssForVsent(Sent);
		vector<string>Vsent;
		string indiv;
		char space = ' ';

		while (getline(ssForVsent, indiv, space))
		{
			Vsent.push_back(indiv);
		}

		if (Vsent[1] == "+")
		{
			cout << setprecision(100) << stod(Vsent[0]) << "+" << stod(Vsent[2]) << " = " << stod(Vsent[0]) + stod(Vsent[2]) << endl;
		}
		else  if (Vsent[1] == "-")
		{
			cout << setprecision(100) << stod(Vsent[0]) << "-" << stod(Vsent[2]) << " = " << stod(Vsent[0]) - stod(Vsent[2]) << endl;
		}
		else  if (Vsent[1] == "*")

		{
			cout << setprecision(100) << stod(Vsent[0]) << "*" << stod(Vsent[2]) << " = " << stod(Vsent[0]) * stod(Vsent[2]) << endl;
		}
		else  if (Vsent[1] == "/")
		{
			cout << setprecision(100) << stod(Vsent[0]) << "/" << stod(Vsent[2]) << " = " << stod(Vsent[0]) / stod(Vsent[2]) << endl;
		}
		else
		{
			cout << "Please enter you calculation right form a + b ,thank you\n";
		}



		//Your end of the code********************************************
		counter++;
		cout << "Do you want to Analyze your code  for " << counter << " time(You can answer anything without space and use No for Exit) ?\n";

		cin >> answer;
	}


}
