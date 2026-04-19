#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;

    // Check if N is valid integer
    if(!(cin >> N)){
        cout << "Invalid Input";
        return 0;
    }

    vector<int> arr;
    int x;

    // Take elements
    for(int i = 0; i < N; i++){
        if(!(cin >> x)){
            cout << "Invalid Input";
            return 0;
        }
        arr.push_back(x);
    }

    // Extra check (if more input exists)
    if(cin >> x){
        cout << "Invalid Input";
        return 0;
    }

    // Valid input
    cout << "Valid Input\n";

    return 0;
}