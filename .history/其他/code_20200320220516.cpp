#include <bits/stdc++.h>
using namespace std;

int main() {
  // int a[] {1,2,3,4,1};
  vector<int> a{1,2,3,4,5};
  vector<int> arr(a, a+5);

  for(auto e:arr){
    cout << e <<endl;
  }


}
