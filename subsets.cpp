//power set, set of all subsets
//we use the pattern of (inclusion and exlusion of elements->subset pattern)
#include <iostream>
#include <vector>
using namespace std;
void findPowerSet(vector<int> set,vector<int> output,int index,vector<vector<int>>& powerSet){
    //base case
    if(index==set.size()){
        powerSet.push_back(output);
        return ;
    }
    //recursive call

    //exclude
    findPowerSet(set,output,index+1,powerSet);
    //include
    output.push_back(set[index]);
    findPowerSet(set,output,index+1,powerSet);

    

}
int main() {
    vector<int> set={1,2,3},output;
    vector<vector<int>> powerSet;
    int index=0;
    findPowerSet(set,output,index,powerSet);
    for (int i = 0; i < powerSet.size(); i++) {
        cout << "{ ";
            for (int j = 0; j < powerSet[i].size(); j++) {
                cout << powerSet[i][j] << " ";
                    }
        cout << "}" << endl;
}


}
//Leetcode Submission
class Solution {
private:
    void powerSet(vector<int> nums,vector<int> output, int index, vector<vector<int>>& ans){
        //base case
        if(index>=nums.size()){
            ans.push_back(output);
            return ;
        }
        //recursive call
        //excluded part
        powerSet(nums,output,index+1,ans);
        //included part
        output.push_back(nums[index]);
        powerSet(nums,output,index+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        powerSet(nums,output,index,ans);
        return ans;
    }
};