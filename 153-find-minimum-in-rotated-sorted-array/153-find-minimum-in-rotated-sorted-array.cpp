class Solution {
public:
   int findMin(vector<int> &num) {
        int lo =0, hi = num.size()-1;
       int ans = 0;
        while(lo<hi){
              int mid=(lo+hi)/2;
              if(num[mid]>num[hi]) lo=mid+1;
              else {
                  ans = mid;
                  hi = mid;
              }
        }
        return num[hi];
    }
};