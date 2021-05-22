#include<bits/stdc++.h>
using namespace std;

int sum(int n){

    if(n == 1)
        return 1;

    return sum(n-1)+n;
}
int main()
{
    int i,j,t,a,b,c;

    cout<<sum(3)<<endl;

}
