#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        string a;
        a.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m;
        cin >> m;
        string b;
        b.resize(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        string d;
        d.resize(m);
        for (int i = 0; i < m; i++)
        {
            cin >> d[i];
        }

        string front = "";
        string back = "";
        for (int i = 0; i < m; i++)
        {
            if (d[i] == 'D')
            {
                back += b[i];
            }
            else
            {
                front = b[i] + front;
            }
        }
        string ans = front + a + back;
        cout << ans << endl;
    }
}