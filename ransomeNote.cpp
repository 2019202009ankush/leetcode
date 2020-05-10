class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       
        unordered_map<char,int> m,m1;
        for(auto i:magazine) m[i]++;
        for(auto i:ransomNote) m1[i]++;
        bool ans=1;
        for(auto it=m1.begin();it!=m1.end();it++)
        {
            
            if(it->second<=m[it->first]) ans=1;
            else{
                ans=0;
                break;
            } 
        }
        return ans;
    }
};