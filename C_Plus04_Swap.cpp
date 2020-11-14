#include <iostream>
//#include "swap.h"
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
}


int main()
{
    
    int val1=5200;
    int val2=1314;
    cout << "Before Swap" << endl;
    cout << "val1="<< val1<<endl;
    cout << "val2="<< val2<<endl;
    swap(val1,val2);
    cout << "After Swap" << endl;
    cout << "val11="<< val1<<endl;
    
    cout << "val22="<< val2 << endl;
    std::cout<<"hello world";



    return 0;
}
