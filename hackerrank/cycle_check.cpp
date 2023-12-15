#include <stdint.h>

#include <iostream>
#include <vector>

template <typename T>
bool checkDup(const T *arr, int length)
{
    if (length <= 2)
    {
        return false;
    }

    // at very first
    T slow = arr[0];
    T fast = arr[arr[0]];

    while (1)
    {
        // if (nextPos > length - 1) {
        //     std::cout << "Value exceed index of array" << std::endl;
        //     return false;
        // }

        std::cout << "Slow = " << slow << ", Fast = " << fast << std::endl;
        if (slow == fast)
        {
            return true;
        }
        slow = arr[slow];
        fast = arr[arr[fast]];
    }
    return false;
}

int main()
{
    int arr[] = {2, 3, 6, 7, 5, 0, 1, 9, 8, 3};

    bool cycle = checkDup<int>(arr, sizeof(arr) / sizeof(int));
    std::cout << cycle << std::endl;
    return 0;
}