#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the climbingLeaderboard function below.
vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
  int len2 = scores.size();
  vector<int> vec;
  set<int> ss;
  set<int>::iterator it;
  for (int i = 0; i < len2; i++) {
    ss.insert(scores[i]);
  }
  len2= ss.size();
  int len = alice.size();
  for (int i = 0; i < len; i++) {
    int value = alice[i];
    int postion = len2;
    it = ss.begin();
    //it--;
    int k = len2;
    while (it != ss.end()) {

      int result = *it;
      //cout<<result<<endl;
      if (value == result){
            postion--;
         break;
      }else if (value < result)
        break;

      postion--;
      it++;
      if (it == ss.end())
        break;

    }
    vec.push_back(len2 - postion) ;
    cout << postion + 1 << endl;
  }
  return vec;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  int scores_count;
  cin >> scores_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string scores_temp_temp;
  getline(cin, scores_temp_temp);

  vector<string> scores_temp = split_string(scores_temp_temp);

  vector<int> scores(scores_count);

  for (int i = 0; i < scores_count; i++) {
    int scores_item = stoi(scores_temp[i]);

    scores[i] = scores_item;
  }

  int alice_count;
  cin >> alice_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string alice_temp_temp;
  getline(cin, alice_temp_temp);

  vector<string> alice_temp = split_string(alice_temp_temp);

  vector<int> alice(alice_count);

  for (int i = 0; i < alice_count; i++) {
    int alice_item = stoi(alice_temp[i]);

    alice[i] = alice_item;
  }

  vector<int> result = climbingLeaderboard(scores, alice);

  for (int i = 0; i < result.size(); i++) {
    fout << result[i];

    if (i != result.size() - 1) {
      fout << "\n";
    }
  }

  fout << "\n";

  fout.close();

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
