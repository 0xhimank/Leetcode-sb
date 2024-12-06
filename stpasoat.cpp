//subtract the product and sum of an integer 
//self-rating (4/5)
#include <iostream>
using namespace std;
int main() {
    int n,multiplicationCounter=1,additionCounter=0;
    cin>>n;
    while(n!=0){
    	additionCounter=additionCounter+(n%10);
    	
    	multiplicationCounter=multiplicationCounter*(n%10);
    	
    	n=n/10;
    	
    }
	cout<<(multiplicationCounter - additionCounter);    



    return 0;
}
/*Leetcode
class Solution {
public:
    int subtractProductAndSum(int n) {
        int multiplicationCounter=1,additionCounter=0;
        while(n!=0){
    	    additionCounter=additionCounter+(n%10);
    	    multiplicationCounter=multiplicationCounter*(n%10);
    	    n=n/10;
    	}
	return (multiplicationCounter - additionCounter);    
    }
};*/