//using Vector?
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector<int> a={1,2,3,4},b;

//     for(int i=a.size()-1;i>=0;i--){
//     	b.push_back(a[i]);
//     }
//     for(int i=0;i<b.size();i++){
//     	cout<<b[i]<<endl;
//     }
//     return 0;
// }
//Using Array
#include <iostream>
using namespace std;
int main() {
    int a[4]={1,2,3,4};
    int start=0;
    int end=sizeof(a)/sizeof(a[0]);
    
    while(start<end){
    	swap(a[start],a[end-1]);
    	start++;
    	end--;
    }
    for(int i=0;i<4;i++){
    	cout<<a[i]<<endl;
    }

    return 0;
}