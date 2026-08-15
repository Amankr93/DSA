class NumArray {
public:
    vector<int>nums;
    NumArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            this->nums.push_back(nums[i]);
        }
        
    }
    
    int sumRange(int left, int right) {
        if(this->nums.size()==0)return 0;
        int sum= 0;
        for(int i = left; i<= right ; i++){
            sum+=this->nums[i];
        }
        return sum;
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */