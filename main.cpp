#include <iostream>
#include <vector>
#include "Goodluck"
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
	
	good.setNum = myNum;
	good.setName = myName;
	good1.setNum = myNum;
	good1.setName = myName;
	
	vector <int> myVector;
	myVector.push_back(good.getNum);
	myVector.push_back(good1.getNum);
	
	vector <string> hisVector;
	hisVector.push_back(good.getName);
	hisVector.push_back(good1.getName);
	
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}
	for (int i = 0; i < hisVector.size(); i++)
	{
		cout << hisVector[i] << endl;
	}
	system ("pause");
	return 0;
}
	