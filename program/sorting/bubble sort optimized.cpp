/// time complexity bestCase O(n),avarageCase O(n^2), worstCase O(n^2)
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
        bool swapped=true;
        for(int j=0;j<v.size()-1;j++)
        {
            if(v[j] > v[j+1])
            {
                swap(v[j+1],v[j]);
                swapped=false;
            }
        }
        if(swapped) break;
    }
    cout<<"After sorting :\n";
    print(v);
    return 0;
}

