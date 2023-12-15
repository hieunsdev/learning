#include <iostream>

// max 1 - so lan nhat
// mat 2 - so lon thu 2
int findMaxProduct(int arr[], int n)
{
    if (n < 2)
    {
        std::cout << "Error\n";
        return -1;
    }

    int max1 = arr[0], max2 = arr[1], tmp = 0;
    if (max1 < max2)
    {
        tmp = max2;
        max2 = max1;
        max1 = tmp;
    }

    int maxProduct;
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }
    std::cout << max1 << " * " << max2;

    return maxProduct = max1 * max2;
}

int main()
{
    int arr[] = {3, 5, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMaxProduct(arr, n);

    if (result != -1)
    {
        std::cout << " = " << result << "\n";
    }

    return 0;
}
