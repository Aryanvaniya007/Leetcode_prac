// intersection section of two given array

#include<bits/stdc++.h>
using namespace std;

class probleam
{
    public:
    void inter(vector<int>&a,vector<int>&b)
    {
        int i=0,j=0;
        int n1 = a.size();
        int n2 = b.size();
        vector<int>temp;
        while(i<n1 && j<n2)
        {
            if(a[i]<b[j])
            {
                i++;
            }
            else if(b[j]<a[i])
            {
                j++;
            }
            else{
                temp.push_back(a[i]);
                i++;
                j++;
            }

        }
        for(auto x :temp)
            cout<<x<<" ";
        cout<<endl;
    }
};

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6};
    vector<int> b = {4, 5, 6, 7, 8, 9};

    probleam obj;
    // obj.union_st(a,b);

    cout<<"set after intersection operation:"<<endl;
    obj.inter(a,b);
}