#include<iostream>
#include<stdio.h>
#include<string>
using std::cout; using std::endl;
using namespace std;

int main()
{
	int billAmount[5]; char decision;
	int transactionNumber = 0; int w_d_min = 1; int w_d_max = 300;
	cout << "Welcome to Thomas' ATM Program" << endl;
	cout << "Main menu ";
	cout << "Please press('y') to continue: " ;
	cout << "Please press('n') to exit program.  " << endl;
	cin >> decision;
	while (decision == 'y' || 'Y')
	{
		int entry;
		string ATMwdPrompt[3] = { "Please enter cash to Withdraw: ","Ex; $1.00 < withdrawal amount > $300", "Press 'enter' when done." };
		cout << ATMwdPrompt[0];
		cout << ATMwdPrompt[1] << endl;
		cin >> entry; 
		if (entry<w_d_min || entry>w_d_max)
		{
			string errormsg = ("Error : Please enter a Withdrawal Amount that's <= $1.00 & > $300");
			cout << errormsg;
			break;
		}
				int cashdenoms[5] = { 50,20,10,5,1 }; int numBills[5];
				string bills[5] = { "$50","$20","$10","$5","$1" };
					numBills[0] = { (entry) / cashdenoms[0] };
					if (numBills[0] > 0)
					{
						cout << "Depositing Cash " << endl;
						cout << "You will receive: " << numBills[0] << " "<< bills[0]<<" bills"<< endl;
						entry -= numBills[0] * cashdenoms[0];
					}
					numBills[1] = { (entry) / cashdenoms[1] };
					if (numBills[1] > 0)
					{	
						cout << "Depositing Cash " << endl;
						cout << "You will receive: " << numBills[1] << " " << bills[1] << " bills" << endl;
						entry -= numBills[1] * cashdenoms[1];
					}
					numBills[2] = { (entry) / cashdenoms[2] };
					if (numBills[2] > 0)
					{
						cout << "Depositing Cash " << endl;
						cout << "You will receive: " << numBills[2] << " " << bills[2] << " bills" << endl;
						entry -= numBills[2] * cashdenoms[2];
					}
					numBills[3] = { (entry) /cashdenoms[3] };
					if (numBills[3] > 0)
					{
						cout << "Depositing Cash " << endl;
						cout << "You will receive: " << numBills[3] << " " << bills[3] << " bills" << endl;
						entry -= numBills[3] * cashdenoms[3];
					}
					numBills[4] = { (entry) / cashdenoms[4] };
					if (numBills[4] > 0)
					{
						cout << "Depositing Cash " << endl;
						cout << "You will receive: " << numBills[4] << " " << bills[4] << " bills" << endl;
						entry -= numBills[4] * cashdenoms[4];
					}
			transactionNumber++;
			cout << "Main menu ";
			cout << "Please press('y') to continue: ";
			cout << "Please press('n') to exit program.  " << endl;
			cin >> decision;
	} //while (decision=='y'||'Y');

return 0;
}
