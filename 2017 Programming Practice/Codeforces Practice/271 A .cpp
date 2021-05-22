#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a,b,c,d,numb,save;
    cin >> numb;


    for(i= numb+1; i!=1; i++){
            save = i;
            a = save % 10; save = save / 10;
            b = save % 10; save = save / 10;
            c = save % 10; save = save / 10;
            d = save % 10; save = save / 10;
        if(a != b && a!=c && a!= d && b!=c && b!=d && c!=d){
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
