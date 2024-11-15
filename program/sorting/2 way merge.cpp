#include<bits/stdc++.h>
using namespace std;

vector<int> merge_vector_element(vector<int> v1,vector<int> v2,int s1,int s2 )
{
    vector<int> nv;
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
void merge_array_element(int arr1[],int arr2[],int sz1,int sz2)
{
    int arr[sz1+sz2];
    int l1=0,l2=0,k=0;
    while(l1<sz1 && l2<sz2)
    {
        if(arr1[l1] < arr2[l2]) arr[k++] = arr1[l1++];
        else arr[k++] = arr2[l2++];
    }
    while(l1<sz1) arr[k++] = arr1[l1++];
    while(l2<sz2) arr[k++] = arr2[l2++];

    for(int i=0;sz1+sz2;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
//void merge_sort(vector<int> arr,int sz)
//{
//    vector<int> nv= merge_element({1,3,5},{2,4,6},2,2);
//
//    vector<vector<int>> nvv;
//    for(auto e : nv) cout<<e<<"-";
//    for(int i=1;i<sz;i+=i)
//    {
//        vector<int> tv1;
//        int j=0;
//        for(int j=0;j<i;j++) tv1.pb(arr[j++]);
//    }
//}


int main()
{
//    vector<int> arr= {100,113,110,85,105,102,86,63,81,101,94,106,79,94,90,97};
//    int sz=arr.size();
//    merge_sort(arr,sz);

    vector<int> v1={1, 10, 9999},v2={2, 20, 30, 40};
    vector<int> nv=merge_vector_element(v1,v2,v1.size()-1,v2.size()-1);
    for(auto e : nv) cout<<e<<" ";
    cout<<endl;

    int arr1[]={1,3,5};
    int arr2[]={2,4,6};
    mrge(arr1,arr2,3,3);
    return 0;
}
