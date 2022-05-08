#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "size :";
    cin >> n;
    int arr['n'];
    cout << "Enter Array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cout << "Enter No of student :";
    cin >> m;
    sort(arr, arr + n);
    int min=INT_MAX;

    for (size_t i = 0; i < n; i++)
    {
        int diff=arr[i+m-1]-arr[i];
        if(diff<min)
            min=diff;
    }
    cout<<"Minimum Difference : "<<min;
    return 0;
}