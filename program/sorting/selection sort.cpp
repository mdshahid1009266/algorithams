#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min_indx=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j] < arr[min_indx]) min_indx=j;
        }
        swap(arr[i],arr[min_indx]);
    }
}
int main()
{
    int arr[]={3,2,4,5,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,sz);
    selection_sort(arr,sz);
    printArray(arr,sz);
    return 0;
}
