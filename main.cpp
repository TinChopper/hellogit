#include <iostream>
#include <vector>
#include "header.h"
using namespace std;
int main ()
{
	Goodluck good;
	Goodluck good1;
	
	int myNum = 0;
	int myNum1 = 0;
	string myName = " ";
	string myName1 = " ";
	
	cout << "Enter first random number";
	cin >> myNum;
	cout << "Enter first name";
	cin >> myName;
	
	cout << "Enter second random number";
	cin >> myNum1;
	cout << "Enter second name";
	cin >> myName1;
	
	good.setNum (myNum);
	good.setName (myName);
	good1.setNum (myNum1);
	good1.setName (myName1);
	
	vector <Goodluck> myVector;
	myVector.push_back(good);
	myVector.push_back(good1);
	
	
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i].getNum() <<endl;
		cout << myVector[i].getName() <<endl;
	}
	system("pause");
	return 0;
}
	
