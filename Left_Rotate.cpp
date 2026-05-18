#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     void Lrotate_Brute(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // handle k > n
        for(int i = 0; i < k; i++)
        {
            int temp = nums[n-1]; // store last element
            for(int j = n-1; j > 0; j--)
            {
                nums[j] = nums[j-1]; // shift right
            }
            nums[0] = temp; // put last element at front
        }
    }

    void Lrotate_Optimal(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n; // normalize k if larger than n

        // reverse first k elements
        reverse(arr.begin(), arr.begin() + k);
        // reverse remaining n-k elements
        reverse(arr.begin() + k, arr.end());
        // reverse entire array
        reverse(arr.begin(), arr.end());
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Solution obj;
    obj.Lrotate_Brute(arr, 3);
    // obj.Lrotate_Optimal(arr,3);

    cout << "Array after rotation:" << endl;
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
