#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c;
    string word;
    vector<string>name;
    vector<vector<string>>konik;
    cin >> t;
    cin.ignore();

    for(i=0; i<t; i++){
        getline(cin,word);
        name.push_back(word);
        word.clear();
        getline(cin,word);
        name.push_back(word);
        konik.push_back(name);
        name.clear();
    }
    int length = konik.size();

    cin >> a;
    string xout;
    vector<string>out;

    for(b=0 ;b<=a; b++){
        getline(cin,xout);

        for(j=0; j<length; j++){
            if(xout == konik[j][0]){
                cout<<konik[j][1]<<endl;
                break;
            }
        }

    }

    return 0;
}
