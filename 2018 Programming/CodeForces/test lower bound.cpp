// lower_bound/upper_bound example
#include<bits/stdc++.h>
#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector

int main () {
  int myints[] = {10,20,30,30,20,10,10,20,40,50,60};
  std::vector<int> v(myints,myints+11);           // 10 20 30 30 20 10 10 20

  std::sort (v.begin(), v.end());                /// 10 10 10 20 20 20 30 40 50 60

  std::vector<int>::iterator low,up;
  int a, b;
  std::cin >> a ;
  low=std::lower_bound (v.begin(), v.end(), a); //          ^
  up= std::upper_bound (v.begin(), v.end(), a); //                   ^

  std::cout << "lower_bound at position " <<" "<<(low- v.begin()) << '\n';
  std::cout << "upper_bound at position " <<" "<<(up- v.begin()) << '\n';

  return 0;
}
