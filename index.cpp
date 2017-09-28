#include <iostream>
#include <string.h>
using namespace std;
//i cannot

int main() {
    int n,size;
    std::cin>>n;
  
    while(n>0)
    {
    	 string res="yes";
        std::cin>>size;
        int arr[size];
        for(int i=0;i<size;i++)
        {
            std::cin>>arr[i];
        }
        for(int i=0;i<size/2;i++)
        {
            if(arr[i]==0 || arr[i]!=arr[size-i-1])
            {
                res="no";
                break;
            }
            
        }
        cout<<res;
        n--;
        
    }
   
    
}
