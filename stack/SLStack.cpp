#include<bits/stdc++.h>

using namespace std;

template <class E>

class SLStack
{
    struct Node
    {
        E element;
        Node *next;
        Node (E e = E(),Node *n = 0) : element(e),next(n){}
    };
    Node *head;
    int size;
public:
    SLStack() : head(0),size(0){};

    void print()const {
        for(Node *v = head;v;v = v->next)   cout<<v->element<<"\t";
        cout<<endl;
    }
    void push(const E & e){
        Node *v = new Node(e,head);
        head = v;
        size++;
    }
    void pop(){
        if(size == 0) throw "Loi\n";
        Node* v = head;
        head = head -> next;
        delete v;
        size--;
    }
    E top() const{
        if(size == 0)   throw "Loi\n";
        return head->element;
    }

    bool isEmpty() const{return size == 0;}
    int getSize() const{return size;}
    
};


int main(){}