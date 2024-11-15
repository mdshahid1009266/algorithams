#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int s, int e) {
    for (int i = s; i < e; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merging(int arr1[], int sz1, int arr2[],int sz2) {
    int s1=0;
    int s2=0;
    int arr[sz1+sz2];
    int i=0;
    while(s1 < sz1 && s2<sz2)
    {
        if(arr1[s1] > arr2[s2]) arr[i++]=arr2[s2++];
        else arr[i++]=arr1[s1++];
    }
    while(s1<sz1) arr[i++]=arr1[s1++];
    while(s2<sz2) arr[i++]=arr2[s2++];
    printArray(arr,0,sz1+sz2);
}

int main() {
    int arr1[] = {3,6,9,12,15,18};
    int arr2[] = {5,10,15,20,25,30};
    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
    int sz2 = sizeof(arr2) / sizeof(arr2[0]);
    merging(arr1,sz1,arr2,sz2);

    return 0;
}
