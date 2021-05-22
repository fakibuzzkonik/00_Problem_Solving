
/*
	Alfonso2 Peterssen(mukel)
	Codeforces Beta Round #91 (Div. 1 Only)
*/
#include <cstdio>
#include <iostream>
#include <sstream>

#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <map>

#include <cstdlib>
#include <cmath>
#include <cstring>
#include <complex>

using namespace std;

typedef long long int64;

#define SZ(c) ((int)(c).size())
#define ALL(c) (c).begin(), (c).end()
#define REP(i, n) for (int i = 0; i < (int)(n); ++i)
#define FOR(i, l, h) for (int i = (int)(l); i <= (int)(h); ++i)

int l, r;
vector< int64 > L;

void dfs(int64 x)
{
	if (x >= l) L.push_back(x);
	if (x > r) return ;

	//cout<<"LOOP "<<x<<" "<<x * 10 + 4<<" "<<x * 10 + 7<<endl;

	dfs(x * 10 + 4);
	dfs(x * 10 + 7);

}

int main()
{
	cin >> l >> r;

	dfs(0);

//	for(int ii=0; ii<L.size(); ii++){
//        cout<<L[ii]<<" ";
//	}cout<<endl;

	sort(ALL(L));
	/*
	REP(i, SZ(L))
	      cout << L[i] << endl;
	*/

	int64 curPos = l, ans = 0;
	while (curPos <= r)
	{
		int64 lb = *lower_bound(ALL(L), curPos);

		int64 hi = min((int64)r, lb);
		ans += lb * (hi - curPos + 1);

		cout << curPos << " lb = " << lb << " ans = "<<ans <<" hi = "<<hi<<endl;
		curPos = lb + 1;
	}

	cout << ans << endl;


	return 0;
}
