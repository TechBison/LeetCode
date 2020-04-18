#include<iostream>
#include<vector>

int sumXorPair(int vec[])
{
    int res=0;

    for(int i =0;i<31;i++)
    {
        int cnt0=0,cnt1=0;
        for (int j = 1; j < 3; i++)
        {
            if(vec[j] & (1<<i))
            cnt1++;
            else
            {
                cnt0++;
            }
        }
        int p = cnt0*cnt1;
        res = res + (1<<i)*p;
    }
    return res;
}

 int main() {

    int vec[] = {5,3,9};
    std::cout<<sumXorPair(vec)<<std::endl;
    return 0;
}