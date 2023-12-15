#include <iostream>
#include <vector>
using namespace std;

void _MergeSort(int a[], int l, int m, int r)
{
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    while (i < x.size() && j < y.size())
    {
        if (x[i] <= y[i])
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
        j++;
    }
    while (j < x.size())
    {
        a[l] = y[j];
        l++;
        j++;
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

    _MergeSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}