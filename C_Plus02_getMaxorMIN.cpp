#include <iostream>
#include <stdlib.h>
using namespace std;

namespace CompA
{
    int getMAXorMIN( int *arr, int count, bool getMAX)
{
    int temp = arr[0];
    if (getMAX)
    {
        for (int i=1 ; i < count; i++)
        {
            if (temp < arr[i])
            {
                temp = arr[i];
            }

        }
    }
    else
    {
        for (int i ; i < count; i++)
        {
            if (temp > arr[i])
            {
                temp = arr[i];
            }
        }
    }
    return temp;

}

}

using namespace CompA;
int main (void)
{
    int arrA[4] = {2,4,555,77};
    bool isMax = false;
    cin >> isMax;
    cout << "is ok?" << endl;
    cout << getMAXorMIN(arrA, 4, isMax) << endl;
