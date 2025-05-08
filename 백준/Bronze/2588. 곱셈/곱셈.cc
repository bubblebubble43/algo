#include <iostream>
using namespace std;


int main()
{
    int num1;
    int num2;
    
    cin >> num1;
    cin >> num2;
    
    int a = num2 % 10;
    int b = (num2 / 10) % 10;
    int c = num2 / 100;
    
    cout << num1 * a << endl;
    cout << num1 * b << endl;
    cout << num1 * c << endl;
    cout << num1 * num2 << endl;
    
    return 0;
}