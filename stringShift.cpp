#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

string stringShift(string s, vector<vector<int>>& shift) {

int total =0;
for(auto i : shift)
{
    if(i[0]==0)
    {
        total -= i[1];
    }
    else
    {
        total += i[1];
    }
    
}

int n = s.length();
total %= n;
if (total<0)
{
    total += n;
}
 return s.substr(n-total) + s.substr(0,n-total);
}

int main()
{

string s = "abc";
vector<vector<int>> shift = {{0,1},{1,2}};
std::cout << stringShift(s,shift) << std::endl;
return 0;
}