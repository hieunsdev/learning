
// Operater - Overloading
// << >>
#include <iostream>

using namespace std;

class SinhVien
{
public:
    string id, ten, ns;
    double gpa;

public:
    friend istream &operator>>(istream &in, SinhVien &a);
    friend ostream &operator<<(ostream &out, SinhVien a);
    bool operator<(SinhVien a);
};

istream &operator>>(istream &in, SinhVien &a)
{
    cout << "nhap id: ";
    in >> a.id;
    cout << "nhap ten: ";
    in.ignore();
    getline(in, a.ten);
    in >> a.ns >> a.gpa;
    return in;
}

ostream &operator<<(ostream &out, SinhVien a)
{
    cout << a.id << " " << a.ten << " " << a.gpa << endl;
}

// nap chong toan tu so sanh
bool SinhVien::operator < (SinhVien a)
{
    return this->gpa < a.gpa;
}

int main()
{
    SinhVien x, y;
    cin >> x >> y;
    if (x<y)
    {
        
    }
    
    return 0;
}