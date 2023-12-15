// sap xep cac phan tu trong mang?
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*  neu muon sap xep tu mang? a[x] -> a[y] => a[x] -> a[y- 1]
 * Voi: x = phan tu bat dau` & y = phan tu ket thuc
 * ==> sort (a + x, a + y + 1)
 */

void _sort_array()
{
    int a[10000], n;
    cout << "nhap n = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sort(a, a + n);             // sap xep tu dau` den cuoi mang?. Tang dan`
    sort(a, a + n, greater<int>()); // sap xep giam? dan`
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
void _sort_vector()
{
    int n;
    cout << "nhap n = ";
    cin >> n;
    vector<int> a(n);
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void _sort_string()
{
    int n;
    cout << "nhap n = ";
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (string x : a)
    {
        cout << x << " ";
    }
}

void _sort_character()
{
    string s;
    cout << "nhap s = ";
    getline(cin, s);

    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        cout << s[i] << " ";
    }
    cout << endl;
}

// sap xep theo first
void _sort_pair()
{
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);
    for (auto it : a)
    {
        cout << it.first << " " << it.second << endl;
    }
}

// comparator
// a, b la 2 phan tu?, kieu tuong ung voi mang? a[n]
bool cmp(int a, int b)
{
    if (a > b) // neu a dung truoc b ==> thuat toan giam dan`
        return true;
    else
        return false;
    // or
    //  return a > b;
}

// sap xep cac phan tu trong mang? theo thu tu tang dan` ve gia tri tuyet doi
bool cmp_stable(int a, int b)
{
    return abs(a) < abs(b);
}

// sap xep cac phan tu trong mang? theo thu tu tang dan` va giu nguyen vi tri ban dau`
// 8 : 1 2 1 5 -5 -2 -1 4
// output
// 1 1 -1 2 -2 4 5 -5
// sap xep tang dan` tu 1 -> 5 nhung vi tri van giu nguyen
void _stable_sort()
{
    int n;
    cout << "nhap n = ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    sort(a, a + n, cmp_stable);
    for (int i : a)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    //   _sort_character();
    _stable_sort();
    return 0;
}