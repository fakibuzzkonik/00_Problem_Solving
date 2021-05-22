#include<bits/stdc++.h>
using namespace std;
int main()
{
    char word[100] = "Bangladesh";
    int i,j,t,a,b,x,y;
    int limit = strlen(word);

    for(i=0; i<limit; i++){
            if(word[i] == 'g' && word[i+1] == 'l' && word[i+2] == 'a' && word[i+3] == 'd'){
                cout<<"FIND IT"<<endl;
                return 0;
            }
    }

    cout<< "NOT Find it"<<endl;

    return 0;

}
