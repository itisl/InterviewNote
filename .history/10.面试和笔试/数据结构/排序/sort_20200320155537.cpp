#include <bits/stdc++.h>
#include "SortHelper.hpp"
using namespace std;

int main(){
    vector<int> a(10) = SortHelper::generate_random_vec(1,5,10);
    for(auto e:a)
        cout << e << endl;
    return 0;
}