#define v vector<int>
#define pq_int priority_queue<int>
class Solution {
public:
    int minimumDeviation(v& nums) {
        pq_int pq; 
        int m = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                pq.push(nums[i]);
                m = min(m,nums[i]);
            }
            else{
                pq.push(nums[i]*2);
                m = min(m,nums[i]*2);
            }
        }
        int ans = INT_MAX;
        while(!pq.empty()){
            int top = pq.top();
            pq.pop();
            ans = min(ans,top-m);
            if(top%2!=0){
                break;
            }
            m = min(m,top/2);
            pq.push(top/2);
        }
        return ans;
    }
};