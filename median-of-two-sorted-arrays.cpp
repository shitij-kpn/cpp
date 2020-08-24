//https://leetcode.com/problems/median-of-two-sorted-arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        int i=0,j=0;
        int n=nums1.size(),m=nums2.size();
        while(i<n && j<m){
            if(nums1[i] > nums2[j]){
                merged.push_back(nums2[j]);
                j++;
            }
            else{
                merged.push_back(nums1[i]);
                i++;
            }
        }
        while(i<n){
            merged.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            merged.push_back(nums2[j]);
            j++;
        }
        int size = merged.size();
        int middle = size/2;
        double ans = 0;
        if(size%2){    //odd
             ans = merged[middle];
            // cout<<"odd "<<size<<" "<<middle<<" "<<ans<<endl;
        }
        else{
            
            ans = merged[middle-1] + merged[middle];
            ans /= 2.0;
            // cout<<"even "<<size<<" "<<middle<<" "<<ans<<endl;
        }
        return ans;
    }
};