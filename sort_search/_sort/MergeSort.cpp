// sắp xếp trộn
#include<bits/stdc++.h>
using namespace std;

void combine(int a[],int b[],int c[],int m,int n){
    int i,j,k = i = j = 0;
    while (i < m && j < n){
        a[k] = (b[i] < c[j]) ? b[i]:c[j];
        (b[i] < c[j]) ? i++ : j++;
        k++;
    }
    for (; i < m; i++,k++)  a[k] = b[i];
    for (; j < n; j++,k++)  a[k] = c[j];
}
void mergeSort (int a[],int n){
    if(n<2) return;
    int half = n/2;
    int b[half],c[n-half];
    for (int i = 0; i < half; i++)  b[i] = a[i];
    for (int i = half; i < n; i++)  c[i-half] = a[i];
    mergeSort (b,half);
    mergeSort (c,n-half);
    combine (a,b,c,half,n-half);
}
//  CÁCH 2 :
// void merge (int a[], int l, int m, int r){
//     vector <int> x (a + l, a + m + 1);
//     vector <int> y (a + m + 1, a + r + 1);
//     int i = 0, j = 0;
//     while(i < x.size() && j < y.size()){
//         if(x[i] <= y[j]){
//             a[l++] = x[i];
//             ++i;
//         }
//         else{
//             a[l++] = y[j];
//             ++j;
//         }
//     }
//     while(i < x.size()){
//         a[l++] = x[i];
//         ++i;
//     }
//     while(j < y.size()){
//         a[l++] = y[j];
//         ++j;
//     }
// }
// void merge_sort(int a[],int l ,int r){
//     if(l >= r)  return;
//     int m = (l+r)/2;
//     merge_sort (a, l, m);
//     merge_sort(a, m + 1, r);
//     merge(a, l, m,r);
// }

int main(){
    int n = 5;
    int a[n]={10,9,8,7,6};
    // merge_sort(a,0,n);
    for (int i = 0; i < n; i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    mergeSort(a,n);
    for (int i = 0; i < n; i++){
        cout<<a[i]<<"\t";
    }
}