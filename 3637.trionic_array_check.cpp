class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 4) return false;
        int i = 0;
        
        
        while (i + 1 < n && nums[i + 1] > nums[i]) i++;
        int p = i;
        
        if (p == 0 || p >= n - 2) return false;
        
       
        while (i + 1 < n && nums[i + 1] < nums[i]) i++;
        int q = i;
        
       
        if (q == p || q >= n - 1) return false;
        
        
        while (i + 1 < n && nums[i + 1] > nums[i]) i++;
        
        
        return i == n - 1;
    }
};
