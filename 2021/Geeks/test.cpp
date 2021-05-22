// C++ Program to find prefix sum of 2d array
#include <bits/stdc++.h>
using namespace std;
#define R 5
#define C 5
// calculating new array
void prefixSum2D(int a[][C])
{
	int psa[R][C];
	psa[0][0] = a[0][0];
	for(int i = 1; i<C; i++){
        psa[0][i] = psa[0][i-1] + a[0][i];
        //cout<<psa[0][i]<< " ";
	}//cout<<" "<<endl;
	for(int i = 1; i<R; i++){
        psa[i][0] = psa[i-1][0] + a[i][0];
        //cout<<psa[i][0]<< " ";
	}//cout<<" "<<endl;
	for(int i = 1; i<R; i++){
        for(int j = 1; j<C; j++){
            psa[i][j] = psa[i][j-1] + psa[i-1][j] - psa[i-1][j-1] + a[i][j];
        }
	}
	for(int i = 0; i<R; i++){
        for(int j = 0; j<C; j++){
            cout<<psa[i][j]<< " ";
        }cout<<endl;
	}
	int start_R = 2, start_C = 2;
	int last_R = 5, last_C = 5;
	int start_value = psa[start_R-1][start_C-1];
	int last_value = psa[last_R-1][last_C-1];

	cout<<last_value-start_value<<endl;//a[start_R-1][start_C-1]<<endl;
}
int main()
{
	int a[R][C] = { { 1, 1, 1, 1, 1},
					{ 1, 1, 1, 1, 1},
					{ 1, 1, 1, 1, 1},
					{ 1, 1, 1, 1, 1},
					{ 1, 1, 1, 1, 1}};

	prefixSum2D(a);
	return 0;
}
