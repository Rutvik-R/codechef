#include <iostream>
using namespace std;

int main()
{
    int l,ans;
    int t;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        ans = 0;
        l = 0;
        if (s[0] == '>')
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '<')
            {
                l++;
            }
            if (l > 0)
            {
                l--;
                ans++;
            }
            else if(l<0){
                break;
            }
        }
    cout << ans * 2 << endl;
    }

    return 0;
}