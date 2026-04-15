#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr={1,1,2,2,3,3,3};
    sort(arr.begin(),arr.end());
    unordered_map<int,int>Freq;
    
    for(auto i:arr){
      
        Freq[i]++;
    }

    vector<vector<int>>FreqCount;
    for(auto i : Freq){
        FreqCount.push_back({i.second,i.first});
    }
    sort(FreqCount.begin(), FreqCount.end(), [](auto &a, auto &b){
        
        return a[0] > b[0];
    });
    
    vector<int>ans(arr.size());
    int idx = 0;
    for(auto x:FreqCount){
        int value = x[1];
        int Count = x[0];
        while(Count--){
            if(idx>=arr.size()){
                idx = 1;
            }
            ans[idx] = value;
            idx+=2;
        }
            
        
    }
    
    for(auto i : ans){
        cout<<i<<",";
    }
    
    return 0;
}