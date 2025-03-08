// Array Initilization

#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    cout << "1D Array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "2D Array" << endl;

    int arr2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }

        cout << endl;
    }
}