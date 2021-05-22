/*input
4 3 3
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, k;
	cin >> n >> k;
	int a =  __gcd(n, k);
	cout<<a<<endl;
	return 0;
}
