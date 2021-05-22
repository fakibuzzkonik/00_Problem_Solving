#include<bits/stdc++.h>
using namespace std;
int main ()
{

    queue<int>konik;

    for(int i=1; i<=10; i++){
        konik.push(i*10);
    }

    while(!konik.empty()){
        cout<<konik.front()<<" ";
        konik.pop();
    }
    cout<<endl;
  return 0;
}

