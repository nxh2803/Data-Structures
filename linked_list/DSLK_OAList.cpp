#include<bits/stdc++.h>
using namespace std;


template <class E> 
class SList{
    struct Node{
        E element; 
        Node * next; 
        Node (E e = E(), Node * n = 0): element(e), next(n){}
    }; 
    Node * head; 
    int size; 
public: 
    SList(): head(0), size(0){}
    bool isFull() const{return false;}
    bool isEmpty() const{return size==0;}

    void inList(){
        for (int i = 0; i < size; i++){
            E e;
            cout<<"Moi ban nhap phan tu thu "<<i+1<<" : ";
            cin>>e;
            Node *v = new Node(e);
            if(i==0){
                head = v;
            }
            else{
                Node *a = head; 
                for (; a->next; a = a->next);
                a->next = v;
            }
        }
    }
    void print() const{
        for (Node * v = head; v; v= v->next) cout << v->element << " "; 
        cout << endl; 
    }

    void setSize(int s){
        size = s;
    }

    Node * & getLink(int i) {
        if (i<0||i>size) throw "Chi so sai\n"; 
        if (!i) return head;            
        Node * v = head; 
        for (int j = 0; j<i-1; j++)    
            v = v->next; 
        return v->next; 
    }
///////////////////////
    int add (const E & e){
        int i = 0; 
        Node * p = head; 
        for (; i<size; p=p->next, i++)
            if (e <= p->element) break; 
        Node * & prev = getLink(i); 
        Node * v = new Node(e, prev);  
        prev = v;  
        size++; 
        return i; 
    }
    int replace (int i, E e){
        if (i<0||i>=size) throw "Loi\n"; 
        remove(i); 
        return add(e); 
    }
//////////////////////
    void remove(int i){
        if (i<0||i>=size) throw "Loi\n"; 
        Node * & p = getLink(i); 
        Node * tmp = p; 
        p = p->next; 
        delete tmp; 
        size--; 
    }
    void clear(){
        while(head) remove(0); 
    }
    void clear1(){
        Node* v = head; 
        while(head){
            Node* tmp = v; 
            v=v->next; 
            delete tmp; 
        }
        size = 0; 
    }

    E getElement (int i){
        if (i<0||i>=size) throw "Loi\n"; 
        return getLink(i)->element; 
    }
    bool find (const E & e){
        for (int i = 0; i<size; i++) 
            if (getLink(i)->element == e) return true; 
        return false; 
    }
    bool find1 (const E & e) const{
        for (Node * v = head; v; v= v->next)
            if (v->element == e) return true;  
        return false; 
    }
}; 
int main(){
    SList<int> s;
    int size;
    cout<<"Moi ban nhap so phan tu : ";
    cin>>size;
    s.setSize(size); 
    s.inList();
    // s.add(6);
    s.replace(3,7);
    s.print();
    return 0; 
}