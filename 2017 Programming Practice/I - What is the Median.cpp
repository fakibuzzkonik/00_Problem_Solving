#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j=1,t,a,b,c,result = 0;
    //vector<int>vec;
    long long konik[100000];
    while(cin >> a){

        konik[i] = a;
//        vec.push_back(a);
        sort(konik,konik+i+1);
        if(i%2==0)
            cout<<konik[i/2]<<endl;
        else
        {
            result=konik[i/2]+konik[i/2+1];
            cout<<result/2<<endl;
        }
        result = 0;
        j++;
        i++;
    }
    return 0;
}
