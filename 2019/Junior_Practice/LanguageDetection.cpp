
#include<bits/stdc++.h>
using namespace std;

#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){

	string word;
	int i = 1;
	while(cin >> word && word != "#"){
		if(word == "HELLO")
			cout<<"Case "<<i<<":" << " ENGLISH"<<endl;
		else if(word == "HOLA")
			cout<<"Case "<<i<<":" << " SPANISH"<<endl;
		else if(word == "HALLO")
			cout<<"Case "<<i<<":" << " GERMAN"<<endl;
		else if(word == "BONJOUR")
			cout<<"Case "<<i<<":" << " FRENCH"<<endl;
		else if(word == "CIAO")
			cout<<"Case "<<i<<":" << " ITALIAN"<<endl;
		else if(word == "ZDRAVSTVUJTE")
			cout<<"Case "<<i<<":" << " RUSSIAN"<<endl;
		else
			cout<<"Case "<<i<<":" << " UNKNOWN"<<endl;

		i++;
	}
	
	return 0;
}
