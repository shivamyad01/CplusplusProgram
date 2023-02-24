#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}


 void AlternateSwap(int arr[],int n){
    for(int i=0;i<n;i+=2){
       if (i+1<n)
       {
         swap(arr[i],arr[i+1]);
       }
       



    }
 }


int main(int argc, char const *argv[])
{
    cout<<"Enter the number of array :";

    int n;
    cin>>n;
    cout<<"Enter the array : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

     AlternateSwap(arr,n);
     printArray(arr,n);
   
    return 0;
}
