#include <iostream>
using namespace std;
int main() {
	float grade;
	//INPUT
	cout<<"INPUT GRADE:";
	cin>>grade;
	//PROCESS AND OUTPUT
	if (grade<100,grade>=94)
	{cout<<"1.00"<<endl; 				cout<<"EXCELLENT"<<endl; }
	else if (grade<93.99,grade>=88.5)
	{cout<<"1.25"<<endl; 				cout<<"SUPERIOR"<<endl;	}
	else if (grade<88.49,grade>=83)
	{cout<<"1.50"<<endl; 				cout<<"MERITORIOUS"<<endl; }
	else if (grade<82.99,grade>=77.5)
	{cout<<"1.75"<<endl;				cout<<"VERY GOOD"<<endl; }
	else if (grade<77.49,grade>=72)
	{cout<<"2.00"<<endl;				cout<<"GOOD"<<endl; }
	else if (grade<71.99,grade>=65.5)
	{cout<<"2.25"<<endl;				cout<<"VERY SATISFACTORY"<<endl; }
	else if (grade<71.99,grade>=65.5)
	{cout<<"2.50"<<endl;				cout<<"SATISFACTORY"<<endl; }
	else if (grade<60.99,grade>=55.5)
	{cout<<"2.75"<<endl;				cout<<"FAIR"<<endl; }
	else if (grade<55.49,grade>=50)
	{cout<<"3.00"<<endl;				cout<<"PASSING"<<endl; }
	else if (grade<50,grade>=49.99)
	{cout<<"4.00"<<endl;				cout<<"INCOMPLETE"<<endl; }
	else {cout<<"5.00"<<endl;			cout <<"FAILED"<<endl; }
	return 0;	
}
