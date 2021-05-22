#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c = 0,n,m,k,s;
    cin >> n;
    int arr[n][2];

    for(i=0; i<n; i++){
        cin >> a >> b;
        arr[i][0]=a;
        arr[i][1]=b;
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(arr[i][0] == arr[j][1] && i != j){
                c++;
            }
        }
    }
    cout<<c<<endl;//1,1,1,,1,1
}
