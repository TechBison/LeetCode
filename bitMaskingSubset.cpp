#include<iostream>

using namespace std;

int main() {

    char arr[]={'A','B','C','D'};
    int inp;
    cin>>inp;
    std::cout << inp << std::endl;
    int n = 1<<inp;
    std::cout << n << std::endl;
    for(int mask=1;mask<n;mask++)
    {
        
        for(int j=0;j<inp;j++)
        {
        /*code*/
        int f = 1 << j;
        if ((mask&f)!= 0)
        {
            std::cout << arr[j] << " ";
        }
        }
        std::cout<< std::endl;
    }
    return 0;
}