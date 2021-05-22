#include<bits/stdc++.h>
using namespace std;
const int SIZE = 4e5 + 5;

#define ll           long long
#define pii          pair<ll,ll>
#define bug(a)       cerr << #a << " : " << a << endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

int arr[100 005];
int main(){

	//Tanya and Toys4
	long long int i,j,t,k,a,b,c,d,e,f,n,money;
	vector<int>vec;
	cin >> n >> money;
	for(i=0; i<n; i++){
		cin >> a;
		arr[a] = 1;
	}

	sum = 0;
	for(i=1; i<=100 005; i++){
		if(arr[i] == 0 && arr[i]+sum <= money){
			sum = sum + i;
			vec.push_back(i);
		}
	} 

	cout<<vec.size();<<endl;
	for(i=0; i<n; i++){
		cout<<vec[i]<<" ";
	}

	

	return 0;
}



#include<bits/stdc++.h>
using namespace std;

#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){

	
	return 0;
}
