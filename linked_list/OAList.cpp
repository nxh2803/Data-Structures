
                                //-----------Dành cho danh sách sắp xếp--------------------------

                                
#include<bits/stdc++.h>
using namespace std;

template <class E> 
class OAList{
    int maxSize, size; 
    E * a; 
public: 
    OAList(): maxSize(0), size(0), a(new E[maxSize]){}
    ~OAList() {delete [] a;}
    void print() const{
        for (int i = 0; i<size; i++) cout << a[i] << " "; 
        cout << endl; 
    }

    void add (const E & e){
        if (size==maxSize) throw "Loi\n"; 
        int i = 0; 
        for(; i<size; i++)
            if (e<=a[i]) break; 
        for (int j = size; j>i; j--) a[j]=a[j-1]; 
        a[i] = e; 
        size++;
    }

    void remove (int i){
        if (i<0||i>=size||size==0) throw "Loi\n"; 
        for (int j = i; j<size-1; j++) a[j]=a[j+1]; 
        size--; 
    }


    int replace (int i, const E & e){
        if (i<0||i>=size) throw "Loi\n"; 
        remove(i);
        return add(e); 
    }

    void getElement (int i) const {
        if (i<0||i>=size) throw "Loi\n"; 
        return a[i];
    }

    bool isEmpty() const {return size==0;}
    bool isFull() const {return size==maxSize;}
    int getSize() const{return size;}
    bool find(const E & e) const{
        for (int i = 0; i<size; i++) if (a[i] == e) return true; 
        return false; 
    }
    int search(const E & e) const{
        for (int i = 0; i<size; i++) if (a[i] == e) return i; 
        return -1; 
    }
};
int main(){}