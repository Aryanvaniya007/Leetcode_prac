#include<bits\stdc++.h>
using namespace std;

// class Solution
// {
//     public:
//     void sub(vector<int>& arr,int n)
//     {
//         int len = 0;
//         for(int i=0;i<arr.size();i++)
//         {
//             int s = 0;
//             for(int j=i;j<arr.size();j++)
//             {
//                 s+=arr[j];
//                 cout<<arr[j]<<" ";
//                 if(n==s)
//                 {
//                     len = max(len,j-i+1);
//                 }
//             }
//             cout<<"  "<<s;
//             cout<<endl;
//         }
//         cout<<len;
//     }
// };

// brtter approach for longest subarray  with sum k
// int sub(vector<int>& arr, long long k)
// {
//     map<long long,int> ps;   // prefix sum -> index
//     long long sum = 0;
//     int maxlen = 0;

//     for(int i = 0; i < arr.size(); i++)
//     {
//         sum += arr[i];

//         if(sum == k)
//         {
//             maxlen = max(maxlen, i + 1);
//         }

//         long long rem = sum - k;
//         if(ps.find(rem) != ps.end())
//         {
//             int len = i - ps[rem];
//             maxlen = max(maxlen, len);
//         }

//         if(ps.find(sum) == ps.end())
//         {
//             ps[sum] = i;
//         }
//     }
//     return maxlen;
// }

// optimal approach for longest subarray  with sum k
 #include <bits/stdc++.h>
using namespace std;

int sub(vector<int>& arr, long long k)
{
    int l = 0, r = 0;
    long long sum = arr[0];
    int maxlen = 0;
    int n = arr.size();

    while(r < n)
    {
        // shrink window if sum > k
        while(l <= r && sum > k)
        {
            sum -= arr[l];
            l++;
        }

        // check if current window sum == k
        if(sum == k)
        {
            maxlen = max(maxlen, r - l + 1);
        }

        // expand window
        r++;
        if(r < n)
            sum += arr[r];
    }

    return maxlen;   // <-- missing before
}

int main()  
{
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1};
    long long k = 5;

    cout << "Longest subarray length = " << sub(arr, k) << endl;
    return 0;
}
