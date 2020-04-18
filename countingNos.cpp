#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int countElements(std::vector<int>& arr) 
{

    sort(arr.begin(),arr.end());
    int l=0,r=1,cnt=0;
    while(r<arr.size())
    {
        if (arr[l] == arr[r]-1)
        {
            cnt += r-l;
            l=r;
            r++;
        }
        else if (arr[l]==arr[r])
        {
            r++;
        }
        else
        {
            l=r;
            r++;
        }
        
    }
    return cnt;

}

int main()
{
    vector<int> vec = {1,1,3,3,5,5,7,7};
    std::cout << countElements(vec) << std::endl;
    return 0;
}