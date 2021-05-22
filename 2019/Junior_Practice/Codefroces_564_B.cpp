#include<bits/stdc++.h>
using namespace std;

#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);


int main(){
	int i,j,t,a,b,c,d,e,f,n,m,k,max = -1;
	cin >> n;
	m = 9000;
	int arr[m+2];
	for(i=0; i<m+2; i++){
		arr[i] = 0;
	}
	for(i=0; i<n; i++){
		cin >> a;
		arr[a]++;
		if(max < a)
			max = a;
	}

/*	for(i=1; i<m+2; i++){
		cout<<arr[i]<< "  ";
	}cout<<endl;*/



	int sum = 0;
	for(i=1; i<=max; i++){
		if(arr[i] > 1){
			int value = arr[i]; 
				for(j=i; j<m+2; j++){
					if(arr[j] == 0 && value > 1){
						arr[j] = 1;
						if(j-i > 0){
							sum = sum + j - i;
						}
						value--;
						if(value <= 1)
							break;
					}
				}
				arr[i] = value ;
		}
	}

	cout<<sum<<endl;

	// for(i=1; i<=n+2; i++){
	// 	cout<<arr[i]<< "  ";
	// }cout<<endl;
	
	return 0;
}