#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c;
    int array[10] = {10,20,30,40,50,60,70,80,90,100};

    for(i=0; i<10; i++){
        if(array[i] == 90){
            cout<<"FOUND"<<endl;
            return 0;
        }
    }

    cout<<"NOT FOUND"<<endl;
    return 0;
}
