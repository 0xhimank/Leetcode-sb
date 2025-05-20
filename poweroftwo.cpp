#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n,count=0;
	long long counter=1;
	cin>> n;
	//using log and floor function
	// if(floor(log2(n))==log2(n)){
	// 	cout<<"power of 2";
	// }
 //    else{
 //    	cout<<"not power of 2";
 //    }
	//using logic:maths;
	while(n>=counter){
		if(n==counter){
			
			counter=-1;
			break;
		}
		counter=counter*2;
		

	}
	if(counter==-1){
		cout<<"number is a power of 2"<<endl;
	}
	else{
		cout<<"not a power of 2"<<endl;
	}
	//solution using rust?
	
    return 0;
}