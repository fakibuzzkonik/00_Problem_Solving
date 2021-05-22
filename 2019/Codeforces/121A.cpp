
#include<bits/stdc++.h>
using namespace std;
const int SIZE = 4e5 + 5;
const long long MAX = 100000000000;
vector<long long>vec;

void LuckyNum(long long int x){
	if(MAX < x){
		return;
	}
	vec.push_back(x);
	LuckyNum(x*10 + 4);
	LuckyNum(x*10 + 7);

}




int main(){

	//FastRead;
	//cin.tie(NULL);
	LuckyNum(0);
	sort(vec.begin(), vec.end());
	long long int  i,j,k,t,n,m,a,b,c, sum = 0;

	// for(i=0; i<500; i++)
	// 	cout<<vec[i] <<"  ";
	

	cin >> a >> b;

	for(i=0; i<=a; i++){
		if(a <= vec[i]){
			j = i;
			break;
		}
	} //cout<<vec[j]<<endl;

	for(i=a; i<=b; i++){
			//cout<<i<<" " << vec[j]<< " "<<sum<<endl;
			if(i <= vec[j]){
				sum = sum + vec[j];
			}else{
				j++;
				sum = sum + vec[j];
			}

	}

	cout<<sum<<endl;

	return 0;
}
