
#include<bits/stdc++.h>
using namespace std;

#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

int arr[101];
int main(){
	int i,j,t,a,b,c,d,n,m;
	cin >> n;
	cin >> a;
	for(i=0; i<a; i++){
		cin >> c;
		arr[c] = 1;
	}

	cin >> b;
	for(i=0; i<b; i++){
		cin >> d;
		arr[d] = 1;
	}

	for(i=1; i<=n; i++){
		if(arr[i] == 0){
			cout<<"Oh, my keyboard!"<<endl;
			return 0;
		}
	}
	cout<<"I become the guy."<<endl;
	return 0;
	
	return 0;
}
