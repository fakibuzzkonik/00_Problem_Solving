
#include<iostream>
using namespace std;

void compareOperation(string s1, string s2)
{
    // returns a value < 0 (s1 is smaller then s2)
    if((s1.compare(s2)) < 0)
        cout << s1 << " is smaller than " << s2 << endl;
      else
           cout << s1 << " is bigger than " << s2 << endl;

    // returns 0(s1, is being comapared to itself)
    if((s1.compare(s1)) == 0)
        cout << s1 << " is equal to " << s1 << endl;
    else
        cout << "Strings didn't match ";

    cout<<endl;

}

// Driver Code
int main()
{
//    string s1, s2;
//
//    while(1){
//        cin >> s1 ;
//        cin >> s2 ;
//              compareOperation(s1, s2);
//    }

        long long time = 9223372036854775807-1596215997138;
        int itime = 1596216457000 - 2147483647;
        cout<<time<<endl;
        cout <<itime<<endl;


    return 0;
}
