// sap xep chon
// duyet mang? xem con` phan tu nao` nho? hon khong
// neu co thi cap nhat vao min_pos
// ket thuc for thi swap(a[i].min_pos)

#include <iostream>

using namespace std;

// duyet theo vi tri cua phan tu? chu khong duyet gia tri cua phan` tu? trong mang?
void SelectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_pos])
            {
                min_pos = j;
            }
        }
        swap(a[i], a[min_pos]);
    }
}

void SelectionSort_2(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                swap(a[j], a[i]);
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

    SelectionSort_2(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}