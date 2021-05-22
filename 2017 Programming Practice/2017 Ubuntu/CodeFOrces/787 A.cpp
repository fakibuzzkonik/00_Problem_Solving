
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c,d,n,save1 = 0,save2 = 0, c1 = 0;
    vector<int>vec1;
    i=0;
    cin>>a >> b >> c >>d;
        for(j=0; j<100; j++){
            if(j==0){
                save1 = b;
            }else if(j==1){
                save1 = b + a;
            }else{
                save1 = b + a*j;
            }
            vec1.push_back(save1);
        }
        int s = vec1.size();
        for(j=0; j<100; j++){
            if(j==0){
                save2 = d;
            }else if(j==1){
                save2 = d + c;
            }else{
                save2 = d + c*j;
            }
            for(i=0; i<s; i++){
                if(save2 == vec1[i]){
                    cout<<save2<<endl;
                    return 0;
                }
            }
        }

    cout<<-1<<endl;
}
