#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(int x){
    if(x<0 || (x%10==0 && x!=0))
        return false;
    int reversed=0;
    while(x>reversed){
        reversed=reversed*10 + x%10;
        x/=10;
    }
    return (x==reversed || x==reversed%10);
    
}
int main(){
    int x=-121;
    if(isPalindrome(x)){
        cout<<"Its a palindrome number";
    }else{
        cout<<"Its not a palindrome number";
    }
    return 0;
}