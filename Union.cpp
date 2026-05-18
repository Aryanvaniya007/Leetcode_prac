// union of two given arrays
#include<bits\stdc++.h>
using namespace std;

class probleam
{
    public:
    void union_st(vector<int>&a,vector<int>&b)
    {
        set<int>st;
        for(int i=0;i<a.size();i++)
        {
            st.insert(a[i]);
        }
        for(int i=0;i<b.size();i++)
        {
            st.insert(b[i]);
        }
         vector<int>temp;
         for( auto it : st)
         {
            temp.push_back(it);
         }
            for (int x : st) {
        cout << x << " ";
    }
    cout << endl;
    }

    // optimal approch
    void optimal(vector<int>&a,vector<int>&b)
    {
        vector<int>temp;
        int i=0;
        int j=0;
        int n1 = a.size();
        int n2 = b.size();
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        while(i<n1 && j<n2)
        {
            if(a[i] <= b[j])
            {
                if(temp.size() == 0 || temp.back() != a[i])
                    temp.push_back(a[i]);
                i++;
            }
            else{
                if(temp.size() == 0 || temp.back() != b[j])
                    temp.push_back(b[j]);
                j++;
            }
        }
        while(j<n2)
        {
            if(temp.size() == 0 || temp.back() != b[j])
                    temp.push_back(b[j]);
                j++;
        }
        while(i<n1)
        {
            if(temp.size() == 0 || temp.back() != a[i])
                    temp.push_back(a[i]);
                i++;
        }
        for(auto i : temp)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    vector<int>a = {1,2,1,4,5,6,2,1,3};
    vector<int>b = {1,7,8,5,6,2,1};

    probleam obj;
    // obj.union_st(a,b);

    cout<<"set after union operation:"<<endl;
    obj.optimal(a,b);
    
}