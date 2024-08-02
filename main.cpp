class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        int s =0;
        int e = nums.size()-1;
        int mid = s + (e-s)/2;
        
        while(s<=e){
            if(nums[mid]==target){
                s = mid;
                e = mid;
                while(s>0 && nums[s-1]==target){
                    s--;
                }
                while(e<nums.size()-1 && nums[e+1]==target){
                    e++;
                }
                result[0]=s;
                result[1]=e;

                return result;
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            else{
                s =mid+1;
            }
            mid = s + (e-s)/2;
        }
      
        return result;
    }
};
