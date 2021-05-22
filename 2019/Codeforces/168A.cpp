
#include<bits/stdc++.h>
using namespace std;

#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){

	double i,j,t,a,b,c,n,m,x,y,sum = 0, result = 0, check = 0;

	cin >> n >> x >> y;
 
	double percent = (n*y)/100; 


	percent = abs(percent);
	a = percent - (int) percent;
	if(a != 0){
		percent = percent - a;
		percent = percent + 1;
	}



    if(percent - x <= 0)
		cout<<0<<endl;
	else
		cout<<percent - x<<endl;

	return 0;
}
