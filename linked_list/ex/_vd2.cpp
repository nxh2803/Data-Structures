#include<bits/stdc++.h>
using namespace std;
template <class T>
struct Node{
    T data;
    Node<T> *Next;
    Node (T data = T(),Node<T> *p = NULL) : data(data),Next(p) {};
};

template <class T>
class SList{
    Node<T> *Head;
    int size;
    public:
        SList():Head(NULL),size(0){};
        void add(int value){
            Node<T> *v = new Node<T>(value,Head);
            Head = v;
            size++;
        };
        void addLast (int e){
            Node<T> *v = new Node<T>(e);
            if (!Head) Head = v;
            else{
                Node<T> * i = Head;
                for (; i->Next; i = i->Next);
                i->Next = v;
            }
        size++;
        };
        void print(){
            if(Head != NULL){
                Node<T> *a = Head;
                while (a != NULL){
                    cout << a ->data<<"\t";
                    a = a->Next;
                }
            }
        }
        
};

int main(){
    SList<int> a;
    a.add(5);
    a.add(9);
    a.print();
}