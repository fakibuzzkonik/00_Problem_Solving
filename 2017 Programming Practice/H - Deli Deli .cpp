#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t;
    string s1;
    string s2;
    string s3;
    vector<string>save;
    vector<vector<string>>list;

    cin >> n >> t;
    for(i=0; i<n; i++){
        cin >> s1 >> s2;
        save.push_back(s1);
        save.push_back(s2);
        list.push_back(save);
        save.clear();
    }
//    for(i=0; i<n; i++){
//        cout << list[i][0] <<"   "<<list[i][1]<<endl;
//    }


    int  length = list.size();
    int len,gate;
    for(i=0; i<t; i++){
        cin>> s3;
        gate = 0;
        for(j=0; j<length; j++){
            if(s3 == list[j][0]){
                cout<<list[j][1]<<endl;
                gate = 1;
                break;
            }
        }
        if(gate == 0){
            len = s3.size();

            if(s3[len-1] == 'y' && (s3[len-2] != 'a' && s3[len-2] != 'e' && s3[len-2] != 'i' && s3[len-2] != 'o' && s3[len-2] != 'u')){
                s3.erase(len-1,1);
                s3 = s3 + "ies";
            }
            else if(s3[len-1] == 'o' || s3[len-1] == 's'|| s3[len-1] == 'x'){
                s3 = s3 + "es";
            }
            else if((s3[len-2] == 'c' && s3[len-1] == 'h')||(s3[len-2] == 's' && s3[len-1] == 'h')){
                s3 = s3 + "es";
            }
            else{
                 s3 = s3 + "s";
            }

            cout << s3 << endl;
        }
    }

}
