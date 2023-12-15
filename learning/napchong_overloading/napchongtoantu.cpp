#include <iostream>
#include <algorithm>
#include <iomanip> // thu vien setprecision

using namespace std;

// class : lop
// attribute : thuoc tinh
// method, behavior : phuong thuc
// object : doi tuong

/* cac ham`, cau truc:
 - implementation function : ham` thuc hien
 - constructor : ham khoi tao
 - destructor : ham huy?
    -> duoc goi khi doi tuong duoc ket thuc or xay dung 1 doi tuong SinhVien trong ham`/{}/khoi tao ben ngoai`. Ham ket thuc ->  Destructor duoc goi
 - this pointer : con tro? this
 - setter - getter : su dung thuoc tinh trong private
                    ( setter: take attribute public in class.Later, point it in attribute private
                      getter: using function outside to call attribute public ==> from that, can using attribute private)
 - static variable : Variables are common to the entire class but cannot be used outside the class
 - friend function : call attribute in the private class when the function is not in the class
*/

// tinh chat:
// - encapsulation : doi goi'
// - access modifier:
//  1. private
//  2. public
//  3. protected

class SinhVien
{
private:
    string id, ten, ns;
    double diem;
    static int dem;

public:
    SinhVien();                               // constructor - cung ten voi class va k co ham` tra ve
    SinhVien(string, string, string, double); // constructor
    ~SinhVien();                              // ham` huy?

    void nhap();
    void in();
    void SapXepGiamDan();
    double getterGPA();
    void setterGPA(double gpa);
    void CountVariable();
    int ReturnCount();
    friend void _friend_data(SinhVien);
    friend void Chuanhoa(SinhVien &);
};

// SinhVien::SinhVien(string id, string ten, string ns, double diem)
// {
//     this->id = id;
//     this->ten = ten;
//     this->ns = ns;
//     this->diem = diem;
// }

SinhVien::SinhVien()
{
    id = ten = ns = "";
    diem = 0;
}

void SinhVien::nhap()
{
    cout << "id: ";
    cin >> id;
    cin.ignore();
    cout << "ten: ";
    cin >> ten;
    cin.ignore();
    cout << "birth: ";
    cin >> ns;
    cin.ignore();
    cout << "pga: ";
    cin >> diem;
}

void SinhVien::in()
{
    cout << id << " " << ten << " " << ns << " " << fixed << setprecision(2) << diem << endl;
}
// setter
void SinhVien::setterGPA(double gpa)
{
    this->diem = gpa;
}

SinhVien::~SinhVien()
{
    cout << "Ham huy";
}

// getter
double SinhVien::getterGPA()
{
    return this->diem;
}
bool cmp(SinhVien a, SinhVien b)
{
    return a.getterGPA() > b.getterGPA();
}

void SinhVien::SapXepGiamDan()
{
    SinhVien x;
    SinhVien a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i].nhap();
    }

    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        a[i].in();
    }
    cout << "=======" << endl;
}

// static variable
int SinhVien::dem = 0;
void SinhVien::CountVariable()
{
    dem++;
}
int SinhVien::ReturnCount()
{
    return dem;
}

//-------------------- friend function
void _friend_data(SinhVien a)
{
    cout << a.id << " " << a.ten << " " << a.ns << " " << a.diem << endl;
}

void Chuanhoa(SinhVien &a)
{
    string res = " ";
    stringstream ss(a.ten);
    string token;
    // Vòng lặp này duyệt qua chuỗi ss, lấy từng từ một và lưu trữ nó trong biến token.
    while (ss >> token)
    {
        // res = res + toupper(token[0]);
        res += toupper(token[0]);
        for (int i = 1; i < token.length(); i++)
        {
            res += tolower(token[i]);
        }
        res += " ";
    }
    res.erase(token.length() - 1);
    a.ten = res;
}
int main()
{
    SinhVien x, y;
    // x.SapXepGiamDan();

    // getter - setter
    x.setterGPA(2.66);
    cout << x.getterGPA() << endl
         << "=======" << endl;

    // static variable
    // for (int i = 0; i < 5; i++)
    // {
    //     x.CountVariable();
    // }
    // cout << x.ReturnCount() << " " << y.ReturnCount() << endl;

    // friend function
    x.nhap();
    _friend_data(x);
    return 0;
}