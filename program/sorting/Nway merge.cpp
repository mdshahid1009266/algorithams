#include<bits/stdc++.h>
using namespace std;

vector<int> merge_vector_element(vector<int> v1,vector<int> v2)
{
    vector<int> nv;
    int s1=v1.size(),s2=v2.size();
    int i=0,j=0;
    while(i<s1 && j<s2)
    {
        if(v1[i] < v2[j]) nv.push_back(v1[i++]);
        else nv.push_back(v2[j++]);
    }
    while(i<s1) nv.push_back(v1[i++]);
    while(j<s2) nv.push_back(v2[j++]);
    return nv;
}

void Nway_merge(vector<vector<int>> vv)
{
    vector<int> nv=vv[0];
    for(int i=1;i<vv.size();i++)
    {
        nv=merge_vector_element(nv,vv[i]);
        for(auto e : nv) cout<<e<<" ";
    cout<<endl;
    }
    for(auto e : nv) cout<<e<<" ";
    cout<<endl;
}

int main()
{
    vector<vector<int>> dd = {
        {1, 10, 9999},
        {2, 20, 30, 40},
        {3, 100, 200, 300, 400, 500},
        {4, 1000, 2000, 3000, 4000, 5000, 6000},
        {5, 20, 30, 40, 50, 60, 70}
    };
    vector<vector<int>> dd1 = {
        {1},
        {2},
        {3},
        {4},
        {5}
    };
    Nway_merge(dd1);
    return 0;
}
