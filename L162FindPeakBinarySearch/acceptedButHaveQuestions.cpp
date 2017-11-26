class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        while(start<end)
        {
            int mid = start+(end-start)/2;
            /*if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])//这题没有这一段也能通过，也是非常醉
            {
                return mid;
            }*/
            if(nums[mid]>nums[mid+1])//二分法，如果nums[mid]>nums[mid+1],就是处于在"\"这样的斜线上，peak肯定在mid的上(左)面
            {
                end = mid;
            }
            else
            {
                start = mid + 1;
            }
        }
        return start;//为啥非得return start?!!!!
    }
};
