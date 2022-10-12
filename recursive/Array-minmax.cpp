#include<bits/stdc++.h>
using namespace std;

int min(int a[],int i){
    if(!i)  return a[i];
    return min(a[i],min(a,i-1));
}

int max(int a[],int i){
    if(!i)  return a[i];
    return max(a[i],max(a,i-1));
}

int main(){
    int a[]={5,0,1,2,4};
    
    cout<<"min : "<<min(a,4)<<endl;
    cout<<"max : "<<max(a,4)<<endl;
}