#include <iostream>
using namespace std;
int main()
{
    int arr[6];
    int n =6;
    cout << "Enter the input " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "printing the array: " << sum << endl;
    return 0;
}