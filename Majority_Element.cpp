#include<bits/stdc++.h>
using namespace std;

int brute (vector<int>&arr)
{
    int n = arr.size();
    for(int i=0;i<arr.size();i++)
    {
        int count = 0;
        for(int j=0;j<arr.size();j++)
        {
            if(arr[j] == arr[i])
            count++;
        }
        if(count > n/2 ) return arr[i];
    }
    return -1;
}
// optimal approach
int optimal(vector<int>&arr)
{
    int cnt = 0;
    int el = 0;
    for(int i=0;i<arr.size();i++)
    {
        if(cnt == 0)
        {
            cnt=1;
            el = arr[i];
        }
        else if(arr[i] ==el)
            cnt++;
        else cnt--;
    }
    int cnt1 = 0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==el) cnt1++;
    }
    if(cnt1>arr.size()/2) return el;
    return -1;
}

int main()
{
    vector<int>arr = {7,7,5,7,5,1,5,7,5,5,7,7,1,1,1,1};
    int ans = optimal(arr);
    
   if(ans != -1)
        cout << "Majority element = " << ans << endl;
    else
        cout << "No majority element" << endl;

    return 0;
}