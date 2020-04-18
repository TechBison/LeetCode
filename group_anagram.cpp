#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main() {
    vector<string> strs {"eat", "tea", "tan", "ate", "nat", "bat"};
    unordered_map<string,vector<string>> dic;    

    for (auto i : strs)
    {
        string key = i;

        sort(key.begin(),key.end());

        dic[key].push_back(i);
       // cout<<key<<endl;
    }
    vector<vector<string>> res;
    for(auto n : dic)
    {
        res.push_back(n.second);
    }
    
    return 0;
}