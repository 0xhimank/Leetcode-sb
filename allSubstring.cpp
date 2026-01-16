//all substrings of a string
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void allSubstring(string s,vector<string> output, int index,vector<vector<string>> &answer){
    //base case
    if(index>=s.size()){
        answer.push_back(output);
        return ;
    }
    //recursive calls
    //exclude
    allSubstring(s,output,index+1,answer);
    //include
    output.push_back(string(1, s[index]));
    allSubstring(s,output,index+1,answer);

}
int main() {
    // Subsequences of a string
    string s;
    vector<string> output;
    int index=0;
    vector<vector<string>> answer;
    cin>>s;
    //cout<<s[0];
    allSubstring(s,output,index,answer);
    for (int i = 0; i < answer.size(); i++) {
        cout << "[ ";
        for (int j = 0; j < answer[i].size(); j++) {
            cout << answer[i][j] << " ";
        }
        cout << "]" << endl;
    }

    

    return 0;
}