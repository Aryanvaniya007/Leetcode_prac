#include<bits\stdc++.h>
using namespace std;

int miss(vector<int>&arr,int n)
{
    for(int i=n;i<arr.size();i++)
    {
        int flag = 0;
        for(int j=0;j<arr.size()-1;j++)
        {
            if(arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
            return i;
    }
}
int miss_xor(vector<int>&arr,int N)
{
    int xor1 = 0,xor2 = 0;
    int n = N-1;
    for(int i=0;i<n;i++)
    {
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);
    }
    xor1 = xor1^N;
    return xor1^xor2;
}

int main()
{
    vector<int>arr = {1,2,4,5};
    // cout<<miss(arr,5)<<endl;
    cout<<miss_xor(arr,5)<<endl;
    return 0;
}
