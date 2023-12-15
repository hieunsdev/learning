// sap xep noi bot
// so sanh 2 phan tu lien` ke` nhau
//  n - i - 1 : phan tu cuoi cung chua dc sap xep thu i

#include <iostream>
using namespace std;

void BubbleSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // Số lượng phần tử chưa được sắp xếp sau mỗi lần lặp giảm đi 1 => cần duyệt qua n - 1
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{
    int a[10000], n;
    cout << "n = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    BubbleSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}