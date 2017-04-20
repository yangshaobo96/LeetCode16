#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
class Solution {
public:
    int count;
    int tar;
    int threeSumClosest(vector<int>& nums, int target) {
        count=0;
        tar=999999;
        int c=0;
        int t=99999;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;++i){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                c=nums[i]+nums[j]+nums[k];
                t=target-c;
                if(t>0) j++;
                else if(t==0) break;
                else k--;
                if(tar>abs(t)){
                    count=c;
                    tar=abs(t);
                }
                }
        }
        return count;
    }
};
int main(int argc, char *argv[])
{
    Solution a;
    vector<int> b{0,1,2};
    int res=a.threeSumClosest(b,3);
    cout << "Hello World!" << endl;
    return 0;
}
