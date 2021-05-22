
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,j,t,n,a,b,c;
    int count[5] = { 0 };
    cin>>t;
    for(i=0; i<t; i++){
        cin >> a;
        count[a]++;
    }

    int total = count[4];
    total += count[3];
    total += count[2]/2 + count[2]%2;
    count[1] -= count[3];
    count[1] -= 2* (count[2]%2);
    b = 0;
    if(count[1]>0){
            total += count[1]/4 + (count[1]%4 > 0);
    }
    cout<<total <<endl;
}
