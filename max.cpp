#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The maximum number is " << (a > b ? a : b) << endl;
    return 0;
}