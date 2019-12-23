#include <iostream>

using namespace std;

int main()
{
    int i,j,k,l=-1,m,n,x;
    std::cin >> n;
     std::cin >> x;
    int arr[100];
    for(i=0;i<n;i++)
    std::cin >> arr[i];
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        l=i;
    }
    if(l!=-1)
    {cout <<"Element Found at location : ";
     cout<<(l+1);}
    else
    cout<<"Element not Found";
    return 0;
}
