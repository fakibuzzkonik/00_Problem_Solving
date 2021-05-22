#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,t,n,a,b,x,y,z;
    cin >> n;
    vector<int>mi;
    vector<int>plu;
    vector<int>equ;
    int array[n];

    for(i=0; i<n; i++){
        cin >>a;
        array[i] = a;
        if( a < 0)
            mi.push_back(a);
        else if(a > 0)
            plu.push_back(a);
        else if(a == 0)
            equ.push_back(a);
    }

    x = mi.size();
    y = plu.size();
    z = equ.size();

    if(x >= 1 && y >= 1 && z >= 1){
        cout << 1 <<" " << mi[0] <<" ";
//        for(i=0; i<x; i++)
//            cout<<mi[i]<< " ";
        cout<<endl;
        cout << y << " ";
        for(i=0; i<y; i++)
            cout<<plu[i]<< " ";
        cout<<endl;
        cout << equ.size() + mi.size() -1 << " ";
        for(i=0; i<z; i++)
            cout<<equ[i]<< " ";

        for(i=1; i<x; i++)
            cout<<mi[i]<< " ";

        cout<<endl;
    }
    else if(y == 0){
        a = mi[0];
        plu.push_back(a);
        mi.erase(mi.begin()+0);
        a = mi[0];
        plu.push_back(a);
        mi.erase(mi.begin()+0);

        cout << 1 << " " << mi[0];

            cout<<endl;
        cout<< plu.size() << " " ;
            for(i=0; i<plu.size(); i++){
                cout<<plu[i]<< " ";
            }
            cout<<endl;
        cout << equ.size() + mi.size() -1 << " ";
            for(i=0; i<equ.size(); i++){
                cout<<equ[i] << " ";
            }

            for(i=1; i<mi.size(); i++){
                cout<<mi[i]<< " ";
            }
            cout<<endl;


    }


    return 0;
}
