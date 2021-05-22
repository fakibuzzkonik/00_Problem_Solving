#include<bits/stdc++.h>
using namespace std;
int fun(int x){

    if(x>1){
        x *= fun(x-1);
    }else{
        return 1;
    }
}

int main()
{
    int i,j,t,a,b,c;

    cin >> a;

    cout<<"Factorial of "<<a<< " is "<<fun(a)<<endl;

}
