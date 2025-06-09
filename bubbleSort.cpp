//bubble sort
#include <iostream>
using namespace std;
int main() {
    int a[6]={10,1,7,6,14,9};
    for(int i=0;i<5;i++){
    	for(int j=0;j<6;j++){
    		if(a[j]>a[j+1]){
    			swap(a[j],a[j+1]);
    			
    		}
    	}
    }

    for(int i=0;i<6;i++){
    	cout<<a[i]<<endl;
    }

    return 0;
}