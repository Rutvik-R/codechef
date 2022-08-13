#include <iostream>
using namespace std;

int main()
{
    int t, n, dumi, ans;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ans = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> dumi;
            if (dumi > ans)
            {
                ans = dumi;
            }
        }
        cout << ans << endl;
    }

    return 0;
}