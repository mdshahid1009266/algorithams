/// time complexity bestCase O(n^2),avarageCase O(n^2), worstCase O(n^2)
#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    for(auto e : v) cout<<e<<" ";
    cout<<endl;
}
int main()
{
    vector<int> v = {34, 72, 15, 89, 23, 56, 47, 91, 68, 10};

    cout<<"Before sorting :\n";
    print(v);
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i] > v[j]) swap(v[i],v[j]);
        }
    }
    cout<<"After sorting :\n";
    print(v);
    return 0;
}
