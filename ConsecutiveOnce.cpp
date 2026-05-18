#include<bits\stdc++.h>
using namespace std;

class Solution{
    public:
    int Consecutive(vector<int>&arr)
    {
        int maxi = 0;
        int count = 0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] == 1)
            {
                count++;
                maxi = max(count,maxi);
            }
            else{
                count = 0;
            }
        }   
        return maxi;
    }

};

int main()
{
    vector<int>arr = {1,1,0,1,1,1,1,1,0,0,0,1,1,1};
    Solution obj;
    int result = obj.Consecutive(arr);
    cout<<"Maximum Consecutive 1s: "<<result<<endl;
    return 0;
}