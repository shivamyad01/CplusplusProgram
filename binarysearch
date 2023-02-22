#include<iostream>
using namespace std;

int binarySearch(int arr[],int n ,int x){
int start=0; int end=n-1;
int mid=(start +end)/2;
    while (start<=end)
    {
        if (arr[mid]==x)
        {
            return mid;
            
        }
        else if (x<arr[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;

        }
        mid=(start+end)/2;
        
        
    }
    return -1;
    
}


int main(int argc, char const *argv[])
{

cout<<"ENter the no of array";

    int n;
    cin>>n;
cout<<"ENter the array";
int arr[100];
for (int i=0;i<n; i++)
{
   cin>>arr[i];
}

    int x;
   cin>>x;
cout<<binarySearch(arr,n,x)<<endl;

    
    return 0;
}
