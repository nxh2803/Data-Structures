#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[],int n){
    for (int i = 1; i < n; i++){
        int j = i;
        while (j > 0 && a[j-1]>a[j]){
            swap(a[j-1],a[j]);
            j--;
        }
    }
}

int main(){
    int a[] = {3,6,1,8,2,5};
    insertionSort(a,6);
    for (int i = 0; i < 6; i++){
        cout<<a[i]<<"\t";
    }
    
}