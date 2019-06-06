#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin >> n >> q;
    vector<vector<int>>a;
    for (int i = 0; i < n; i++)
     {
      int k;
      cin >> k;
      vector<int> v(k);
      for (int j = 0; j < k; j++)
        cin >> v[j];
      a.push_back(v);
    }
     for(int i=0;i<q;i++)
     {
         int vec_id,id;
         cin >> vec_id >> id;
         vector<int>p=a[vec_id];
         cout << p[id] << "\n";
     


     
    }
    return 0;
}


