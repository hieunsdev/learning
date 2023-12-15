#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

// vector <int> v;
// vector <int> v(n);
// vector <int> v(n, value);

void cout_vector()
{
    int n;
    vector<int> v(n);
    v.push_back(10);
    v.push_back(20);
    cout << "------size of vector: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "v[" << i << "] = " << v[i] << endl;
    }

    cout << "------for each: " << endl;
    for (int x : v)
    {
        cout << x << endl;
    }

    cout << "------iterator: " << endl;
    // interator : con tro thong minh -> truy cap vao cac gia tri ma con tro dang tro toi' -> su dung toan tu "*"
    // *: toan tu dai? tham chieu
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    // thay cho for ben tren khi su dung iterator
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
}

void string_vector()
{
    string s = "hieuns development";
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while (ss >> tmp)
    {
        v.push_back(tmp);
    }
    for (string x : v)
    {
        cout << x << endl;
    }
}

int main()
{
    cout_vector();

    string_vector();
    return 0;
}