#include<iostream>
#include<vector>
int AllSumXorPair(std::vector<int>&v)
{
    int su=0;
    for(auto i : v)
    {
        su=su^(2*i);
    }
    return su;
}
int main()
{
    std::vector<int>a={2,4,1};
    std::cout<<AllSumXorPair(a)<<std::endl;
}