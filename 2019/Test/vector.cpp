
#include<bits/stdc++.h>
using namespace std;

#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){

	cout<<"VECTOR"<<endl;
	vector<int>vec (4e5+5,-1);
	vector<int>:: iterator it;
	// for(int i=1; i<=10; i++)
	// 	vec.push_back(i);

	for(it = vec.begin(); it != vec.end(); it++){
		cout<<*it<<" ";
	}puts(" ");

	return 0;
}


