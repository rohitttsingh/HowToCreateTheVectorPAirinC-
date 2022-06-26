// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
   vector< pair<int,int>> v;
   
    for(int i=0;i<10;i++)
    v.push_back({i,i+2});
    
    for(int i=0;i<v.size();i++)
    cout <<v[i].first<<","<<v[i].second<<endl;
    return 0;
}
