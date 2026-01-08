//Leetcode submission
class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }      
        if(n==1){
            return 1;
        }
        return fib(n-1)+fib(n-2);
    }
};



/*
#include <iostream>
using namespace std;
int fibo(int x){
	//base case
	if(x==0){
		return 0;
	}
	if(x==1){
		return 1;
	}
	return fibo(x-1)+fibo(x-2);
}
int main() {
    // fibonacci using recursion

    int x;
    cin>>x;
    //prints fibonnaci series number at x
    cout<<fibo(x);

    return 0;
}*/