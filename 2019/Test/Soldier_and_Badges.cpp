
#include<bits/stdc++.h>
using namespace std;

#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

int arr[3005];
int main(){
	int i,j,t,a,b,c,d,e,f,n,m,k,max = -1;
	cin >> n;
	for(i=0; i<n; i++){
		cin >> a;
		arr[a]++;
		if(max < a)
			max = a;
	}
	int sum = 0;
	for(i=1; i<=max; i++){
		if(arr[i] > 1){P
			int value = arr[i]; value--;
			while(value--)
			for(j=i; j<=3004; j++){
				if(arr[j] == 0){
					arr[j] = 1;
					if(j-i > 0)
						sum = sum + j - i;
					break;
				}
			}
		}
	}

	cout<<sum<<endl;
	
	return 0;
}
