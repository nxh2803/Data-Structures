/*
    Mô hình chia để trị : 
    -chọn phần tử đầu tiên làm chốt
    -chọn phần tử cuối cùng làm chốt
    -chọn phần tử ở giữa dãy làm chốt
    -chọn phần tử ngẫu nhiên làm chốt

    -Thủ tục Partition(phân đoạn) có hai nhiệm vụ chính:
        1. Định vị chính xác vị trí của chốt trong dãy nếu được sắp xếp
        2. Chia dãy ban đầu thành hai dãy con:
            • Dãy con ở phía trước phần tử chốt gồm các phần tử nhỏ hơn hoặc bằng chốt.
            • Dãy ở phía sau chốt có giá trị lớn hơn chốt.
*/
#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int first, int last) {    // bước phân hoạch thành 2 tập con
    // swap(list[first], list[(first + last) / 2]); // nếu chọn pivot là phần tử ở giữa
    int pivot = a[first]; 
    int index = first; 
    for (int i = first + 1; i <= last; i++) 
        if (a[i] <= pivot){
            index++;
            swap(a[index], a[i]);
        }
    swap(a[first], a[index]);
    return index;
}
void Quicksort(int *a, int first, int last){
    if(first<last){
        int pivot = partition(a, first, last);
        Quicksort(a, first, pivot-1);
        Quicksort(a, pivot+1, last);
    }
}
int partition2(int a[],int l,int r){
    int pivot = a[l];
    int i = l - 1, j = r + 1;
    while (1){
        do{
            ++i;
        } while (a[i] < pivot);
        do{
            --j;
        } while (a[j] > pivot);
        if(i < j)   swap(a[i],a[j]);
        else return j;
    } 
}
void Quicksort2(int *a,int l,int r){
    if(l >= r)  return;
    int p = partition2(a,l,r);
    Quicksort2(a,l,p);
    Quicksort2(a,p+1,r);

}
int main(){
    int a[]={4,7,2,8,1};
    Quicksort2(a,0,4);
    for (int i = 0; i < 5; i++){
        cout<<a[i]<<"\t";
    }
}