#include<bits/stdc++.h>
using namespace std;

string check_palindrome(string &s,int i,int j){
    if(i<j){
        if(s[i] == s[j]){
            return check_palindrome(s,i+1,j-1);
        }
        else return s="1234";
    }
}
int main(){
    string s;
    getline(cin,s);
    // racecar
    // able was i ere i saw elba
    check_palindrome(s,0,s.size()-1);
    cout<<s;
}