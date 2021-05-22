#include<bits/stdc++.h>
using namespace std;
int main()
{


    int arr[10] = {10,52,56,59,65,72,81,85,86,88};
    int left = 0;
    int right = 10-1;

    int x;
    int step = 1;
    cin >> x;

    while(left<=right){
        int mid = (left+right)/2;

        if(arr[mid] == x){
            cout<<"Found "<<x<<endl;
            break;
        }else if(arr[mid] > x){
            right = mid - 1 ;
        }else{
            left = mid + 1;
        }

        step ++;
    }

    cout<<"NOT Found "<<x<<" Step "<<step <<endl;
}
