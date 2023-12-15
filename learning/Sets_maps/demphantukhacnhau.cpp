#include <iostream>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

void _sets()
{
    int n;
    cout << "nhap so lan kiem tra = ";
    cin >> n;
    while (n--)
    {
        int n;
        cout << "nhap n = ";
        cin >> n;
        set<int> se;
        for (int i = 0; i < n; i++)
        {
            int x;
            cout << "n[" << i << "] = ";
            cin >> x;
            se.insert(x); // insert vao` set
        }
        cout << "so phan tu khac nhau la: " << se.size() << endl; // in ra so luong phan tu trong set
    }
}

void _maps()
{
    int n;
    cout << "nhap so lan kiem tra = ";
    cin >> n;
    while (n--)
    {
        int n;
        cout << "nhap n = ";
        cin >> n;
        map<int, bool> mp;
        for (int i = 0; i < n; i++)
        {
            int x;;
            cout << "n[" << i << "] = ";
            cin >> x;
            mp[x] = true;
        }
        cout << "so phan tu khac nhau la: " << mp.size() << endl; // in ra so luong phan tu trong set
    }
}

void _soft()
{
    int n;
    cout << "nhap so lan kiem tra = ";
    cin >> n;
    while (n--)
    {
        int n;
        cout << "nhap n = ";
        cin >> n;
        int a[n], index;
        for (int &x : a)
        {
            cout << "n[" << index << "] = ";
            cin >> x;
            index++;
        }
        sort(a, a + n);
        int ans = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
                ans++;
        }
        cout << "so phan tu khac nhau la: " << ans << endl;
    }
}

int main()
{
    //_sets();
    //_maps();
    _soft();
    return 0;
}