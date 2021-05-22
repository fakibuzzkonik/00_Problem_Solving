
#include<bits/stdc++.h>
using namespace std;

#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){

	int i,j,k,t,a,b,c,n,m, sum = 0;
	cin >> n;
	for(i=0; i<n; i++){
		cin >> a;
		sum += a;
	}
	//cout<<sum<<endl;

	int total = n + 1;
	for(i=1; total<sum; i++){
		total = total * i;
		i++;
	}

	int result = total - sum;

	if(result == 0){
		cout<<n+1<<endl;
	}else 
		cout<<result<<endl;
	/*if(result == 0){
		cout<<n<<endl;
	}else if(result >= 1 && result <= 4){
		cout<<result + 1 <<endl;
	}else if(result >=2 && result <= 5){
		cout<<result - 1<<endl;
	}
*/
	return 0;
}
