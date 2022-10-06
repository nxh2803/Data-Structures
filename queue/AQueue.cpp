#include<bits/stdc++.h>

using namespace std;

template <class E>
class AQueue
{
private:
    int maxSize,size;
    int front,rear;
    E *arr;
public:
    AQueue(int maxSize = 100) : maxSize(maxSize),size(0),front(0),rear(maxSize-1),arr(new E[maxSize]){};
    // void Print()const {
    //     if(front <= rear){
    //         for (int i = front; i < rear ; i++) cout<<a[i]<<"\t";
    //         cout<<endl;
    //     }
    //     else{
    //         int i = front,max = maxSize;
    //         while (i < max){
    //             cout<<a[i]<<"\t";
    //             i++;
    //             if(i == max){
    //                 i=0;
    //                 max = rear + 1;
    //             }
    //         }
    //     }
    // }
    
    void Print()const {
        for (int i = front; i < (front + size)%maxSize; i++)    cout<<a[i]<<"\t";
        cout<<endl;
    }

    void enqueue(E & e){
        if(size == maxSize) throw "Loi\n";   
        rear = (rear + 1) % maxSize;
        a[rear] = e;
        size++;
    }

    void dequeue(const E & e){
        if(size == 0) throw "Loi\n";
        f = (f+1)%maxSize;
        size++;
    }
    void Front() const{
        if(size == 0)   throw "Loi\n";
        return a[front];
    };
    bool isEmpty(){
        return size==0;
    }
    bool isFull(){
        return size == maxSize;
    }
    int getSize(){
        return size;
    }
    ~AQueue(){  delete []a;};
};

int main(){
    AQueue<int> a;
}