/*
    chia mang? thanh 2 phan` left va` right

*/

#include <iostream>
#include <vector>
using namespace std;

void _Merge(int a[], int l, int m, int r)
{
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    while (i < x.size() && j < y.size())
    {
        if (x[i] <= y[j])
        {
            a[l] = x[i];
            l++;
            i++;
        }
        else
        {
            a[l] = y[j];
            l++;
            j++;
        }
    }
    while (i < x.size())
    {
        a[l] = x[i];
        l++;
        i++;
    }
    while (j < x.size())
    {
        a[l] = y[j];
        l++;
        j++;
    }
}

// de quy
void _MergeSort(int a[], int l, int r)
{
    if (l >= r)
        return;
    int m = (l + r) / 2;
    _MergeSort(a, l, m);
    _MergeSort(a, m + 1, r);
    _Merge(a, l, m, r);
}

int main()
{
    int a[100], n = 5;

    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
    _MergeSort(a, 0, n - 1);
    for (int x : a)
    {
        cout << x << " ";
    }
    return 0;
}