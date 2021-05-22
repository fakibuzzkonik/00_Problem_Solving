#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k,t ;
    cin >> n;
    vector<int> d;
    d.push_back(1);
    for(int i = 2; i<=n; i++){
        for(int j=0; j<d.size(); j++){
            d[j] *= i;
            cout<<"X"<<j;
        }cout<<endl;
        cout<<"SIZE " <<d.size()<<" "<<d[0]<<endl;

        for (int j=0; j < d.size(); ++j){

            if(d[j] < 10)
                continue;

            if(j == d.size() - 1)
                d.push_back(0);

            d[j+1] += d[j] / 10;
            d[j] %= 10;
        }
    }

	return 0;
}
