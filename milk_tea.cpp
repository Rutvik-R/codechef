#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int z = 0; z < t; z++)
    {
        int n, m, p;
        cin >> n >> m >> p;
        string performance[n], forbidden[m], fans = "";
        vector<int> ans(p, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> performance[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> forbidden[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < p; j++)
            {
                if (performance[i][j] == '1')
                    ans[j]++;
                else
                    ans[j]--;
            }
        }
        for (int i = 0; i < p; i++)
        {
            if (ans[i] >= 0)
                fans.push_back('1');
            else
                fans.push_back('0');
        }
        cout << fans<<endl;
        if(forbidden->find(fans) != -1) cout<<"same"<<endl;       
    }
    return 0;
}
