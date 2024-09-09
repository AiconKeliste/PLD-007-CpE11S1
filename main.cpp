#include <iostream>

using namespace std;


int main()
{
    double num1, num2, num3;

    cout << "\n ENTER THE FIRST NUMBER = ";
    cin >> num1;
    cout << "\n ENTER THE SECOND NUMBER = ";
    cin >> num2;
    cout << "\n ENTER THE THIRD NUMBER = ";
    cin >> num3;


    //RESULT
    //SUM
    cout << "THE SUM IS = " << num1 + num2 + num3
    //DIFFERENCE
         << "\nTHE DIFFERENCE IS = " << num1 - num2 - num3
    //PRODUCT
         << "\nTHE PRODUCT IS = " << num1 * num2 * num3
    //QUOTIENT
         << "\nTHE QUOTIENT IS = " << num1 / num2 / num3 << endl;

    return 0;
}
