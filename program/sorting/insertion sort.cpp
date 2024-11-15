#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1],
        // that are greater than key,
        // to one position ahead of their
        // current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void dicInsertionSort(int arr[],int sz)
{
    for(int i=1;i<sz;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(key>arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[]={31,41,59,26,41,58};
    int sz=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting \n"<<endl;
    printArray(arr,sz);
    insertionSort(arr,sz);
    cout<<"After sorting \n"<<endl;
    printArray(arr,sz);
    dicInsertionSort(arr,sz);
    cout<<"After sorting In decrising order \n"<<endl;
    printArray(arr,sz);
    return 0;
}
