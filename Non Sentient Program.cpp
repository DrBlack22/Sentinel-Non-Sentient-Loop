#include <iostream>
using namespace std;
int main()
{
    int x = 1;
    int number;
    int total = 0;
    while(x <= 5){
    cout << "Enter thy #" << endl;
    cin >> number;
    total = total + number;
    x++;}

    cout << "Thy sum is " << total << endl;
    return 0;
}
