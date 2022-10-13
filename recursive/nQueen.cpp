//=============================== BÀI TOÁN N CON HẬU =============================
// Cần xếp 8 con hậu trên bàn cờ 8x8 sao cho chúng không ăn được nhau 
// - Nghĩa là không có 2 con hậu nào trên cùng đường dọc, ngang, chéo
// - Có thể tổng quát hoá thành xếp n con hậu trên bàn cờ nxn
 
#include <iostream> 
#include <cstdlib> // để có abs
using namespace std; 
 
class NQueens{
 int * queens; 
 int n; 
public: 
 NQueens(int n): n(n){
 queens = new int[n]; 
 }
 ~NQueens(){
 delete[]queens;
 queens = 0; 
 }
 void print() const; 
 bool isOk(int, int) const; 
 void placeQueen(int); 
}; 
 
void NQueens::print() const{
 for (int i = 0; i<n; i++) cout << queens[i] << " "; 
 cout << endl; 
}; 
bool NQueens::isOk(int k, int i) const{
 for (int j = 0; j<k; j++)
 if (queens[j]==i||abs(queens[j]-i) == abs(j-k))return false;
 return true; 
}; 
void NQueens::placeQueen(int k){
 if (k==n) {
 print(); 
 return;
 }
 for (int i = 0; i<n; i++)
 {
 if (isOk(k,i)){
 queens[k]=i; 
 placeQueen(k+1); 
 } 
 }
};
 
int main(){
 NQueens game(8); 
 game.placeQueen(0); 
 
}