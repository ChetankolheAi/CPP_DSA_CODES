#include<iostream>
#include<unordered_map>
#include <cctype>  

using namespace std;
    int number(string s){
        unordered_map<string,int>map;
        int digit[] = {0,1,2,3,4,5,6,7,8,9,10,1000,100,100000,1000000};
        string word[] =  {"zero","one","two","three","four","five","six","seven","eight","nine","ten","thousand","hundred","lakh","million"};
        
        int size = sizeof(digit) / sizeof(digit[0]);
        for(int i=0;i<15;i++){
            map[word[i]] = digit[i];
        }
        int num = 0;
        string sepWord = "";
        int count =0;

        int temp = 1;
        for(int i=0;i<s.size();i++){

            if(s[i]==' '&& count<2){
                temp  = temp*map[sepWord];
                count++;
                sepWord ="";
                if(count==2){
                    num = num+temp;
                    temp=1;
                    count = 0;
                    continue;
                }
            }
            else{
                sepWord = sepWord+s[i];
            }
            
        }
        temp = temp*map[sepWord];
        num = num+temp;


        
        return num;
    }
int main(){

    string S = "Seven Thousand One Hundred";
    string Sentence;
    cout << "Enter string: ";
    getline(cin, Sentence);
    for (char &c : Sentence) {
        c = tolower(c);
    }
    int ans  = number(Sentence);
    cout<<ans;
    return 0;
}