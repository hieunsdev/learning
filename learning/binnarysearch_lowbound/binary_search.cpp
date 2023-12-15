

/* (so dau tien + so cuoi cung)/2 => lay so o giua so sanh xem so can tim nam ben phai hay trai
  ==>chia doi den khi nao` tim duoc or het so thi thoi
  */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ls(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[x] == x)
            return true;
    }
    return false;
}
/* so dau tien ben trai : l
 * so dau tien ben phai : r (phan tu cuoi cung` = n-1)
 * so dung o giua: m
 * phan tu can` tim`: x
 */
bool bs(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            return true;
        }
        else if (a[m] < x)
        {
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return false;
}

void _vector()
{
    int n, x;
    cout << "nhap n = ";
    cin >> n;
    cout << "nhap phan tu can tim: ";
    cin >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cout << "n[" << i << "] = ";
        cin >> v[i];
    }
    if (binary_search(v.begin(), v.end(), x))
        cout << "Found\n";
    else
        cout << "not found\n";
}

// tim vi tri dau tien cua 1 phan tu x trong mang? da sap xep
int first_pos(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            res = m;
            r = m - 1;
        }
        else if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    cout << "the first position is: n[" << res << "]" << endl;
    return res;
}

int last_pos(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            res = m;
            l = m + 1;
        }
        else if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    cout << "the last position is: n[" << res << "]" << endl;
    return res;
}

int main()
{
    //_vector();
    int n, x;
    cout << "Enter n on the screen: ";
    cin >> n;
    cout << "Enter the element to search for: ";
    cin >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "n[" << i << "] = ";
        cin >> a[i];
    }
    if (last_pos(a, n, x))
        cout << "done function .. ..\r\n";
    else
        cout << "the function is not running ... \r\n";
    return 0;
}
