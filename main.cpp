#include <iostream>
#include <vector>
#include "header.h"
using namespace std;
int main ()
{
	Goodluck good;
	Goodluck good1;
	
	int myNum =0;
	string myName = " ";
	
	cout << "Enter Random Number";
	cin >> myNum;
	cout << "Enter your name";
	cin >> myName;
	
	good.setNum (myNum);
	good.setName (myName);
	good1.setNum (myNum);
	good1.setName (myName);
	
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
	
