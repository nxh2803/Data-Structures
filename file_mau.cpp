#include<bits/stdc++.h>
using namespace std;

template<class E>
// class List{
//     struct Node{
//         E element;
//         Node *next;
//         Node (E e = E(),Node *n = NULL):element(e),next(n){};
//     };
//     Node *head;
//     int size;
// public:
//     List():head(NULL),size(0){};
//     void Print(){
//         for(Node *v = head;v;v=v->next){cout<<v->element<<" ";}
//         cout<<endl;
//     }
//     bool isEmpty(){return size==0;}
//     int getSize(){return size;}
//     Node * & getLink(int i){
//         if(i < 0 || i > size)   throw "Loi";
//         if(!i) return head;
//         Node *v = head;
//         for (int j = 0; j < i - 1; j++){ v = v -> next;}
//         return v-> next;
//     }
//     void add(int i, const E & e){
//         Node * & p = getLink(i);
//         Node *v = new Node(e,p);
//         p = v;
//         size++;
//     }
//     void remove(int i){
//         if(i < 0 || i >= size)   throw "Loi";
//         Node * & p = getLink(i);
//         Node *v = p;
//         p = p->next;
//         delete v;
//         size--;
//     }
//     E getElement(int i){
//         if(i < 0 || i >= size) throw "Loi";
//         if(!i)  return head->element;
//         return getLink(i)->element;
//     }
//     void replace(int i, const E & e){
//         if(i < 0 || i >= size) throw "Loi";
//         if(!i)  head->element = e;
//         else{getLink(i)->element = e;}
//     }
//     ~List(){while (head){remove(0);}}
// };
// int main(){
//     List<int> a;
//     a.add(0,99);
//     a.add(1,9);
//     a.add(2,5);
//     a.add(3,34);
//     a.Print();
//     // a.remove(2);
//     // a.Print();
//     // cout<<a.getElement(2)<<endl;
//     a.replace(2,10000);
//     a.Print();
//     a.~List();
//     cout<<a.isEmpty()<<endl;
// }

// class Stack{
//     struct Node{
//         E element;
//         Node *next;
//         Node(E e = E(),Node *n = NULL):element(e),next(n){};
//     };
//     Node *head;
//     int size;
// public:
//     Stack():head(NULL),size(0){};
//     ~Stack(){while (head){pop();}}
//     void print(){
//         for(Node *v = head;v;v=v->next){cout<<v->element<<" ";}
//         cout<<endl;
//     } 
//     void push(const E & e){
//         Node * v = new Node(e,head);
//         head  = v;
//         size++;
//     }
//     void pop(){
//         if(!head) throw "Loi";
//         Node *v = head;
//         head = head -> next;
//         delete v;
//         size--;
//     }
//     E top(){
//         if(!head) throw "Loi";
//         return head->element;
//     }
//     bool isEmpty(){return size == 0;}
//     int getSize(){return size;}
// };
// int main(){
//     Stack<int> a;
//     a.push(2);
//     a.push(3);
//     a.push(4);
//     a.push(5);
//     cout<<a.isEmpty()<<endl;
//     a.print();
// }

// class VStack{
// private:
//     vector<E> a;
// public:
//     VStack(/* args */){};
//     ~VStack(){a.clear();};
//     void print(){
//         for (int i = 0; i < a.size(); i++){cout<<a[i]<<" ";}
//         cout<<endl;
//     }
//     void push(const E & e){a.push_back(e);}
//     void pop(){
//         if(a.empty()) throw "Loi\n";
//         a.pop_back();}
//     E top(){
//         if(a.empty()) throw "Loi\n";
//         return a.back();}
//     bool isEmpty(){return a.empty();}
//     int getSize(){return a.size();}
// };
// int main(){
//     VStack<int> a;
//     a.push(4);
//     a.push(5);
//     a.push(6);
//     a.push(7);
//     cout<<a.top()<<endl;
//     a.print();
// }

// class Queue{
//     struct Node{
//         E element;
//         Node *next;
//         Node(E e = E(),Node *n = NULL):element(e),next(n){};
//     };
//     Node *head;
//     int size;
// public:
//     Queue():head(NULL),size(0){};
//     ~Queue(){while (head){dequeue();}}
//     void print(){
//         for(Node *v = head;v;v=v->next){cout<<v->element<<" ";}
//         cout<<endl;
//     }
//     void enqueue(const E & e){
//         Node *tmp = new Node(e);
//         if(!head){  head = tmp;}
//         else{
//             Node *v = head;
//             for(;v->next;v = v-> next);
//             v -> next = tmp;
//         }
//         size++;
//     }
//     void dequeue(){
//         if(!head) throw "Loi";
//         Node *v = head;
//         head = head -> next;
//         delete v;
//         size--;
//     }
//     E front(){
//         if(!head) throw "Loi";
//         return head->element;
//     }
//     bool isEmpty(){return size == 0;}
//     int getSize(){return size;}
// };
// int main(){
//     Queue<int> a;
//     a.enqueue(2);
//     a.enqueue(3);
//     a.enqueue(4);
//     a.print();
//     cout<<a.front();
// }

