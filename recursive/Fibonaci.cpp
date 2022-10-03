#include <iostream>
using namespace std;
int F(int n){
    if(n <= 2)  return 1;
    else return F(n-1)+F(n-2);
}
int main(){
    int sum=0;
    for (int i = 1; i <= 5 ; i++)
    {
        sum+= F(i);
    }
    cout<<sum;
}
//1 1 2 3 5 8
