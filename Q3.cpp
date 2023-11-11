#include<iostream>
using namespace std;
int main(){//Q 3
int m,n,x;
cout<<"Enetr number of rows and columns respectively : ";
cin>>m>>n;
int arr[m][n];
cout<<"Enter the Elements in the array : ";
for(int i =0;i<m;i++){
    for(int j = 0;j<n;j++) cin>>arr[i][j];
}
cout<<"Enter the target : ";
cin>>x;
int r = -1;
int lo = 0,hi = m-1;
// TC = O(log m)
while(lo<= hi){int mid = lo+(hi-lo)/2;
    if(arr[mid][0]<= x && arr[mid][n-1] >=x) {
        r = mid;
        break;}
    else if(arr[mid][n-1]<x)  lo = mid+1;
    else hi = mid-1;  
}
bool check = false;
//TC = log(n)
if(r != -1) {lo = 0,hi = n-1;
        while(lo<=hi){int mid = lo+(hi-lo)/2;
            if(arr[r][mid] == x) {check = true;
                break;
            }
            else if(arr[r][mid] >x) hi = mid-1;
            else lo = mid+1;
        }
}
if(check) cout<<"true";
else cout<<"false";
}