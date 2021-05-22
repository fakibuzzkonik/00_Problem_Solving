#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c,n,k,l,m,o,p,q,r,sum = 0;
    cin >> n >> k;
    int arr[n] ;
    for(i=0; i<n; i++){
        cin >> a >> b;
        c = b - k;
        sum = a + c;
        arr[i] = sum;

    }

    sort(arr, arr+n);
    cout<<arr[n-1]<<endl;
    return 0;
}
