#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i,j,t,a,b,c1 = 0,c2 = 0,distance = 0,temp = 0;

    cin >> n >> m >> k;
    int house[n];

    for(i=0; i<n; i++){
         cin >> a;
         house[i] = a;
    }


    bool gate1 = 1,gate2 = 1;
    for(i=m-2; i>=0 ; i--){
      //  cout<<house[i]<<'z'<<endl;
        c1++;
        if(house[i] <= k && house[i] != 0){
            gate1 = 0;
            break;
        }else{

        }
    }
    if(gate1 != 0)
        c1 = 0;

    for(i=m; i<n; i++){
          //  cout<<house[i]<<endl;
        c2++;
        if(house[i] <= k && house[i] != 0){
                gate2 = 0;
            break;
        }else{

        }
    }
    if(gate2 != 0)
        c2 = 0;

    if(c1 !=0 && c2 != 0)
        cout<<min(c1,c2)*10<<endl;
    else if(c1 == 0)
        cout<<c2*10<<endl;
    else if(c2 == 0)
        cout<<c1*10<<endl;

    return 0;
}
