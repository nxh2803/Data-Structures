#include<bits/stdc++.h>
using namespace std;

template <class T>
class SList{
    private:
        struct Node{
            T data;
            Node *next;
            Node(T data = T(),Node *p = NULL):data(data),next(p){};
        };

        Node *head;
        int size;

    public:
        SList():head(NULL),size(0){};
        void inSize(int s){
            size = s;
        }
        // nhập danh sách
        void inList(){
            for (int i = 0; i < size; i++){
                T e;
                cout <<"Moi ban nhap phan tu thu "<<i+1<<" : ";
                cin >> e;
                Node * v = new Node(e);

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
        //thêm vào đầu
        void addFirst(T e){
            Node *a = new Node(e,head);
            head = a;
            size++;
        }
        //thêm vào cuối
        void addLast(T e){
            Node * v = new Node(e); 
            if (!head) head = v; 
            else {
                Node *a = head; 
                for (; a->next; a = a->next);
                a->next = v; 
            }
            size++; 
        }
        //xóa phần tử đầu tiên
        void removeFirst(){
                 
        }
        void Print(){
            if (head != NULL){
                Node* node = head;
                while (node != NULL){
                    cout << node->data <<" ";
                    node = node->next;
                }
            }
        }
        //Trả tham chiếu đến biến trỏ tới i(biến next của vị trí i-1)
        Node * & getlink(int i){
            if (i<0||i>size) throw "Chi so sai\n"; 
            if (!i) return head;            // vì head trỏ tới vị trí 0
            Node * v = head; 
            for (int j = 0; j<i-1; j++)     // chạy đến khi j = i-1 thì v cũng đến nút i-1
                v = v->next; 
            return v->next;                 // trả về v->next là biến trỏ tới vị trí i
        }
        void add(int i,const T & e){
            if (i<0||i>size) throw "Chi so sai\n";  
            Node * & l = getlink(i);            // getLink trả về biến l trỏ tới vị trí i
            Node * v = new Node(e, l);       // sinh nút v chứa e và nối tới i qua l
            l = v;                                  // l trỏ tới nút mới 
            size++;                                 // cập nhật size
        }
};

int main(){
    SList<int> a;
    int s;
    cout<<"Moi ban nhap so phan tu : ";cin>>s;
    a.inSize(s);
    
    // -------------------------------------Nhập trong
    a.inList();
    a.removeFirst();
    // ----------------------------------- Nhập ngoài main
    // for (int i = 0; i < s; i++){
    //     int e;
    //     cout <<"Moi ban nhap phan tu thu "<<i+1<<" : ";
    //     cin >> e;
    //     a.addLast(e); 
    // }

    // -------------------------------------Thêm vào đầu 
    // a.addFirst(5);
    // a.addFirst(7);
    // a.addFirst(8);  

    // -------------------------------------Thêm vào cuối
    // a.addLast("adasd"); 
    // a.addLast("123");

    // -----------------------------------Thêm kiểu lấy vị trí 
    // a.add(10,3);
    a.Print();
}