    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    #define     sf           scanf
    #define     pf           printf
    #define     ln           printf("\n")
    #define     mkp(a,b)     make_pair(a,b)
    #define     pii          pair<ll,ll>
    #define     mem(a,b)     memset(a,b,sizeof a)
    #define     pb           push_back
    #define     fast         ios_base::sync_with_stdio(false),cin.tie(NULL);
    #define     debug(x)     cout<< #x <<" is = "<< (x) << endl;
    #define     SZ           100005
    //cout.tie(NULL);

    //int dx[]= {0,0,1,-1};/*4 side move*/
    //int dy[]= {-1,1,0,0};/*4 side move*/
    //int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
    //int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
    //int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
    //int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

    typedef unsigned long long ul;

    ///priority_queue <int>PQMX;
    ///front
    ///priority_queue <int, vector<int>, greater<int> >PQMN;
    ///top
    ///map<int,int>mp;
    ///map<int,int>::iterator it;
    ///queue<int>Q;
    ///front
    ///stack<int>S;
    ///top
    ///set<int>st;
    ///insert
 int main(){
        string word = "0B0F0P0M";
        cin >> word;
        string target = "BFPM";
        vector<string>vec;
        int len = word.size();
        bool total_books_found = false;
        string dTotal_books = "";
        string new_word = "";
        int i = 0; int j = 0;
        for(i = 0; i<len; i++){

           if(word[i] == target[j]){
                vec.push_back(new_word);
                new_word.clear();
                j++;
            }else{
                new_word += word[i];
            }

        }
        for(i = 0; i<vec.size(); i++){
            cout<<vec[i]<<endl;
        }


        return 0;
    }













