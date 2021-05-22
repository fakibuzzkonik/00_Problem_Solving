#include<bits/stdc++.h>
using namespace std;



int main(){

	//Tanya and Toys4
	long long int i,j,t,k,a,b,c = 0,d,e,f,n,money,maxx = -1;
	map<long long,long long>maap;
	vector<long long>vec;

	cin >> n >> money;
	for(i=0; i<n; i++){
		cin >> a;
		maap[a]++;
	}

	for(i=1; money-i>=0; i++){

  		if(maap[i] == 0){	//cout<<'x'<<i<<endl;
  			maap[i] = i;
  			vec.push_back(i);
  			c++;
  			money = money - i;
  		}
   	}
   	cout<<c<<endl;
   	for(i=0;i<vec.size(); i++){
   		cout<<vec[i]<<" ";
   	}cout<<endl;
	// int long long sum = 0;
	// for(i=1; i+sum <= money; i++){
	// 	if(arr[i] == 0 && i+sum <= money){
	// 		sum = sum + i;
	// 		vec.push_back(i);
	// 	}
	// 	if(sum > money){
 //            break;
	// 	}
	// }

 //    int len = vec.size();
	// cout<<len<<endl;
	// for(i=0; i<len; i++){
	// 	cout<<vec[i]<<" ";
	// }



	return 0;
}


