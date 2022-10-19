#include<bits/stdc++.h>
using namespace std;

template <class E> 
class AList{
    int maxSize, size; 
    E * a; 
public: 
    AList(): maxSize(0), size(0), a(new E[maxSize]){}
    ~AList() {delete [] a;}
// in danh sách
    void print() const{
        for (int i = 0; i<size; i++) cout << a[i] << " "; 
        cout << endl; 
    }
// thêm phần tử tại vị trí i 
    int add (int i, const E & e){
        if (i<0||i>size) throw "Loi\n"; 
        for (int j = size; j>i; j--) a[j]=a[j-1]; 
        a[i] = e; 
        size++;
        return i;
    }
// xóa phần tử tại vị trí i 
    void remove (int i){
        if (i<0||i>=size||size==0) throw "Loi\n"; 
        for (int j = i; j<size-1; j++) a[j]=a[j+1]; 
        size--; 
    }
// set size 
    void setSize(int n){
        size = n;
    };
// thay đổi giá trị tại vị trí i 
    int replace (int i, const E & e){
        if (i<0||i>=size||size==0) throw "Loi\n"; 
        a[i] = e; 
    }
// kiểm tra đầy 
    bool isFull()const{ return size==maxSize;};
// kiểm tra rỗng
    bool isEmpty()const{ return size == 0;};
// tìm kiếm giá trị e
    bool find(const E & e) const{
        for (int i = 0; i<size; i++) if (a[i] == e) return true; 
        return false; 
    }
// tìm giá trị , trả về vị trí
    int search(const E & e) const{
        for (int i = 0; i<size; i++) if (a[i] == e) return i; 
        return -1; 
    }
// trả về giá trị tại i
    void getElement (int i) const {
        if (i<0||i>=size) throw "Loi\n"; 
        return a[i];
    }
// không tạo bản sao,copy nông, copy sâu
    // AList(const AList<T> & r){
    //     maxSize = r.maxSize;
    //     size = r.size;
    //     a = new T[maxSize];
    //     for(int i = 0;i < size; i++){
    //         a[i] = r.a[i];
    //     }
    // };
// sap xep 
    void selectionSort(){
        for (int i = 0;  i < size - 1; i++){
            int imin = i; 
            for (int j = i + 1; j < size; j++) 
                if (a[j] < a[imin]) imin = j;
            swap (a[i], a[imin]); 
        }         
    }
    void bubbleSort(){
        for (int j = 0; j < size - 1; j++)
            for (int i = 0; i < size - j - 1; i++) 
                if (a[i] > a[i + 1]) swap (a[i], a[i+1]);
    }
};
int main(){
    AList<int> a;
    a.add(0,100);
    a.add(1,50);
    a.add(2,40);
    a.add(3,30);
    a.print();
    // a.selectionSort();
    a.bubbleSort();
    a.print();
}