#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num<=1)return false;
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int FindPrime(int m){
    int count = 0;
    int i=1;
    while(count<m){
        i++;
        if(isPrime(i)) count++;
    }
    return i;
}
int main() {
    int m ;
    cin>>m;
    // int n;
    // cin>>n;
    int MthPrime = FindPrime(m);
    cout<<MthPrime<<endl;
    int temp = MthPrime;
    int sum = 0;
    while(temp>0){
        int digit = temp%10;
        temp /= 10;
        sum += digit;
    }
    cout<<sum<<endl;
    
    cout<<"result :- "<<MthPrime*sum<<endl;
    
   
    return 0;
}