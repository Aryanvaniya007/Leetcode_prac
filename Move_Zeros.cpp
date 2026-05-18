// Move Zeros At the end of the array brute force
#include<bits\stdc++.h>
using namespace std;

class probleam
{
    public:
    void Move_zeros(vector<int>&arr)
    {
        vector<int>temp;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] != 0)
            {
                temp.push_back(arr[i]);
            }
        }
         for(int j=0;j<temp.size();j++)
        {
            arr[j] = temp[j];
        }
        for(int j=temp.size();j<arr.size();j++)
        {
            arr[j] = 0;
        }
        for(int i=0;i<temp.size();i++)
        {
            cout<<temp[i]<<" "<<endl;
        }

    }


// Move Zeros At the end of the array optimal approch
    void optimal(vector<int>&arr)
    {
        int i = 0;
            for(int j = 0;j<arr.size();j++)
            {
                if(arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                    i++;
                }
            }
        
    }

};
int main()
{
    vector<int>arr = {1,0,2,3,2,0,0,4,5,1,0};
    probleam obj;
    // obj.Move_zeros(arr);
    obj.optimal(arr);
    
    cout << "Array after moving zeros:" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}