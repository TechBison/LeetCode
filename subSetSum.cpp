#include<iostream>

using namespace std;

int main()
{
int arr[4];
bool flag=false;
for(int i=0; i<4;i++) cin>>arr[i];
for(int mask=1;mask<16;mask++)
{
    int sum=0;
    for(int i = 0; i<4;i++)
    {
        int f = 1<<i;
        if((mask&f)!=0)
            sum += arr[i];  
    }
    if (sum == 0)
    {
        flag = true;
        break;
        /* code */
    }
}
if (flag)
{
    std::cout << "YES" << std::endl;
}
else
{
    std::cout << "NO" << std::endl;
}
return 0;
}