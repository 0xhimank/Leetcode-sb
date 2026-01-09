//check palindrom using recursion
#include <iostream>
#include <string>
using namespace std;
bool checkPalindrome(string a,int s, int e){
    if(s>=e){
        return true;
    }
    else{
        if(a[s]==a[e]){
            return checkPalindrome(a,s+1,e-1);
        }
        else{
            return false;
        }
    }

    
}
int main() {
    string a;
    int s,e;
    cin>>a;
    cout<<checkPalindrome(a,0,a.length()-1);

    return 0;
}