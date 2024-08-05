// Varun Pendem
// PRN: 23070123149

#include<iostream>
#define size5 5
using namespace std;

int main()
{     int arr1[5] = {1,2,3,4,5};
      int arr2[5] = {5,4,3,2,1};
      int arr3[size5];
      int sum5 = 0;
      int target;

// Printing elements in array
      for(int i = 0; i < 5; i++){
            cout<<arr1[i]<<" ";
      }
      cout<<endl;

      for(int j = 0; j<size5 ; j++){
            cin>>arr3[j];
      }
      cout<<endl;

// Sum of elements 
      for(int k = 0; k<size5; k++){
            sum5 = sum5 + arr3[k];
      }
      cout<<"The sum of the elements in the array is:"<<sum5;

// Finding the target element in an array
      cout<<endl<<"Enter the element to find in array: "<<endl;
      cin>>target;
      for(int l = 0; l<5; l++){
           if(arr1[l]==target){
             cout<<"Element found at index: "<<l;
           }
           else{
            cout<<"No such element exists";
            break;
           }
      
      }

// Reversing an array 
     
     for(int m = 5; m>5; m--){
        cout<<arr2[m]<<"";
     }
     cout<<endl;
     






      return 0;
}
