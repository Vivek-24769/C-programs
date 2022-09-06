#include<iostream>
using namespace std;
int linearSearch(int arr[],int size, int element)
{
    for(int i=0;i<size;i++) 
    {
        if(arr[i]==element)
        return i;
    }
    return -1;
}
int binarySearch(int arr[],int size, int element)
{
    int low=0;
    int high=size-1;
    int mid;
    //can also use the following 4 lines to speed up the searching process
    //  if(arr[low]==element)
    //  return low;
    //  if(arr[high]==element)
    //  return high;
    // loop will work only till low <=high
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element)
        return mid;
        else if(arr[mid]>element)
        high=mid-1;
        else if(arr[mid]<element)
        low=mid+1;
    }
    return -1;
}
int main()
{
    int arr1[]={10,3,2,1,9,8,6,5,7,4};//linear search works on both sorted as well as unsorted arrays
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr) / sizeof(int);
    int element=10;
    int l=linearSearch(arr1,size,element);
    int b=binarySearch(arr,size,element); // binary search works only on sorted arrays **********very very important
    cout<<l<<endl;
    cout<<b<<endl;
    return 0;
}