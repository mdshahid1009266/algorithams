#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int s,int e)
{
    for (int i = s; i < e; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void marged(int arr[],int s,int m,int e)
{
    int sz=e-s+1;
    int newarr[sz];
    int indx1=s;
    int indx2=m+1;
    int i=0;

    while(indx1 <= m && indx2 <= e)
    {
        if(arr[indx1] < arr[indx2])
        {
            newarr[i++] =arr[indx1++];
        }
        else newarr[i++] =arr[indx2++];
    }

    while(indx1 <= m) newarr[i++] = arr[indx1++];
    while(indx2 <= e) newarr[i++] = arr[indx2++];

    for(int i=0,j=s;i<sz;i++,j++) arr[j]=newarr[i];
    printArray(newarr,0,sz);

}
void merge_sort(int arr[],int s,int e)
{
    if(s == e) return;

    int m=(s+e)/2;

//    printArray(arr,s,m);
//    printArray(arr,m+1,e);

    merge_sort(arr,s,m);
    merge_sort(arr,m+1,e);

    marged(arr,s,m,e);
}
int main()
{
    int arr[]={3,2,-1,4,5,0};
    int sz=sizeof(arr)/sizeof(arr[0]);

    merge_sort(arr,0,sz-1);
    printArray(arr,0,sz);
    return 0;
}

