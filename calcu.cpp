#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int x, y;
	
	cout << "INPUT TWO INTEGERS" << endl;
	
	cout << "ENTER THE VALUE OF X = ";
	
	cin >> x;
	
	cout << "ENTER THE VALUE OF Y = ";
	
	cin >> y;
	
	// process, compare, if x>y,x<y, x=y
	
	if (x>y){ 
	cout<< "VALUE OF SECOND NUMBER IS  LESS THAN X"<< endl;
	}
	else if (x<y) {
		cout << "VALUE OF FIRST NUMBER IS LESS THAN Y"<< endl;
	} 
	else{
		cout<< "BOTH VALUE IS EQUAL"<< endl;
	}
	return 0;
}
