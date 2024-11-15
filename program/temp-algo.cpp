#include<bits/stdc++.h>
using namespace std;

void marge(int arr1[],int sz1,int md,int sz2)
{
    vector<int> v;
    int i=sz1,j=mid+1;
    while(i<=mid && j<=sz2)
    {
        if(arr1[i] > arr1[j])
        {
            v.push_back(arr2[j++]);
        }
        else
        {
            v.push_back(arr1[i++]);
        }
    }
    while(i<sz1) v.push_back(arr1[i++]);
    while(j<sz2) v.push_back(arr2[j++]);

    for(auto e : v) cout<<e<<" ";
}

void merge_sort(int arr[],int l,int r,string w)
{
    if(l<r)
    {
        cout<<w<<" "<<l<<" "<<r<<" "<<":- ";
        for(int i=l;i<=r;i++) cout<<arr[i]<<" ";
        cout<<endl;
        int mid=(l+r)/2;
        merge_sort(arr,l,mid,"first");
        merge_sort(arr,mid+1,r,"second");

    }
}

int main()
{
    int arr[]={100,113,110,85,105,102,86,63,81,101,94,106,101,79,94,90,97};
    int sz=sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0,sz-1,"main");

    return 0;
}

