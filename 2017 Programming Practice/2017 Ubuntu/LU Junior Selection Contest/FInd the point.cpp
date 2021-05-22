#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c;
    cin >> t;
    while(t--){
        int x1,x2,y1,y2,z1,z2,temp1,temp2;
        cin >> x1 >> x2 >> y1 >> y2;
        temp1 = y1 - x1;
        temp2 = y2 - x2;

        cout<< temp1+ y1 <<" "<<temp2+y2<<endl;


    }
}
