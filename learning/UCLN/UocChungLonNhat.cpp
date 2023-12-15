/* de quy ham` gcd(int a, int b):
gcd(48, 18)
  |
gcd(18, 48 % 18) = gcd(18, 12)
             |
      gcd(12, 18 % 12) = gcd(12, 6)
                  |
             gcd(6, 12 % 6) = gcd(6, 0)
                         |
                        return 6
*/
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

const int maxn = 1000;
int a[maxn];

int main()
{
    int t;
    cout << "test case = ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "nhap n = ";
        cin >> n;
        int res = 1;
        for (int i = 0; i < n; i++)
        {
            cout << "n[" << i << "] = ";
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                res = max(res, gcd(a[i], a[j]));
            }
        }
        cout << "result = " << res << endl;
    }
    return 0;
}