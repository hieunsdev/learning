// ap dung cho mang? da duoc sap xep
// tra ve vi tri dau tien cua phan tu > key

// 7 3
// 0 1 1 2 3 3 9
// -> result = 9
#include <iostream>
#include <algorithm>

using namespace std;

void upper_vector()
{
    int n, key;
    cout << "nhap n = ";
    cin >> n;
    cout << "nhap key = ";
    cin >> key;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cout << "n[" << i << "] = ";
        cin >> a[i];
    }
    auto it = upper_bound(a.begin(), a.end(), key); // tim vi tri dau tien cua phan tu >= x trong mang a
    int pos = it - a.begin();
    if (it == a.end())
    {
        cout << "khong co phan tu nao >= " << key << endl;
    }
    else
    {
        cout << "result: value = " << *it << endl;
        cout << "pos = a[" << pos << "]" << endl;
        // cout << "pos = a[" << distance(a.begin(),it)<< "]" << endl;
    }
}

void _upper_bound()
{
    int n, key;
    cout << "nhap n = ";
    cin >> n;
    cout << "nhap key = ";
    cin >> key;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "n[" << i << "] = ";
        cin >> a[i];
    }

    auto it = upper_bound(a, a + n, key); // tim vi tri dau tien cua phan tu >= x trong mang a
    // auto: tu dong nhan kieu du lieu phu hop voi bien

    int pos = it - a;

    if (it == a + n)
    {
        cout << "khong co phan tu nao >= " << key << endl;
    }
    else
    {
        cout << "result: value = " << *it << endl;
        cout << "pos = a[" << pos << "]" << endl;
    }
}
int main()
{
    upper_vector();
    // _lower_bound();
    return 0;
}