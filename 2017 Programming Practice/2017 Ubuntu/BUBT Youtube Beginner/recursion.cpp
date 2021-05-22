#include<bits/stdc++.h>
using namespace std;

void fun(int x){
    int y = 5;
    if(x == 0)
        return;
    printf("%d\n",x);
    fun(x-1);
    printf("%d\n",x);

}
int main()
{
    int i,j,t,a,b,c;
    fun(10);
}
