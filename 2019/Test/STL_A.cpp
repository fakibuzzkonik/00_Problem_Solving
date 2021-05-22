#include<bits/stdc++.h>
using namespace std;
int main()
{

	//cout<<"STL CHALLENGE"<<endl;
	string word;
	string konik = "";
	set<string>dictionary;
	set<string>::iterator it;

	while(cin >> word){

        for(int i = 0; i<word.size(); i++){
			if(word[i] >= (int)'A' && word[i] <= (int)'Z'){
				word[i] = word[i] + 32;
			}
		}
		for(int i = 0; i<word.size(); i++){

            if(isalpha(word[i])){
                konik += word[i];
			}else{
			    //if(konik.size()>0 && konik != "")
                dictionary.insert(konik);
                konik.clear();
                continue;
			}
		}
		if(konik.size()>0 && konik != "")
            dictionary.insert(konik);
		konik.clear();
        word.clear();
	}

	for(it = dictionary.begin(); it!= dictionary.end(); it++){
		cout<<*it<<endl;
	}
	return 0;
}
