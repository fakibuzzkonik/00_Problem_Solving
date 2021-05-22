#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,l,m,n;
    cin >> n;
    int total = 0;
    int team_member = 0;
    for(i = 0 ; i<n; i++){
        cin >> team_member;
        total += team_member;
    }
    if(total%4 != 0){
        total = total/4;
        total++;
        cout<<total<<endl;
    }else{
        cout<<total/4<<endl;
    }
}
