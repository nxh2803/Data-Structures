#include<iostream>
using namespace std;
void reverse(string &s, int i, int j){
    if(i<j){
        swap(s[i],s[j]);
        reverse(s, i+1, j-1);
    }
}
int main(){
    string s="pots&pans";
    cout<<s<<endl;
    reverse(s, 0, 8);
    cout<<s;
}