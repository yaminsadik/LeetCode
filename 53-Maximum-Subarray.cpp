class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*Kadane's algorithm
        if current sum is more than max sum, max sum becomes current sum
        if current sum is negative, current sum becomes zero as negative value only decreases
        overall sum*/
        
        int current_sum = 0;
        int max_sum = INT_MIN;

        for(int i = 0; i<nums.size(); i++){
            current_sum += nums[i];
            if(current_sum>max_sum){
                max_sum = current_sum;
            }
            if(current_sum < 0){
                current_sum = 0;
            }
        }
        return max_sum;
        
    }
};