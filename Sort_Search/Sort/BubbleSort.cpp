#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int a[], int size){
    bool swapped; 
    do {
        swapped = false;
        for (int i = 0; i < size - 1; i++) 
            if (a[i] > a[i + 1]) {
                swap (a[i], a[i+1]); 
                swapped = true;
            }
         size--; 
    }while (swapped);
} 

void bubbleSort1(int a[], int size){
    for (int j = 0; j < size - 1; j++)
        for (int i = 0; i < size - j - 1; i++) 
            if (a[i] > a[i + 1]) swap (a[i], a[i+1]);
}

int main(){
    const int n = 3;
    int a[n] = { 4, 1, -2 };
    for (int i  = 0; i < n; i++) cout << a[i] << " "; 
    cout << endl; 
    bubbleSort1(a, 3); 
    for (int i  = 0; i<n; i++) cout << a[i] << " "; 
    cout << endl; 
    return 0; 
}