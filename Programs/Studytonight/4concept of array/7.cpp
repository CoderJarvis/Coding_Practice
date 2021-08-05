#include <iostream>
using namespace std;
int main()
{

    int arr[100];
    cout << "enter the number of element you want to insert\n";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "your array is\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
       for(int j=0;j<n;j++)
       {
            if (arr[i] == arr[i + 1])
        {
            arr[i] = arr[i + 1];
            c++;
            for (i = i + 2; i < n; i++)
            {
                arr[i - 1] = arr[i];
            }
        }
       }
    }
    n=n-c;

      cout << "\nyour array is\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}