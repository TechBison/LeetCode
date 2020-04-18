#include<iostream>
#include<vector>

using namespace std;

double getMedian(vector<int>&input1,vector<int>&input2)
{
    if (input1.size()>input2.size())
    {
        return getMedian(input2,input1);
    }

    int l1 = input1.size();
    int l2 = input2.size();

    int left = 0;
    int right = l1;

    while(left<=right)
    {
        int partition1 = (left+right)/2;
        int partition2 = (l1+l2+1)/2 - partition1;

        int maxI1 = partition1 == 0 ?INT8_MIN:input1[partition1-1];
        int minI1 = partition1 == l1 ? INT8_MAX : input1[partition1];

        int maxI2 = partition2 == 0 ?INT8_MIN:input2[partition2-1];
        int minI2 = partition2 == l2 ?INT8_MAX:input2[partition2];

        if(maxI1<=minI2 && maxI2<=minI1)
        {
            if((l1+l2)%2==0)
            {
                double result = (double)(((double)max(maxI1,maxI2)+(double)min(minI1,minI2))/2);
                return result;
            }
            else 
            {
                return max(maxI1,maxI2);
            }
        }
        else if (maxI1>minI2)
        {
            right = partition1 -1;
        }
        else
        {
            left =partition1+1;
        }
    }
}

int main()
{
    vector<int> v1 = {1, 2};

    vector<int> v2 = {3,4};

    cout<<getMedian(v1,v2);


    return 0;
}
