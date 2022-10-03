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
    SList(): head(0), size(0){};
    void setSize(int s){
        size = s;
    }
    void inList(){
        for (int i = 0; i < size; i++){
            E e;
            cout<<"Moi ban nhap phan tu thu "<<i+1<<" : ";
            cin>>e;
            Node *v = new Node(e);
            if(i==0)    head = v;
            else{
                    Node *a = head; 
                    for (; a->next; a = a->next);
                    a->next = v;
            }
        }
    }
//     kiểm tra đầy
    bool isFull() const{
        return false;
    }
// kiểm tra rỗng
    bool isEmpty() const{
        return size==0;
    }
// trả về kích thước
    int getSize() const{
        return size;
    }
// in ra cả danh sách
    void Print() const{
        if(head != NULL){
            Node *node = head;
            while (node != NULL){
                cout<<node->element<<"\t";
                node = node ->next;
            }
        }
    }

    Node * & getLink(int i) {
        if (i<0||i>size) throw "Chi so sai\n"; 
        if (!i) return head;            
        Node * v = head; 
        for (int j = 0; j<i-1; j++)    
            v = v->next; 
        return v->next; 
    }

// them tai vi tri i
    void addE(int i,const E &e){
        if (i<0||i>size) throw "Chi so sai\n"; 
        Node * & l = getLink(i);
        Node * v = new Node(e,l);
        l = v;
        size++;
    }

// xoa tai vitri i
    void removeE(int i){
        Node * & p = getLink(i);
        Node * v = p;
        p = p->next;
        delete v;
        size--;
    }

// xoa danh sach
    void clear(){
        while (head)    remove(0);
    }
    void clear1(){
        Node *v=head;
        while (head)
        {
            Node *tmp = v;
            v = v->next;
            delete tmp;
        }
        size = 0;
    }
// replace (int i, E e)
    void replace(int i,E e){
        if(i<0||i>=size) throw "Loi\n";
        getLink(i)-> element = e;
    }
// hàm getElement (int i)
    E getElement(int i){
        if(i<0||i>=size) throw "Loi\n";
        return getLink(i)-> element;
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
    SList<int> a;
    int size;
    cin>>size;
    a.setSize(size);
    a.inList();
    // a.addE(3,100);
    // a.removeE(3);
    a.replace(3,100);
    a.Print();
    cout<<endl<<a.getElement(2)<<endl;
}