#include <iostream>
using namespace std;
int main()
{
    int age;
    int agetotal = 0;
    int numofpplentered = 0;
    cout << "Enter age or -1 to quit" << endl;
    cin >> age;
    while(age != -1){
        agetotal = agetotal + age;
        numofpplentered++;
        cout << "Enter next age or -1 to quit" << endl;
        cin >> age;
        }
        cout << "Num of ppl entered: " << numofpplentered << endl;
        cout << "Average Age: " << agetotal/numofpplentered << endl;
    return 0;
}
