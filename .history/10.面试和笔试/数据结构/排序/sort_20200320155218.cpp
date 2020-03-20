#include <bits/stdc++.h>
#include "SortHelper.hpp"
using namespace std;

int main(){
    vector a = SortHelper::generate_random_vec(1,5,10);
    for(const auto e:a)
        cout << e << endl;
    return 0;
}