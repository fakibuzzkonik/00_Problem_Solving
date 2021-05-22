#include<bits/stdc++.h>
using namespace std;

int bigmod(int a,int b,int c){
    if(b == 1)
        return 0;

    b = b/2;

    printf("%d \n",b);
    bigmod(a,b,c)+a;
    printf("%dx\n",a+b+c);

}
int main()
{
    int i,j,t,a,b,c,m;
    cin >> a >> b >> m;
    cout<< bigmod(a,b,c)<<endl;
}
