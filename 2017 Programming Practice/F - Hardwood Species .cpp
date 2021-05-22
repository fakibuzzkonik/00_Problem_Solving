#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int i,j,a,b,c;
    cin >> t;
    cin.ignore();
    while(t--){

        double xx = 0;
        double right = 0;
        map<string, int>line;
        map<string, int>:: iterator it;
        string word;

         while (getline(cin, word) && word != ""){
                line[word]++;
            }
        int length = line.size();

        for(it = line.begin(); it!=line.end(); it++){
                right += it->second;
        }

        for(it = line.begin(); it!=line.end(); it++){
                xx = (it->second/right)*100;

            printf("%s %.4f\n", (*it).first.data(), xx);

        }
        if (t > 0){
			printf("\n");
			line.clear();
		}

    }

}
