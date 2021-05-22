#include<bits/stdc++.h>
using namespace std;
int main(){
    int value;
    while(cin >> value && value != 0){
        queue<int>q;
        vector<int>vec;

        int i,j,t,a,b,c,d,e,f,k,n,m;
        cout<<"Discarded cards: ";
        for(i= 1; i<= value; i+= 2){
            cout<<i<<" ";
        }
        for(i = 2; i<=value; i+= 2){
            q.push(i);
        }
        i = 1;
        while(!q.empty()){
            int x = q.front();
            if(value % 2 == 0){
                if(i%2 == 0){
                    q.push(x);
                }else{
                    vec.push_back(x);
                }
            }else{
                if(i%2 != 0){
                    q.push(x);
                }else{
                    vec.push_back(x);
                }
            }
            q.pop();
            i++;
        }

        int len = vec.size();
        for(i=0; i<len-1; i++)
            cout<<vec[i]<<", ";
        cout<<"\nRemaining card: "<<vec[len-1]<<endl;

    }
}
