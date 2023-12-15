#include <iostream>
#include <set>
using namespace std;

// _set:
//    - tu dong xoa cac phan tu giong nhau
//    - tu dong sap xep theo thu tu tang dan

/* su dung de:
    - tim kiem phan tu trong set (find, count)
    - dem phan tu khac nhau trong mang?
    - tim kiem nhanh
*/
// O(logn)

// iterator : s. begin () -> phan tu dau tien |  s.rbegin() -> phan tu cuoi cung

/* insert : chèn một phần tử mới vào cấu trúc dữ liệu hiện tại
   find   : tìm kiếm một giá trị cụ thể trong cấu trúc dữ liệu
   count  : đếm số lần xuất hiện của một giá trị
   erase  : xóa các phần tử từ cấu trúc dữ liệu
*/

void _set()
{
    set<int> s;
    s.insert(100);
    s.insert(500);
    s.insert(100);
    s.insert(400);

    for (int x : s)
    {
        cout << x << endl;
    }
    cout << "check: ";
    for (int i = 0; i < 10; i++)
    {
        s.insert(i);
        cout << i << " ";
    }
    cout << "\r\nsize = " << s.size() << endl;

    if (s.count(4) != 0) // nếu có phàn tử thứ 4 trong vector s
    {
        cout << "found \n";
    }
    else
        cout << "not found \n";
}

void TimCacSoKhacNhau()
{
    set<int> t;
    int a[1000];
    int n;
    cout << "nhap n = ";
    cin >> n;
    for (int x = 0; x < n; x++)
    {
        int k;
        cout << "n[" << x << "] = ";
        cin >> k;
        t.insert(k);
    }
    cout << "Co tong " << t.size() << " so khac nhau" << endl;
}

void TimCacSoKhacNhau_2()
{
    int t;
    cout << " nhap so lan can kiem tra: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "----> Nhap so phan tu can kiem tra: ";
        cin >> n;
        set<int> st;

        for (int i = 0; i < n; i++)
        {
            cout << "n[" << i << "] = ";
            int x;
            cin >> x;
            st.insert(x);
        }
        cout << "so phan tu khac nhau la: " << st.size() << endl;
    }
}

void TimCacSoBiTrung()
{
    multiset<int> mySet;

    cout << "Nhap cac so nguyen (nhap -1 de ket thuc):\n";
    int num;
    while (true)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }
        mySet.insert(num);
    }
    cout << "Cac so trong multiset:\n";
    for (const auto &element : mySet)
    {
        cout << element << " ";
    }

    cout << "\nCac so bi trung lap:\n";
    for (auto it = mySet.begin(); it != mySet.end(); ++it)
    {
        if (mySet.count(*it) > 1)
        {
            cout << *it << " ";
        }
    }
    cout << endl;
}

// cho mang n phan tu va so nguyen k, doi voi 1 day con lien kiep co k phan tu
// tim so lon nhat trong day con do

void Tim_So_Lon_Nhat_Trong_Day_K_Cua_N_Phan_Tu()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
    {
        cin >> x;
    }
    multiset<int> ms;
    cout << "check: ";
    for (int i = 0; i < k; i++) // tim kiem cac phan tu trong cua so K
    {
        ms.insert(a[i]); // gan k phan tu vao` multiset
        cout << a[i];
    }
    for (int i = k; i < n; i++)
    {
        // iterator
        cout << *ms.rbegin() << " "; // in ra phan tu lon nhat (phan tu cuoi cung)
        ms.erase(ms.find(a[i - k])); // xoa phan tu dau tien cua cua so hien tai
        ms.insert(a[i]);             // chen phan tu tiep theo vao cua so
    }
    cout << *ms.rbegin() << endl;
}
int main()
{
    _set();
    //    TimCacSoKhacNhau_2();
    //  TimCacSoBiTrung();
    //  Tim_So_Lon_Nhat_Trong_Day_K_Cua_N_Phan_Tu();
    return 0;
}