// Binary Search

#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key)
{

    // algorithm
    /*
    arr[] = [1,2,3,4,5] and key = 5
    First set low = 0 and high = n-1 = 4
    then set mid = (low + high)/2 = 2 && arr[2] = 3

    mid == key return index

    */

    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int loc = binarySearch(arr, 5, 4);

    if (loc == -1)
    {
        cout << "ERROR 404 , NOT FOUND";
    }
    else
    {
        cout << loc << endl;
    }
}