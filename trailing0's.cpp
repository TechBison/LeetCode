#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                if(i==0)
                {nums.erase(nums.begin());}
                else
                {
                nums.erase(nums.begin()+i);
                }
                count++;
            }
            
        }
        while(count>0)
        {
            nums.push_back(0);
            count --;
        }
    }
int main()
{
vector<int>n ={0,0,1};
moveZeroes(n);
for (int i=0;i<n.size();i++)
{
    /* code */
    std::cout << n[i] << std::endl;

}
return 0;
}