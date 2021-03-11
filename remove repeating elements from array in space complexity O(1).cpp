class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int temp=nums[0];
        int l=0;
        for(int i=0;i<n;i++){
            if(nums[i]==temp)
                count++;
            else if(temp!=nums[i]){
                temp=nums[i];
                count=1;
            }
            if(count>2){
                nums[i]=INT_MIN;
                l++;
            }
            
        }
        // for(int i:nums)
        //     cout<<i<<" ";
        int t=0;
        int i=0,j=i+1;
        for(;i<n && j<n;){
            if(nums[i]==INT_MIN)
                t=1;
            //cout<<t<<" "<<nums[i]<<" "<<nums[j]<<endl;
            if(t==1){
                if(nums[j]!=INT_MIN){
                    nums[i]=nums[j];
                    i++;
                    j++;
                }
                else{
                    j+=1;
                }
            }
            else{
                i++;
                j++;
            }
        }
        return n-l;
    }
};
