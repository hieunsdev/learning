#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 1, 7, 8, 9, 10, 1};
    int frequency[1000] = {0};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) 
    {
        frequency[arr[i]]++;
    }
    cout << "So lan lap lai cua moi phan tu trong mang:\n";
    
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        if (frequency[i] > 0) {
            cout << "Phan tu " << i << ": " << frequency[i] << " lan\n";
        }
    }
    return 0;
}
