#include<bits/stdc++.h> 
using namespace std; 

template <class E> 
class BSTree{
    struct Node{
        E element; 
        Node * left, *right;
        Node(E e = E(), Node * l = 0, Node * r = 0)
        : element(e), left(l), right(r){}
        bool isLeaf() const {return (!left&&!right);}
        bool isInternal() const{return (left||right);}
    };
    Node<E> * root; 
    Node<E> * & searchRec(Node<E> * & r, const E & e){
        if (!r) {
            cout << "Khong tim thay\n"; 
            return r;
        } 
        if (r->element==e) return r; 
        if (e < r->element) return searchRec(r->left,e); 
        return searchRec(r->right, e); 
    }
    void addRec(Node<E> * & r, const E& e){ 
        if (!r) r = new Node<E> (e); 
        else if (e==r->element) cout << "Da co khoa, khong the them\n";
        else if (e<r->element) addRec(r->left, e); 
        else addRec(r->right, e);
    }
    void clearRec(Node<E> * & v){   // xoá cả cây đệ quy
        if (v){
            clearRec(v->left); 
            clearRec(v->right); 
            delete v; 
            v = 0; 
        }
    }
    void preOrderRec(const Node<E> * v) const{    //duyệt tiền tố
        if (v){
            cout << v->element << " "; 
            preOrderRec(v->left); 
            preOrderRec(v->right);
        }
    }
    void postOrderRec(const Node<E> * v) const{   //duyệt hậu tố
        if (v){
            postOrderRec(v->left); 
            postOrderRec(v->right);
            cout << v->element << " "; 
        }
    }
    void inOrderRec(const Node<E> * v) const{     //duyệt trung tố
        if (v){
            inOrderRec(v->left); 
            cout << v->element << " ";
            inOrderRec(v->right);
        }
    }
    int nodeRec(const Node<E> * v) const{    // đếm nút
        if (v) return 1 + nodeRec (v->left) + nodeRec(v->right);
        return 0; 
    }
    int internalRec(const Node<E> * v) const{ // đếm nút nội
        if (v)  
            if (v->isInternal()) 
                return 1 + internalRec (v->left) + internalRec(v->right);
        return 0; 
    }
    int leafRec(const Node<E> * v) const{   // đếm nút lá
        if (v)
        {
            return v->isLeaf() + leafRec (v->left) + leafRec(v->right);
        }
        return 0; 
    }
    int heightRec(const Node<E> * v) const{ // đếm chiều cao của một nút, tương đương chiều cao của cây nhận nút đó làm gốc
        if (v)
        {
            if (v->isLeaf()) return 0;
            return 1 + max (heightRec (v->left),heightRec(v->right));
        }
        return -1; 
    }
public: 
    BSTree(): root(0) {} 
    bool isEmpty() const {return root==0;}
    int getSize() const {return countNode();}
    void preOrder() const { preOrderRec(root); cout << endl; }
    void postOrder() const { postOrderRec(root);cout << endl; }
    void inOrder() const { inOrderRec(root); cout << endl;}
    int countNode() const {return nodeRec(root);}
    int countInternal() const {return internalRec(root);}
    int countSingleChild() const {return singleChildNodeRec(root);}
    int countLeaf() const {return leafRec(root);}
    int height() const {return heightRec(root); }
    Node<E> * & search(const E & e){return searchRec(this->root, e); }
    virtual void add (const E& e) { addRec(root, e);} 
    void clear() {clearRec(root);}
    virtual ~BSTree() {clear();}
}; 
int main(){
    BSTree<int> t; 
    t.add(1); 
    t.add(-1);
    t.add(5);
    t.add(3);
    t.add(2);
    t.inOrder(); 
    // t.searchRemove (1); 
    // t.inOrder(); 
    // t.searchRemove(5);
    // t.inOrder(); 
    // test thêm hàm cũ từ BTree
    // t.preOrder();
    // t.postOrder(); 
    // cout << "Size: " << t.getSize() << endl
    // << "Node: " << t.countNode() << endl 
    // << "Internal: " << t.countInternal() << endl
    // << "Single child internal: " << t.countSingleChild() << endl
    // << "Leaf: " << t.countLeaf() << endl
    // << "Left leaf: " << t.countLeftLeaf() << endl
    // << "Right leaf: " << t.countRightLeaf() << endl
    // << "Height: " << t.height() << endl;
    // BSTree<int> t1 = t, t2; 
    // t2=t1; 
    // t1.inOrder(); 
    // t2.inOrder(); 
    t.clear(); t.inOrder(); 
    // cout << "Empty: " << t.isEmpty() << endl; 
}