#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;


    int n,k,t ;
    cin >> n;
    vector<int>d;
    d.push_back(1);
    for(int i = 2; i<=n; i++){
        for(auto it = d.begin(); it != d.end(); ++it){
            *it *= i;
        }
        ///if n = 5 then d[0] = 20, d[1] = 10
        /// HOW it is possible ??
        for (size_t j = 0; j < d.size(); ++j){

            if(d[j] < 10)
                continue;

            if(j == d.size() - 1)
                d.push_back(0);

            d[j+1] += d[j] / 10;
            d[j] %= 10;
        }
    }

    for (i = d.size()-1; i>=0; i--)
        cout << d[i];

    return 0;


    cout<<"SIZE OF VECTOR " <<d.size()<<endl;
}
