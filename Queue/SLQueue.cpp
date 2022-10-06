#include<bits/stdc++.h>

using namespace std;

template <class E>

class SLQueue
{
    struct Node{
        E element;
        Node *next;
        Node ( E e = E(),Node * n = 0) : element(e),next(n) {}; 
    };
    Node *head;
    int size;
public:
    SLQueue() : head(0),size(0);

    void Print(){
        for (Node *v = head;v;v=v->next)    cout<<v->element<<"\t";
        cout<<endl;
    }
    void dequeue(){
        if(size == 0)   throw "Loi\n";
        Node *v = head;
        head = v -> next;
        delete v;
        size--;
    }
    void enqueue(const E & e){
        Node *v = new Node(e);
        if(head ==0){
            head = tmp;
        }
        else{
            Node *p = head;
            while (p->next != NULL){
                p = p->next;
            }
            p->next = v;
        }
        // else{
        //     Node *tmp = head;
        //     for (;tmp->next;tmp = tmp->next)
        //     tmp->next = v;
        // }
        size++;
    }
    E front() const{
        if(size == 0) throw "Loi\n";
        return head->element; 
    }
    bool isEmpty()const{    return size==0;}
    int getSize() const{    return size;}
    ~SLQueue();
};

