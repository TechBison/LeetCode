#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int>& stones) 
{
    make_heap(stones.begin(),stones.end());
    int n = stones.size();
    int first,second;
    while(n>1)
    {
        pop_heap(stones.begin(),stones.end());
        first = stones.pop_back();
        
    }

}

int main()
{
return 0;
}