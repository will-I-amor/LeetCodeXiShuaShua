class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;//例如count为{1:5(次),2:10(次),3:1(次)}，value为出现的次数，key为数字
        int max_freq = 1;
        for(const int num:nums)
        {
            max_freq = max(max_freq,++count[num]);//找出最大次数的同时，把count根据nums进行了更新
        }
        unordered_map<int,vector<int>>buckets;//建一个桶
        for (const auto &kv:count)
        {
            buckets[kv.second].push_back(kv.first);//桶的第一个元素是int，即数字出现的次数，即count的second
        }//桶的第二个元素是vector<int>,就是找到一个出现次数为5的数字，我们就把这个数字push进bucket[5]后面的vector
        vector<int>ans;
        for (int i = max_freq;i>=1;--i)//从最大的frequent开始找
        {
            auto it = buckets.find(i);
            if(it==buckets.end()) continue;
            ans.insert(ans.end(),it->second.begin(),it->second.end());//从ans的最后插入
            if(ans.size()==k){return ans;}
        }
    }
};
