// Varun Pendem
// PRN: 23070123149

#include<iostream>
#include<string>
using namespace std;
int main() {
string a;
cout<<"Enter a word: ";
cin>>a;
cout<<"The entered string is "<<a<<endl;
return 0;

// Concatenation of strings
string b;
cout<<"Enter strings: ";
cin>>a>>b;
cout<<"CONCATENATION: "<<c+b;
cout<<endl;
}

// Reversing a string
for(int i=a.length()-1;i>=0;i--) {
cout<<a[i];
cout<<endl;
}

// Checking Palindrome
int n=a.length(), i, flag=0;
for(i=0;i<a.length();i++){
if(a[i]==a[n-1]){
flag=1;
}
n--;
}
if(flag==1){
cout<<a<<" is palindrome";
}
else{
cout<<a<<" is not palindrome";
}
