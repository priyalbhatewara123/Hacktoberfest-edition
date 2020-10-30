#include <iostream>
using namespace std;

int main()
{
    int num;
    float arr[100];

    cout << "Enter total number of elements(1 to 100): ";
    cin >> num;
    cout << endl;

    // Store number entered by the user
    for(int i = 0; i < num; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> arr[i];
    }

    // Loop to store largest number to arr[0]
    for(int i = 1;i < num; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << "Largest element = " << arr[0];

    return 0;
}
