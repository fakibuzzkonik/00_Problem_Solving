

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n,a,b,count = 0;

    cin >> n >> t;

    for(i=0; i<n; i++){
        for(j=0; j<t; j++){
            cin >> a >> b;
            if(a == 1 || b == 1){
                count++;
            }
        }
    }

    cout << count << endl;
}
