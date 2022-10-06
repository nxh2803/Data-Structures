#include<bits/stdc++.h>

using namespace std;

template <class E>

class AStack
{
private:
    int maxSize,size;
    E *a;
public:
    AStack(int max = 100) : maxSize(max),size(0),a(new E[maxSize]){};
    ~AStack() {delete []a;}
    void print()const{
        for (int i = 0; i < size; i++)  cout<<a[i]<<"\t";
        cout<<endl;
    }
    void push(const E & e){
        if(size ==  maxSize) throw "Loi\n";
        a[size++] = e;
    }
    void pop(){
        if(size == 0)   throw "Loi\n";
        size--;
    }
    void top()const{
        if(size == 0)   throw "Loi\n";
        return a[size-1];
    }
    bool isFull() const {   return size == maxSize;}
    void clear(){size = 0;}

    AStack(const AStack<E> &b){
        maxSize = b.maxSize;
        size = b.size;
        a = new Arr[maxSize];
        for (int i = 0; i < size; i++)  a[i] = b.a[i];
    }
    AStack<E> operator=(const AStack<E> & r){
        maxSize = r.maxSize;
        size = r.size;
        delete []a;
        a = new Arr[maxSize];
        for (int i = 0; i < size; i++)  a[i] = r.a[i];
        return *this;
    }
};
int main(){
    
}