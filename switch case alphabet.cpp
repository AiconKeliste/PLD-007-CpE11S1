#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	//case switch
	//create a c++ program to determine if alphabet is vowel or consonant
	
	char c;
	
	cout << "ENTER A LETTER: ";
	cin >> c;
	
	switch (c)
	{
		case 'a':
		case 'A':
			cout << "Vowel";
		break;
		case 'e':
		case 'E':
			cout << "Vowel";
		break;
		case 'i':
		case 'I':
			cout << "Vowel";
		break;
		case 'o':
		case 'O':
			cout << "Vowel";
		break;
		case 'u':
		case 'U':
			cout << "Vowel";
		break;
		 
		default:
			cout << "Consonant";
		break;
	}
	return 0;
}
