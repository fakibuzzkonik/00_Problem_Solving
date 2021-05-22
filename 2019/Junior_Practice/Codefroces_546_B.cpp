
#include<bits/stdc++.h>
using namespace std;

#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

int dog[3005], result[3005];
int main(){
	int i,j,t,a,b,c,d,e,n,m,need_walk,save = 0;
	cin >> n >> need_walk ;
	for(i=0; i<n; i++){
		cin >> a;
		dog[i] = a;
	}

	for(i=1; i<n; i++){
		if(dog[i] + dog[i-1] < need_walk){
			//if(dog[i]<need_walk-dog[i-1]){
				save += need_walk-dog[i]-dog[i-1];
				dog[i] = dog[i] + need_walk-dog[i]-dog[i-1];
			//}else{

			//}
		}
	}

	cout<<save<<endl;
	for(i=0; i<n; i++){
		cout<<dog[i]<<" ";
	}

	return 0;
}
