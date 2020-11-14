#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
    cout << "Please input a int number：" << endl;
    int x = 0;
    cin >> x;
    cout << oct << x <<endl;
    cout << dec << x <<endl;
    cout << hex << x <<endl;
    
    cout << "Please input a bool type number (0,1)" << endl;
    bool y = false;
    cin >> y;
    cout << boolalpha << y << endl;

}
