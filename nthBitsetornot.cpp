#include<iostream>


bool isSet(int n,int pos)
{
    int f=1;
    f = f<<pos;
    std::cout<<f<<std::endl;
    f= f & n;
    std::cout<<f<<std::endl;
    if(f)
    {
        return true;
    }

    else 
    {
        return false;
    }
}
int main()
{
    int n =12,pos=1;
    if(isSet(n,pos))
        std::cout<<"TRUE"<<std::endl;
    else
    {
        std::cout<<"False"<<std::endl;
    }
    
return 0;
}