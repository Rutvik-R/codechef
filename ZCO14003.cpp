#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int potantial[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> potantial[i] ;
	}
	for (int i = 0 ; i < n; ++i)
	{
		for (int j = i + 1 ; j < n; ++j)
		{
			if (potantial[i] > potantial[j]) swap(potantial[i] , potantial[j]);
		}
	}
	for (int i = 0; i < n ; ++i)
	{
		cout << potantial[i] << endl ;
	}
	int ans = potantial[0] * n ;
	for (int i = 0; i < n; ++i)
	{
		if (ans < potantial[i] * (n - i)) ans = potantial[i] * (n - i) ;
	}
	cout << ans << endl;
}