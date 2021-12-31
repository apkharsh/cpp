
// input 8,9,10,2,5,6
// output 10,6



// input  10,8,6,5,3,2
// output 10

// Constraint - complexity shoudnt be greater than O(n);
// Worst case should be O(n);


// findpeak elemnent karke ejd

#include <iostream>
#include<algorithm>
using namespace std;
#include<vector>
int findpeak(vector<int>&v){
    if(v.size()==0){
        return -1;
    }
     auto p=adjacent_find(v.begin(),v.end(),greater<int>());
    if(v.end()==p){
        --p;
    }
    return *p;
}
int fpe(vector<int>&v,int low,int high, int n){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    
    if( (mid==0 || v[mid-1]<=v[mid] ) && (mid==n-1 || v[mid+1]<=v[mid])){
        return mid;
    }
    if(mid-1 >=0 && v[mid-1]>v[mid]){
        return fpe(v,low,mid-1,n);
    }
    
    return fpe(v,mid+1,high,n);
}
int fpe(vector<int>&v,int n){
    int ind=fpe(v,0,n-1,n);
    return v[ind];
}


int main()
{
    
   vector<int>v;
   v.push_back(1);
   
     v.push_back(5);
      v.push_back(0);
       v.push_back(4);
        v.push_back(7);
         v.push_back(9);
          v.push_back(3);
         
   cout<<fpe(v,v.size());
    

    return 0;
}