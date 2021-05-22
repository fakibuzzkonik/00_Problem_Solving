#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<int , int> partho;
    map<int , int> ::iterator it;

    int i,j,t,a,b,c;

    for(i=0; i<10; i++){
        partho[i]++;
    }
    for(it = partho.begin(); it!= partho.end(); it++){
        cout<<it->first<< " " <<it->second<<endl;
    }
    cout<<endl;

    partho[4]++;
    partho[7]++;
    partho[7]++;

    for(it = partho.begin(); it!= partho.end(); it++){
        cout<<it->first<< " " <<it->second<<endl;
    }


    return 0;
}
