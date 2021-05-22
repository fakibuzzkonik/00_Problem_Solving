#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
// 5 1 3 7 2
// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
  //    for(int i = 0; i<5; i++){
  //        for(int j=0; j<5; j++){
  //            if(arr[i]<arr[j]){
  //                swap(arr[i],arr[j]);
  //            }
  //        }
  //    }
  //
  ////    for(int i = 0; i<5; i++)
  ////        cout<<arr[i]<<" ";
  ////    cout<<endl;
  //
  //    signed long long int  sum1 = arr[4] + arr[1] + arr[2] + arr[3] ;
  //    signed long long int sum2 =  arr[0] + arr[1] + arr[2] + arr[3] ;
  //
  //    cout<<sum2<<" "<<sum1<<endl;
  //    //printf("%llu %llu\n",sum2, sum1);
  long int len = arr.size();
  unsigned long int i, max = 0, min = 0, sum = 0;



     for(int i = 0; i<5; i++){
         for(int j=0; j<5; j++){
              if(arr[i]<arr[j]){
                 swap(arr[i],arr[j]);
             }
          }
     }

     for (i = 0; i < 5; i++) {
       sum += arr[i];
     }
     sort(arr.begin(), arr.end());
     unsigned long int sumMin = arr[0] + arr[1] + arr[2] + arr[3];
     unsigned long int sumMax = arr[4] + arr[1] + arr[2] + arr[3];

     max = sum - arr[0];
     min = sum - arr[4];

     cout<< sumMin << " " <<sumMax<<endl;
     cout << min << " " << max <<endl;
}

int main() {
  string arr_temp_temp;
  getline(cin, arr_temp_temp);

  vector<string> arr_temp = split_string(arr_temp_temp);

  vector<int> arr(5);

  for (int i = 0; i < 5; i++) {
    int arr_item = stoi(arr_temp[i]);

    arr[i] = arr_item;
  }

  miniMaxSum(arr);

  return 0;
}

vector<string> split_string(string input_string) {
  string::iterator new_end =
      unique(input_string.begin(), input_string.end(),
             [](const char &x, const char &y) { return x == y and x == ' '; });

  input_string.erase(new_end, input_string.end());

  while (input_string[input_string.length() - 1] == ' ') {
    input_string.pop_back();
  }

  vector<string> splits;
  char delimiter = ' ';

  size_t i = 0;
  size_t pos = input_string.find(delimiter);

  while (pos != string::npos) {
    splits.push_back(input_string.substr(i, pos - i));

    i = pos + 1;
    pos = input_string.find(delimiter, i);
  }

  splits.push_back(
      input_string.substr(i, min(pos, input_string.length()) - i + 1));

  return splits;
}
