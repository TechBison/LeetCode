#include<iostream>

int CountBits(int n)
{
    int cnt=0;
    while (n>0)
    {
        if ((n&1)>0)
        {
            cnt++;
        }
        n=n>>1;   
    }
    return cnt;
}

int main()
{
    int n=16;
    std::cout<<CountBits(n)<<std::endl;
    std::cout<<(4^8^2)<<std::endl;
    return 0; 
}