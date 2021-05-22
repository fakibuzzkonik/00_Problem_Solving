#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,t,a,b,c,n,m,k;

    cin >> n >> k;
    m = n/2;
    a = m/(k+1);

    cout << a  <<" "<< a*k << " "<< n - (a + a*k) <<endl;

}
