#include<bits/stdc++.h>

using namespace std;

void selectionSort(int a[], int size){
    for (int scan = 0;  scan < size - 1; scan++){
        int imin = scan; 
        for (int j = scan + 1; j < size; j++) 
            if (a[j] < a[imin]) imin = j;
        swap (a[scan], a[imin]); 
    }         
}

int main(){
    const int n = 3;
    int a[n] = { 4, 1, -2 };
    for (int i  = 0; i < n; i++) cout << a[i] << " "; 
    cout << endl; 
    selectionSort(a, 3); 
    for (int i  = 0; i<n; i++) cout << a[i] << " "; 
    cout << endl; 
    return 0; 
}