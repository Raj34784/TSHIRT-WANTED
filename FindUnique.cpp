#include <bits/stdc++.h>
using namespace std;

// program checks for the element which occurs once and rest of the element occurs twice.
int main(){
  vector<int> arr = {1,1,2,2,3,3,4};
  int res = 0;
  for(int i = 0; i < arr.size(); i++){
    res = res ^ arr[i];
  }
  cout << "The unique Element is: " << res << endl;
  return 0;
}
