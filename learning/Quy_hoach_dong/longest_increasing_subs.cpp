// longest increasing subsequence = Bài Toán Dãy Con Tăng Dài Nhất
/* Ln = max(Ln, l0 + 1)
 *     0 3 2 8 4 5
 * L = 1 2 2 3 3 4
 * - Xét phần tử đứng trước nó. vdu: a[4] thì xét a[1]. a[2]...
 * - Nếu có phần tử nào lớn hơn thì L = L của phần tử đó + 1.
 * vdu: a[4] có a[0] = 0 có L = 1 -> L = 1+1 = 2
 *              a[1] = 3 có L = 2 -> L = 2+1 = 3
 *              a[2] = 2 có L = 2 -> L = 2+1 = 3
 *              a[3] thì 8 > 4 nên bỏ qua
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // độ dài của dãy con tăng dài nhất kết thúc ở chỉ số i
    // L[i] = max[L[i], L[j]+1] : a[i] > a[j]
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cout << "n[" << i << "] = ";
        cin >> a[i];
    }
    cout << "check: ";
    for (auto it : a)
    {
        cout << it << " ";
    }
    vector<int> L(n, 1);
    for (int i = 0; i < n; i++)
    {
        // duyệt qua từng phần tử đứng trước i
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                L[i] = max(L[i], L[j] + 1);
            }
        }
    }
    cout << "\r\nresult = " << *max_element(L.begin(), L.end()) << endl; // max_element: in ra phan tu lon nhat trong vector
    return 0;
}   