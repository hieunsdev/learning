// sap xep chen`
// while => kiem tra a[i] voi a[i-1]
// neu phan tu truoc no > x => dich phan tu do sang ben phai
// dich den khi x > phan tu dang xet thi chen vao truoc no

#include <iostream>
using namespace std;

void InsertionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = a[i], pos = i - 1;
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

    InsertionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}