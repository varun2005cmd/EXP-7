# Arrays and Strings

# EXPERIMENT 7-A ARRAYS

## AIM:

To study and implement C++ Arrays 

SOFTWARE USED: VS Code


## THEORY:

In computer science, an array is a data structure consisting of a collection of elements (values or variables), of same memory size, each identified by at least one array index or key.
Arrays have continous memory allocation
In C++ language, the array has a fixed size meaning once the size is given to it, it cannot be changed i.e. you can’t shrink it nor can you expand it. The reason was that for expanding if we change the size we can’t be sure ) that we get the next memory location to us for free. The shrinking will not work because the array, when declared, gets memory statically allocated, and thus compiler is the only one that can destroy it. 
For example: -
If an array is of the integer datatype, then: -
1. The array will contain only integer datatype values and variables
2. If the first element memory address is allocated at 1000 then the 2nd element will have the memory address as 1004
3. The array indexing will start at 0, so if u want ot access the first element of lets say array arr, it will have to be called at either the value of arr[0] or via reference(address of the first element)

 Applications of Array Data Structure: -
1. To represent data in matrix form, a vector or a tabular form
2. To store data for processing
3. Implementing data structures such as queues and stacks as well dynamic memeory allocation like linked lists and trees


 Array Operations: -
1. __Traversal__ : Visiting each element of an array in a specific order (e.g., sequential, reverse).
2. __Insertion__ : Adding a new element to an array at a specific index.
3. __Deletion__ : Removing an element from an array at a specific index.
4. __Searching__ : Finding the index of an element in an array.

 Types of arrays: -
1. One dimensional arrays
2. Multi dimensional arrays
   
## CODE:
```


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

// Sum of elements and average
int avg = sum5/size5;
      for(int k = 0; k<size5; k++){
            sum5 = sum5 + arr3[k];
      }
      cout<<"The sum of the elements in the array is:"<<sum5<<endl;
      cout<<"The average of the elements in the array is:"<<avg<<endl;


// Reversing an array 
     
     for(int m = 5; m>5; m--){
        cout<<arr2[m]<<"";
     }
     cout<<endl;

// Finding array ith count and flag

int marks[5], num, flag=0, count=0, i,j;
for(i=0;i<5;i++) {
cout<<"Enter element-"<<i+1<<": ";
cin>>marks[i];
}
cout<<"Enter element to be searched: ";
cin>>num;
for(j=0;j<5;j++) {
if(marks[j]==num) {
cout<<"Position of "<<num<<": "<<j+1<<endl;
count++;
flag=1;
}
}
if(flag==0) {
cout<<"Element not present";
}
else if(flag==1) {
cout<<"Element is present: "<<count<<" times";
}

// Max and Min in an array

int n, max=0;
cout<<"Enter number of elements: ";
cin>>n;
int a[n];
for(i=0;i<n;i++){
cout<<"Enter element-"<<i<<": ";
cin>>a[i];
}
for(i=0;i<n;i++){
if(a[i]>max){
max=a[i];
}
}
int min=a[0];
for(i=0;i<n;i++){
if(min>a[i]){
min=a[i];
}
}
cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;

    return 0;
}
```

## CODE OUTPUT:

![image](https://github.com/user-attachments/assets/3bc1f910-aa54-4676-9b0a-69d4db6893e4)

![image](https://github.com/user-attachments/assets/e9fa065f-4cea-463b-9f69-729fed255489)


Conclusion:

We learnt how to implement arrays and its operations in C++ programming languages



# EXPERIMENT 7-B STRINGS 

 ##AIM:

To study and implement C++ strings

SOFTWARE USED: VS Code

## THEORY

A string is a datatype having a sequence of characters used to represent text. Strings are commonly used for storing and manipulating textual data in computer programs. They can be manipulated using various operations like concatenation, substring extraction, and comparison.

In most programming languages, strings are treated as a distinct data type. This means that strings have their own set of operations and properties. They can be declared and manipulated using specific string-related functions and methods.

 Application of strings

1. Hashing and encryption of data: - Random strings are generated to secure data or encrypt data
2. Data representation
3. Database operation
4. Web developmenent

 Operations of strings: -
1. Find the length of a string 
2. Accessing Characters	from a string using its indexing value
3. Concating or merging of 2 strings 
4. Appending and Concatenating Strings	
5. comparing 2 strings

## CODE: 
```
//Varun Pendem
// PRN: 23070123149

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a;
    cout<<"Enter any string"<<endl;
    cin>> a;
    cout<<"The entered string is: "<<a<<endl;

    cout<<endl;

    cout<<"Concatenation of 2 strings: "<<endl;
    cout<<"\nEnter 2 strings to concatenate: "<<endl;
    string str1,str2,str3,str4;
    cin>> str1>> str2;
    cout<<"\nConcatenation of the 2 strings: "<<str1+str2<<endl;

    cout<<endl;    
    cout<<"\nEnter a string to reverse"<<endl;
    cin>> str3;
    for(int i = str3.length()-1;i>=0;i--)
    {
        cout<<str3[i];
    }

    cout<<endl;
    
    cout<<"Enter a string to check whether a given string is a Palindrome"<<endl;
    cin>>str4;
    int len = str4.length();
    bool flag = true;
    for (int i = 0; i < len / 2; i++)
    {
        if (str4[i] != str4[len - 1 - i])
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        cout<<"The given string is  a palindrome"<<endl;
    }
    else 
    {
        cout<<"The given string is not a palindrome"<<endl;
    }


    return 0;
}
```

## CODE OUTPUT:

![image](https://github.com/user-attachments/assets/62e6adf3-8aba-40fb-a033-98a108ad3b1b)

![image](https://github.com/user-attachments/assets/77e72264-4dfe-4c89-a6ff-cab458518a4c)



## Conclusion:

In this experiment we learnt how to implement string and its operations like sorting, searching, etc.
