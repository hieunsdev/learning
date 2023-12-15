#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 3, -2, -1, -3, 0, -5, 4, 5, 2, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size);

    int missing_number = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i + 1] - arr[i] > 1)
        {
            missing_number = arr[i] + 1;
            break;
        }
    }

    cout << "The missing number is: " << missing_number << std::endl;
    return 0;
}
