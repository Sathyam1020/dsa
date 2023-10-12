#include<iostream>
using namespace std; 

int main(){

    int n; 
    cout<<"Enter the number of array elements: "<<endl;
    cin>>n; 

    int arr[n];  // Declare an array of size 'n'
    cout <<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Read each element one by one
    }

    for (int i=0; i<n-1; i++){
        int index = i; 
        for (int j=i+1; j<n; j++){
            if(arr[j] < arr[index])
            index = j; 
        }
        swap(arr[i], arr[index]); 
    }

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}