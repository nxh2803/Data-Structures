// Xây dựng hàm đệ quy để tính tổng 
// giá trị tất cả các phần tử của một mảng vuông số nguyên 2 chiều (n x n).

#include<bits/stdc++.h>

using namespace std;
int sum(int ** arr, int i, int j, int size) {
    if (!i && !j) return arr[i][j]; 
    if (!j) return arr[i][j] + sum(arr, i - 1, size, size); 
    return arr[i][j] + sum(arr, i, j - 1, size); 
}
int main(){
    int n; 
    cout << "n: "; cin >>n; 
    int * a[n]; 
    for (int i = 0; i<n; i++) a[i] = new int [n]; 
    for (int i =0; i<n; i++)
        for (int j = 0; j<n; j++) a[i][j] = 1; 
    cout << sum(a, n-1, n-1, n-1) << endl;
    return 0;
}