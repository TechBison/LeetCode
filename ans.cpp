#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int count=0,i=0;
        int n = nums.size()-1;
        while(n<=0)
        {
            if(nums[n]==0)
            {
                nums.erase(nums.end()-(n));
                count++;
            }  
            n--;
        }
        while(count>0)
        {
            nums.push_back(0);
            count --;
        }
    }
int main()
{
vector<int>n ={1,0,11,0,12,13,0,14,0};
moveZeroes(n);
for (int i=0;i<n.size();i++)
{
    /* code */
    std::cout << n[i]<<" ";

}
return 0;
}
