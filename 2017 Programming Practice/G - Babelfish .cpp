#include<bits/stdc++.h>
using namespace std;
int main()
{
//    map<string, string>maap;
//    int i,j,t;
//    int length = 0;
//    string word,s1,v1;

//        while(getline(cin, word) && word != ""){
//        int len = word.size();
//        for(i=0; i<len; i++)
//        {
//            if(isalpha(word[i])){
//                next+=word[i];
//            }
//            else{
//                s1 = next;
//                next.clear();
//                continue;
//            }
//        }
//        v1 = next;
//        next.clear();
//        maap.insert(make_pair(s1, v1));
//    }

//    char line[100000];
//    while(gets(line)){
//        if(line == '\0')
//            break;
//        stringstream ss(line);
//        ss >> s1;
//        ss >> v1;
//        //maap.insert(make_pair(v1, s1));
//         maap[v1] = s1;
//    }

//    length = maap.size();
//    int gate = 0;
//    while(1){
//        gate = 0;
//        string word;
//        cin >> word;
//        for(it = maap.begin(); it!= maap.end(); it++){
//            if(it->second == word){
//                cout << it->first <<endl;
//                gate = 1;
//            }
//        }
//        if(gate == 0){
//            cout<<"eh"<<endl;
//        }
//    }
//
//       while (cin >> word)
//    {
//        map<string, string>::const_iterator it = maap.find(word);
//
//        if (it == maap.end())
//
//            cout << "eh\n";
//
//        else
//            cout << it->second << '\n';
//    }
//}
    map<string, string>maap;
    int i,j,t,a,b,c;
    string word,s1,s2;
    getline(cin,word);
    while(word != ""){
//        if(word != "")
//            break;
        stringstream ss(word);
        ss >> s1 >> s2;
        maap[s2] = s1;
        getline(cin,word);
    }
    while(cin >> word){
        map<string, string>::const_iterator it =maap.find(word);
        if(it == maap.end())
            cout<<"eh"<<endl;
        else{
            cout<< it -> second <<endl;
        }
    }
    return 0;
}
