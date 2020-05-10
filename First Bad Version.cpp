class Solution {
public:
    int firstBadVersion(int n) {
        long int low =1;
        long int high=n;
        long int ans=-1;
        while(low<=high)
        {
            long int mid=low+(high-low)/2;
            if(isBadVersion(mid))
            {
                ans=mid;
                high=mid-1;
                
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
        
    }
};