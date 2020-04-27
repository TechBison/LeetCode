/*You are climbing a stair case. It takes n steps to reach to the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?*/

#include<iostream>

using namespace std;
unsigned int dp[1000];

void init()
{
    dp[1]=1;
    dp[2] = 2;
    for(int i=3;i<1000;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }

}

int ClimbStair(int n)
{
    init();
    return dp[n];
}

int main()
{
int n=3;
std::cout << ClimbStair(n) << std::endl;
return 0;
}
