   void wiggleSort(vector<int> &nums) {
        
        for (int i = 0; i < nums.size(); i++) {
            
            if(i%2) { // Even idx
                if(nums[i] >= nums[i+1])
                    swap(nums[i],nums[i+1]);
            
            }else{ // Odd index
                if(nums[i] <= nums[i+1])
                    swap(nums[i],nums[i+1]);
            }
        }
        
        
    }