#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c,gate = 0,red = 1,k;
    vector<string>word;
    vector<string>wordxx;
    string aam, jaam;
    cin >> a >> b;
    for(i=0 ;i<a; i++){
        cin >> aam >> jaam;
        word.push_back(jaam);
    }
    for(i=0; i<b; i++){
        cin >> aam;
        red = 1;
        for(j=0; j<a; j++){
            if(aam == word[j]){
                red = 0;
            }
        }
        if(red == 1){
            wordxx.push_back(aam);
        }
    }
    //cout<<word[0]<<endl;
    int length = word.size() + wordxx.size();
    for(i=0,j=1,k=0; i<length; j++){

        if(j%2 != 0 && a!=0){
         a--;
         cout<<word[i]<<endl;
         i++;
        }
        else if(b!=0 && j%2 == 0){
            //cout <<"xxx"<<endl;
            b--;
            //cout<< "konmik "<<endl;
            cout<<wordxx[k]<<endl;
            k++;
        }
    }


    return 0;
}
