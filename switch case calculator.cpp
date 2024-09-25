#include <iostream>
 using namespace std;
int main(int argc, char** argv) 
{
	//create a c++ program that applies a MDAS calculator
	int  x, y;
	char n;
	
	cout << "ENTER THE FIRST NUMBER = ";
	cin >>x;
	cout << "ENTER THE OPERATOR ";
	cin >>n;
	cout << "ENTER THE SECOND NUMBER = ";
	cin >>y;
	
		switch (x,y,n)
{			
		case'+': 
		cout << "THE RESULT IS = "<< x + y;
		break;
		case'-':
		cout << "THE RESULT IS ="<< x - y;
		break;
		case'*':
		cout << "THE RESULT IS ="<< x * y;
		break;
		case'/':
		cout << "THE RESULT IS = "<< x / y;
		break;
}

	return 0;
}
