#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,c,length = 0,space = 0;

    cin >> t;
    cin.ignore();
    string line1;
    string line;
    string linex;
    while(t--){
        getline(cin,line1);
        line+=line1;
    }
    length = line.size();
    for(int i = 0; i<length; i++){
        if(isalpha(line[i])){
            linex+=line[i];
        }
    }
    length = linex.size();

    transform(linex.begin(), linex.end(), linex.begin(), ::toupper);

    map<char, int>dip;
    map<char, int>:: iterator it;

    vector<char>name;
    vector<int>result;
        char x,y;
        int z;
        //int length = konik.size();
        for(int i=0; i<length; i++)
        {
            x = linex[i];
            dip[x]++;
        }

    for(it = dip.begin(); it!=dip.end(); it++){
        name.push_back(it->first);
        result.push_back(it->second);

    }
    int length2 = name.size();
    int swapr; char swapc;
    for(i=0; i<length2; i++){
        for(j=i+1; j<length2; j++){
            if(result[i]<result[j]){
                swapr = result[i];
                result[i] = result[j];
                result[j] = swapr;

                swapc = name[i];
                name[i] = name[j];
                name[j] = swapc;
            }
            else if(result[i] == result[j]){
                if(name[i]>name[j]){
                    swapc = name[i];
                    name[i] = name[j];
                    name[j] = swapc;
                }
            }
        }
    }

    for(int i =0; i<length2; i++){
            cout << name[i] << " " <<result[i]<<endl;
        }
    return 0;
}
