#include<iostream>
#include<vector>
using namespace std;
//Q 4
bool search(vector<int> &nums ,int target){int n = nums.size();
    if(nums[0] == target) return true;
    else if(target<nums[0]) {
        int lo =1,hi = n-1;
        while(lo<=hi){int mid = lo+(hi-lo)/2;
        if(nums[mid] == target) return true;
        else if(nums[mid]>target && nums[mid]<nums[0]) hi = mid-1;
        else  lo = mid+1;
        }
    }
    else{int lo =1,hi = n-1;
        while(lo<=hi){int mid = lo+(hi-lo)/2;
            if(nums[mid] == target) return true;
            else if(nums[mid]<target && nums[mid] > nums[0]) lo = mid+1;
            else hi =mid-1;
        }
    }

return false;

}
int main(){// Q 4:
int n;
cout<<"Enter size of array : ";
cin>>n;
cout<<"Enter elements in array : ";
vector<int> nums(n);
for(int i =0;i<n;i++) cin>>nums[i];
cout<<"Enter the target : ";
int target;
cin>>target;
if(search(nums,target)) cout<<"true";
else cout<<"false";



}