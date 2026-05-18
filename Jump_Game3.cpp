#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool canReach(vector<int>& arr, int start) {
        queue<int>q;
        q.push(start);

        while(!q.empty())
        {
            int crr = q.front();
            q.pop();
            if(arr[crr] == 0)
                return true;
            if(arr[crr] < 0)
                continue;

            if (crr + arr[crr] < arr.size()) q.push(crr + arr[crr]);
            if (crr - arr[crr] >= 0) q.push(crr - arr[crr]);

            arr[crr] = -arr[crr];
        }
        return false;
    }
};

int main()
{
    vector<int> arr = {4, 2, 3, 0, 3, 1, 2};
    int start = 5;

    Solution sol;
    if(sol.canReach(arr, start))
        cout << "Yes, can reach a zero!" << endl;
    else
        cout << "No, cannot reach a zero." << endl;

    return 0;
}