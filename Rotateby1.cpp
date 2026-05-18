#include<bits\stdc++.h>
using namespace std;

class Solution{
    public:
    void Rotate(vector<int>&arr)
    {
        
        int n = arr.size();
        for(int a=0;a<3;a++)
        {
            int temp = arr[0];
            for(int i=0;i<n-1;i++)
            {
                arr[i] = arr[i+1];
            }
            arr[n-1] = temp;
    }
        
    }
};

int main()
{
    vector<int>arr = {1,2,3,4,5,6};
    Solution obj;
    obj.Rotate(arr);
    cout<<"array after rotation:"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}