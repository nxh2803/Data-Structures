#include<bits/stdc++.h>
using namespace std;


bool findbinary(int a[],int n,int first,int last,int key){
    int mid = (first+last)/2;
    if(first<=last){
        if(a[mid] == key)   return true;
        else if(a[mid] > key)   return findbinary(a,n,first,mid-1,key);
        else return findbinary(a,n,mid+1,last,key);
        
    }
    return false;
}
    
int main(){
    int a[]={10,33,55,67,84,99};
    cout<<findbinary(a,6,0,5,84);
}