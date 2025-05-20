//rev an integer <simple math operations>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int length=0,n,rev=0;
    cin>>n;
    int k=n;
    while(k!=0){
    	k=k/10;
    	length++;
    }
    while(n!=0){
    	rev+=(n%10)*(pow(10,length-1));
    	n=n/10;
    	length--;
    	//cout<<rev<<endl;
    }
    return 0;
}

//Leetcode Submission
// class Solution {
// public:
//     //soln=0;
//     int reverse(int x) {
//         int length=0,rev=0;
//         int k=x;
//         while(k!=0){
//     	    k=k/10;
//     	    length++;
=//         }
//         while(x!=0){
//     	    rev+=(x%10)*(pow(10,length-1));
//     	    x=x/10;
//     	    length--;
//     	//cout<<rev<<endl;
//         }
//         return rev;
//     }
// };