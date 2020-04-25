#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int>nums={1,2,3,4},res;
int product = 1,n=nums.size();
res.push_back(nums[0]);
for (int i = 1; i < n; i++)
{
    res.push_back(res[i-1]*nums[i]);
    /* code */
}

res[n-1] = res[n-2];
//product = nums[n-1]; 
for(int i=n-1;i>0;i--)
{
    res[i] = product * res[i-1];
    product *= nums[i]; 
}
res[0] = product;
for(auto i : res)
{
std::cout<<i<<std::endl;
}
return 0;
}