#include<iostream>
#include<set>
#include<string>

using namespace std;

 int main() {

    const string st = "abcabcbcde";
    set<char> re ;
    int i=0,j=0,res=0;
    while (j<st.length())
    {
        if (re.find(st[j]) != re.end())
        {
           re.erase(st[i++]);
        }
        else
        {
            re.insert(st[j]);
            res = max(res,j-i);
            j++;
        }
        
        
    }
    cout<<res+1<<endl;
    for(auto &i : re)
    {
        cout<<i<<endl;
    }

    return 0;
}