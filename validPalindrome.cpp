#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool isPalindrome(string s){
    int st=0,end=s.length()-1;
    while(st<end){
        while(st<end && !isalnum(s[st])) st++;
        while(st<end && !isalnum(s[end])) end--;
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string s="A man, a plan, a canal: Panam";
    cout<<isPalindrome(s)<<endl;
    return 0;
}