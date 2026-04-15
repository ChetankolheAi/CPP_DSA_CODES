#include <bits/stdc++.h>
using namespace std;
int main() {

    vector<int>arr={1,1,2,2,3,4,5,5,6,6,6};
    sort(arr.begin(),arr.end());

    
    unordered_map<int,int>Freq;
    unordered_map<int,int>FA;
    for(auto i:arr){
      
        Freq[i]++;
    }
    for(int i=0;i<Freq.size();i++){
        if(FA[arr[i]]==0){
            FA[arr[i]]=i+1;
        }
    }
    
    vector<vector<int>>FreqCount;
    for(auto i : Freq){
        FreqCount.push_back({i.second,FA[i.first],i.first});
    }
    sort(FreqCount.begin(), FreqCount.end(), [](auto &a, auto &b){
        if(a[0]==b[0])
            return a[1] < b[1];
        return a[0] < b[0];
    });
    
    vector<int>ans;
    for(int i=0;i<FreqCount.size();i++){
        for(int j=0;j<FreqCount[i][0];j++){
            ans.push_back(FreqCount[i][2]);
        }
    }
    
    for(auto i : ans){
        cout<<i<<",";
    }
    
    return 0;
}