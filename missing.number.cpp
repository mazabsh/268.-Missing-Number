#include<iostream> 
#include<cmath> 
#include<vector> 

using namespace std; 

class Solution{
public: 
      int missingNumber(vector<int>& nums){
        int n = nums.size(); 
        int sumN = (n+1)*n/2; 
        int sum =0; 
        for(int n:nums) sum +=n; 
        return sumN -sum; 
      }
};
int main(){
  vector<int> nums = {0,1}; 
  Solution sol; 
  cout << sol.missingNumber(nums) <<endl; 
  return 0; 
}
