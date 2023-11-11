#include<iostream>
using namespace std;
int main(){//Q 1
int n;
cout<<"Enter size of the array : ";
cin>>n;
int arr[n];
cout<<"Enter Elements of array in decreasing order : ";
for(int i =0;i<n;i++) cin>>arr[i];
int lo = 0,hi = n-1,x;
cout<<"Enter Target : ";
cin>>x;
bool check = false;
while(lo<=hi){int mid = lo+(hi-lo)/2;
if(arr[mid] == x) {
    check = true;
    break;
}
else if(arr[mid]<x) hi = mid-1;
else lo = mid+1;
}
if(check) cout<<"Target is present in the array .";
else cout<<"Target is not present in the array .";




}
