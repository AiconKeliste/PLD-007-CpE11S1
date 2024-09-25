#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	//case switch about gender

	char n;
	
	cout<< "IF THE PERSON IS MASCULINE AND HAVE A ADAMS APPLE ENTER (M) BUT IF THE PERSON IS FEMININE AND HAVE A SOFT VOICE ENTER (F)" << endl;
	cin >> n;
	
	switch (n)
{
	case 'M':
		case 'm':
	cout << "THE PERSON IS MALE AND ALSO ";
	cout << "THE PERSON IS MASCULINE AND HAS A ADAMS APPLE";
	break;
	case 'F':
		case 'f':
	cout << "THE PERSON IS FEMALE AND ALSO ";
	cout << "THE PERSON IS FEMININE AND HAS A SOFT VOICE";
	break;
}
	return 0;
}
