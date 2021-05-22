#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int i;
//    vector<int>vec;
//    vector<int>save;
    queue<int>qq;
    while(scanf("%d", &t), t){
        for(i=1; i<=t; i++){
            qq.push(i);
        }
        int k;
        cout<<"Discarded cards:";
        while(qq.size() > 1){
            cout<<" "<<qq.front();
            qq.pop();
            k = qq.front();
            qq.pop();
            if(!qq.empty()){
                    cout<<",";
               }
            qq.push(k);
            }
        cout<<"\nRemaining card: "<< qq.front()<<endl;
        qq.pop();

    }

    return 0;
}
