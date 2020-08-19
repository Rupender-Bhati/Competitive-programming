#include<map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map <int,int> feq;
        int ans=0;
        bool flag= false;
        if(nums.size()%2==0)
        {
            flag=true;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(feq.find(nums[i])==feq.end())
            {
                feq[nums[i]]=1;
            }
            else
                feq[nums[i]]++;
        }
        
        
        if( nums.size()==2)
        {
            return nums[0];
        }
        if(flag==true)
        {
             for(auto& it : feq)
        {
                 if(it.second>=(nums.size()/2))
                    ans=it.first;
          
        }
        }
       else
       {for(auto& it : feq)
        {
                 if(it.second>(nums.size()/2))
                    ans=it.first;
          
        }
                    }
                    
                    
       return ans; 
    }
};