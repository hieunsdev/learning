#include <iostream>
using namespace std;

class Person
{
private:
    string name, address;

public:
    string getname()
    {
        return name;
    }
    string getadress() { return address; }
    void setname(string name)
    {
        this->name = name;
    }
    void setadress(string adress)
    {
        this->address = adress;
    }
};

// studen ke thua thuoc tinh cua person
class student : public Person
{
private:
    float gpa;

public:
    float getgpa()
    {
        return gpa;
    }
    void setgpa(float gpa)
    {
        this->gpa = gpa;
    }
};

int main()
{
    student a;
    a.setadress("Tay Ho");
    a.setname("HieuNS");
    a.setgpa(3.3);
    cout << a.getadress() << endl;
    cout << a.getname() << endl;
    cout << a.getgpa() << endl;

    return 0;
}
