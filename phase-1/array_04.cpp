// Binary Search - Recursion

#include <iostream>
using namespace std;

int binarySearch(int *arr, int low, int high, int key)
{

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
            return binarySearch(arr, mid + 1, high, key);

        else
            return binarySearch(arr, low, mid - 1, key);
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int loc = binarySearch(arr, 0, 4, 4);

    if (loc == -1)
    {
        cout << "ERROR 404 , NOT FOUND";
    }
    else
    {
        cout << loc << endl;
    }
}