// class VQueue{
// private:
//     vector<E> a;
// public:
//     VQueue(/* args */){};
//     ~VQueue(){a.clear();};
//     void print(){
//         for (int i = 0; i < a.size(); i++){cout<<a[i]<<" ";}
//         cout<<endl;
//     }
//     void enqueue(const E & e){a.push_back(e);}
//     void dequeue(){
//         if(a.empty()) throw "Loi\n";
//         a.erase(a.begin());}
//     E front(){
//         if(a.empty()) throw "Loi\n";
//         return a.front();}
//     bool isEmpty(){return a.empty();}
//     int getSize(){return a.size();}
// };
// int main(){
//     VQueue<int> a;
//     a.enqueue(4);
//     a.enqueue(5);
//     a.enqueue(6);
//     a.enqueue(7);
//     cout<<a.front()<<endl;
//     a.print();
//     a.dequeue();a.print();
// }

// class BSTree{
//     struct Node{
//         E element; 
//         Node * left, *right;
//         Node(E e = E(), Node * l = 0, Node * r = 0): element(e), left(l), right(r){}
//         bool isLeaf() const {return (!left && !right);}
//         bool isInternal() const{return (left||right);}
//     };
//     Node * root; 
//     Node * & searchRec(Node * & r, const E & e){
//         if (!r) {
//             cout << "Khong tim thay\n"; 
//             return r;
//         } 
//         if (r->element == e) return r; 
//         if (e < r->element) return searchRec(r->left,e); 
//         return searchRec(r->right, e); 
//     }
//     void addRec(Node * & r, const E& e){ 
//         if (!r) r = new Node (e); 
//         else if (e==r->element) cout << "Da co khoa, khong the them\n";
//         else if (e<r->element) addRec(r->left, e); 
//         else addRec(r->right, e);
//     }
//     void clearRec(Node * & v){   // xoá cả cây đệ quy
//         if (v){
//             clearRec(v->left); 
//             clearRec(v->right); 
//             delete v; 
//             v = 0; 
//         }
//     }
//     void preOrderRec(const Node * v) const{    //duyệt tiền tố
//         if (v){
//             cout << v->element << " "; 
//             preOrderRec(v->left); 
//             preOrderRec(v->right);
//         }
//     }
//     void postOrderRec(const Node * v) const{   //duyệt hậu tố
//         if (v){
//             postOrderRec(v->left); 
//             postOrderRec(v->right);
//             cout << v->element << " "; 
//         }
//     }
//     void inOrderRec(const Node * v) const{     //duyệt trung tố
//         if (v){
//             inOrderRec(v->left); 
//             cout << v->element << " ";
//             inOrderRec(v->right);
//         }
//     }
//     int nodeRec(const Node * v) const{    // đếm nút
//         if (v) return 1 + nodeRec (v->left) + nodeRec(v->right);
//         return 0; 
//     }
//     int internalRec(const Node * v) const{ // đếm nút nội
//         if (v)  
//             if (v->isInternal()) 
//                 return 1 + internalRec (v->left) + internalRec(v->right);
//         return 0; 
//     }
//     int leafRec(const Node * v) const{   // đếm nút lá
//         if (v){return v->isLeaf() + leafRec (v->left) + leafRec(v->right);}
//         return 0; 
//     }
//     int heightRec(const Node * v) const{ // đếm chiều cao của một nút, tương đương chiều cao của cây nhận nút đó làm gốc
//         if (v){
//             if (v->isLeaf()) return 0;
//             return 1 + max (heightRec (v->left),heightRec(v->right));
//         }
//         return -1; 
//     }
// public: 
//     BSTree(): root(0) {} 
//     bool isEmpty() const {return root==0;}
//     int getSize() const {return countNode();}
// 
//     void preOrder() const { preOrderRec(root); cout << endl; }
//     void postOrder() const { postOrderRec(root);cout << endl; }
//     void inOrder() const { inOrderRec(root); cout << endl;}
//     int countNode() const {return nodeRec(root);}
// 
//     int countInternal() const {return internalRec(root);}
//     int countSingleChild() const {return singleChildNodeRec(root);}
//     int countLeaf() const {return leafRec(root);}
//     int height() const {return heightRec(root); }
// 
//     Node * & search(const E & e){return searchRec(this->root, e); }
//     void add (const E & e) { addRec(root, e);} 
//     void clear() {clearRec(root);}
//     ~BSTree() {clear();}
// }; 
// int main(){
//     BSTree<int> t; 
//     t.add(1); 
//     t.add(-1);
//     t.add(5);
//     t.add(3);
//     t.add(2);
//     t.inOrder();
//     t.clear(); t.inOrder(); 
// }
