 #include <bits/stdc++.h>
using namespace std;

int sortColors(vector<int>&arr)
{
    int c1 = 0,c2 = 0,c3 = 0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] == 0) c1++;
        else if(arr[i] == 1) c2++;
        else c3++;
    }
    
    for(int i = 0; i < c1; i++) arr[i] = 0;
    for(int i = c1; i < c1 + c2; i++) arr[i] = 1;
    for(int i = c1 + c2; i < arr.size(); i++) arr[i] = 2;

}

// optimal approach for sort numbers follows 0`s 1`s 2`s (Dutch National flag algorithm)
void optimal (vector<int>&arr)
{
    int mid = 0,low = 0,high = arr.size()-1;
    while(mid<=high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> arr = {2,0,2,1,1,0};
    // sortColors(arr);
    optimal(arr);

    for(int x : arr) cout << x << " ";
    cout << endl;
    return 0;
}