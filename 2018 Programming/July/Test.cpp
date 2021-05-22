#include<bits/stdc++.h>

#define sf scanf
#define pf printf

using namespace std ;

int main()
{
    int i,j,a,b,c = 0,d,e,f,t,x;

    while(1){
        cin >> a >> b;
        if(a == 0 && b == 0){
            break;
        }
        set<int>set1;
        set<int>::iterator it;

        for(i=0; i<a; i++){
            cin >> x;
            set1.insert(x);
        }

        for(i=0; i<b; i++){
           cin >> x;
           it = set1.find(x);
           if(it != set1.end()){
                c++;
           }
        }

        cout<< c <<endl;
        c = 0;

    }






}
