#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*Function to reverse arr[] from start to end*/
void reverseArray(int arr[], int start, int end)
{
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Utility function to print an array
void printArray(int arr[], int size)
{
    for(int i = 0 ; i < size; i++)
    cout<< arr[i] << " ";
    
    cout<< endl;
}

// Driver fucntion to test above functions
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // To print original array
    printArray( arr, n);
    
    
    // Function calling
    reverseArray(arr, 0 , n -1);
    
    
    cout<<"Reversed Array is "<<endl;
    
    //To print the Reversed Array
    printArray(arr,n);
    
    return 0;
}