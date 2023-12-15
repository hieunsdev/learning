/* ---Tim cac so co trong mang A nhung khong trong mang B--- */

#include <iostream>
#include <set>
using namespace std;

void check_sets()
{
    int t;
    cout << "nhap so lan kiem tra = ";
    cin >> t;
    while (t--)
    {
        int n, m;
        cout << "nhap n = ";
        cin >> n;
        int a[n], b[m];
        int index = 0;
        for (int &x : a) // duyet qua tat ca phan tu trong mang? a
        {
            cout << "n[" << index << "] = ";
            cin >> x;
            index++;
        }
        cout << "------------------" << endl;

        cout << "nhap m = ";
        cin >> m;
        set<int> se;
        // map<int,bool> mp;
        for (int i = 0; i < m; i++)
        {
            int x;
            cout << "m[" << i << "] = ";
            cin >> x;
            se.insert(x);
        }

        bool check = false;
        cout << "Cac so: ";
        for (int x : a)
        {
            /*nếu phần tử không được tìm thấy, find() trả về iterator đến vị trí
            "sau cùng" của container (sau phần tử cuối cùng). Iterator này thường được biểu diễn bởi end()*/
            if (se.find(x) == se.end())
            // if (mp.finx(x) == mp.end())
            {
                cout << x << " ";
                check = true;
                // mp[x] = true;
            }
        }
        if (!check)
        {
            cout << "NOT FOUND\n";
        }
        else
            cout << endl;
    }
    cout << "co trong mang A nhung khong co trong mang B\r\n";
}

int main()
{
    check_sets();
    return 0;
}