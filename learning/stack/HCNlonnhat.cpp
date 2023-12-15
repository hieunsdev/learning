#include <iostream>
#include <stack>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int &x : a)
    {
        cin >> x;
    }

    stack<int> st;
    int res = 1;
    int i = 0;
    while (i < n)
    {
        if (st.empty() || a[i] >= a[st.top()])
        {
            st.push(i);
            ++i;
        }
        else
        {
            int index = st.top(); // chi so cot o dinh? stack
            st.pop();
            // tinh toan dien tich HCN o cot hien tai
            // NOTE: cot hien tai la cot ngan nhat cua HCN do'
            if (st.empty())
            {
                res = max(res, i * a[index]);
            }
            else
                res = max(res, a[index] * (i - st.top() - 1));
        }
    }
    while (!st.empty())
    {
        int index = st.top(); // chi so cot o dinh? stack
        st.pop();
        if (st.empty())
        {
            res = max(res, i * a[index]);
        }
        else
            res = max(res, a[index] * (i - st.top() - 1));
    }
    cout << "res = " << res << endl;
    return 0;
}