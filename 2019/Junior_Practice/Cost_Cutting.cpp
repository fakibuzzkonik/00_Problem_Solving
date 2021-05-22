
#include<bits/stdc++.h>
using namespace std;

#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){

	int i,j = 1,t,a,b,c,d,n,m;
	cin >> n;
	for(i=0; i<n; i++){
		cin >> a >> b >> c;
		cout<<"Case "<<j<<": ";
		if(a<b && a>c)
			cout<<a<<endl;

		else if(a>b && a<c)
			cout<<a<<endl;
		
		else if(b<a && b>c)
			cout<<b<<endl;
		
		else if(b>a && b<c)
			cout<<b<<endl;
		
		else if(c<a && c>b)
			cout<<c<<endl;
		
		else if(c>a && c<b)
			cout<<c<<endl;

		j++;

	}	
	return 0;
}
