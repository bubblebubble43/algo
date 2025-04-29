#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int price;
    cin >> a >> b >> c;
     
    if(a == b && b == c)
    {
        price = 10000 + a * 1000;
    } else if(a == b || a == c)
    {
        price = 1000 + a * 100;
    }else if(b == c)
    {
        price = 1000 + b * 100;
    }else
    {
        int max_num = max(a, max(b,c));
        price = max_num * 100;
    }
    cout << price << endl;
    return 0;
}