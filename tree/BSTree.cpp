#include <iostream> 
using namespace std; 
template <class E> 
class BSTree{
    struct BNode{
        E element; 
        BNode * left, * right; 
        BNode(E e = E(), BNode * l = 0, BNode * r = 0) : element (e), left(l), right(r){}
        bool isLeaf() const{    return !left && !right;};
        bool isInternal() const{   return !isLeaf();};
    }; 
    BNode * root; 
    int size;
    // tiền tố
    void preOrderRec(const BNode * r)const {
        if(r){
            cout<<r->element<<"\t";
            preOrderRec(r->left);
            preOrderRec(r->right);
        }
    }
    // hậu tố
    void postOrderRec(const BNode *r)const {
        if(r){
            postOrderRec(r->left);
            postOrderRec(r->right);
            cout<<r->element<<"\t";
        }
    }
    // trung tố 
    void inOrderRec(const BNode *r)const {
        if(r){
            inOrderRec(r->left);
            cout<<r->element<<"\t";
            inOrderRec(r->right);
        }
    }
    // đếm số node
    int countNodeRec(const BNode * r) const{
        if(!r)   return 0;
        return 1 + countNodeRec(r->left) + countNodeRec(r->right);
    }
    // thêm vào cây
    void addRec(BNode * & r,const E & e){
        if (!r) { r = new BNode(e);}
        else{
            if(e <= r->element)  addRec(r->left,e);
            else addRec(r->right,e);
        }
    }
    // tìm kiếm
     bool findRec (const BNode * r, const E & key) const {
        if (!r) return false; 
        if (key == r->element) return true; 
        if (key < r->element) return findRec(r->left, key); 
        return findRec(r->right, key); 
    }
    
public: 
    BSTree(): root(0), size(0){};
    void preOder()const {preOrderRec(root);}
    void postOrder()const {postOrderRec(root);}
    void inOrder()const {inOrderRec(root);}
    int height()const {return heightRec(root);}
    void add(const E e) {addRec(root,e);}
    void clear()   {clearRec(root);}
    bool find(const E key)const {return findRec(root,key);}
};

int main(){
    BSTree<int> a;
    a.add(5);
    a.add(7);
    a.add(9);
    a.add(6);
    a.add(2);
    a.inOrder();
    cout<<endl<<a.find(9);
    return 0;
}