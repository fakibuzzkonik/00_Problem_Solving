#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n,m,a,b,c;
    cin >> n;
    vector<int>vec;
    for(i=0; i<n; i++){
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.begin()+n);
    cout<<vec[n-1];
    for(i=1; i<n-1; i++)
        cout<<" "<<vec[i];
    cout<<" "<<vec[0]<<endl;
    return 0;
}
