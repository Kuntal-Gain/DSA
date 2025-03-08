// Linear Search

#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    int loc = linearSearch(arr, 5, 5);

    if (loc != -1)
    {
        cout << "Element " << 5 << " Is Found in Location " << loc << endl;
    }
    else
    {
        cout << "Error 404 , Element " << 5 << "Not Found" << endl;
    }
}