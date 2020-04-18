#include<iostream>
#include<string>

using namespace std;
bool backspaceCompare(string S, string T) 
{
    int s_count=0,t_count=0,i=(S.size()-1),j = (T.size()-1);
    while (i>=0 || j>=0)
    {
        while (i>=0 &&(S[i]=='#' || s_count>0))
        {
            if (S[i]=='#')
            {
                s_count ++;
            }
            else
            {
                s_count --;
            }
            i--;
        }
        while (j>=0 &&(T[j]=='#' || t_count>0))
        {
            if (T[j]=='#')
            {
                t_count ++;
            }
            else
            {
                t_count --;
            }
            j--;
        }

        if (i>=0 && j>=0 && S[i]!=T[j])
        {
            return false;
        }
        if ((i<0 && j>=0)||(j<0 && i>=0))
        {
            return false;
        }
        i--;
        j--;
    }
return true;
}

int main()
{
    string S = "a##c", T = "#a#c";

    if(backspaceCompare(S,T))
    std::cout << "True"<< std::endl;
    else
    {
        std::cout << "False" << std::endl;
    }
    

    return 0;
}