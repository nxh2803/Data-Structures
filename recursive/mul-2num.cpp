// Xây dựng hàm đệ quy để tính tích của 2 số nguyên dương và chỉ được phép 
//sử dụng phép cộng và phép trừ.
#include<bits/stdc++.h>

using namespace std;

int mul(int a,int b){
    if(b>0) return a + mul(a,b-1);
    else return 0;
}
int main(){
    cout<<mul(3,4)<<endl;
}
