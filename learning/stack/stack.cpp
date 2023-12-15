#include <iostream>
#include <stack>
using namespace std;

// LIFO  : last in first out
// push  : them phan tu vao stack
// pop   : xoa' phan tu ra khoi stack
// top (function)   : lay ra phan tu dinh? cua stack
// size (function)  : tra ve so luong phan tu
// empty (function) : check xem stack co rong~ hay khong. TRUE = rong~ || FALSE = khong rong~
// do phuc tap   : O(1)

void basic_stack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    cout << st.top() << endl;
}

void binary_stack()
{
    stack<int> st;
    int n;
    cin >> n;
    while (n != 0)
    {
        st.push(n % 2);
        n = n / 2;
        cout << st.top() << endl;
    }
}

// 3 4 2 5 1 6 2
// neu so nao` lon hon so hien tai -> day? vao stack
void next_greater_element()
{
    int n;
    cin >> n;
    int a[n], b[n];         // b[n] de luu ket qua
    for (int &x : a)        // nhap cac phan tu cua mang
        cin >> x;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (st.empty()) // = TRUE => rong~
        {
            st.push(i);
        }
        else
        {
            while (!st.empty() && a[st.top()] < a[i]) // trong khi stack co phan tu va` phan tu dau tien cua stack < a[i]
            {
                b[st.top()] = a[i];         // cap nhat phan tu dau tien = a[i]
             //   st.pop();                   //  
            }
            st.push(i);
        }
    }
    while (!st.empty())
    {
        b[st.top()] = -1;
        st.pop();
    }
    for (int x : b)
        cout << x << endl;
}

int main()
{
    // const auto a = 2;
    // cout << a << endl;
    // binary_stack();
    next_greater_element();
    return 0;
}
