/*------su dung voi cac bai toan lien quan toi tan suat xuat hien cac phan tu trong mang -----------*/

/*
 * co 3 phuong thuc chinh:
 *   - them 1 cap key-value
 *   - truy xuat gia tri thong qua key
 *   - remove cap key-value trong map
 */

/* Ung dung:
 *   - tim kiem, truy cap, thay doi du lieu hieu qua
 *   - Xac dinh tinh duy nhat. Tuc la k the co 2 key trong 1 map (key trung nhau -> xoa key moi nhat)

 */

// map <datatype1 (key), datatype 2 (value)> tenbien;
//  tim` kiem thong qua key (value co the trung` nhau con key thi khong)

#include <iostream>
#include <map>

using namespace std;

void _map()
{
    map<int, int> mp;
    mp[100] = 200;         // them 100 va 200 vao map
    mp.insert({200, 400}); // them 1 cap key-value
    cout << mp.size() << endl;

    for (auto it : mp) // duyet iterator tu it den het map mp
    {
        cout << it.first << " " << it.second << endl;
    }
}

// dung` tuong tu nhu map
void _multimap()
{
    multimap<int, int> mmp;
    mmp.insert({1, 100});
    cout << mmp.size() << endl;
}

void dem_so_lan_xuat_hien_trong_map()
{
    map<int, int> mp;
    int n;
    cout << "nhap n = ";
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cout << "n[" << i << "] = ";    
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] != 0)
        {
            cout << "so lan xuat hien cua " << a[i] << " la: " << mp[a[i]] << endl;
            mp[a[i]] = 0;
        }
    }
}

void dem_string()
{
    map<string, int> mp;
    int n;
    cout << "nhap n = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    cout << "-------\n";
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}

int main()
{
    //    _map();
    dem_so_lan_xuat_hien_trong_map();
    //    dem_string();
    return 0;
}