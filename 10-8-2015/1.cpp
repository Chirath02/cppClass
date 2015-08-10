//Manupulating Strings
//cin.getline(string,noOfCharecters,Delimiter);
//
#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char str[85];
    cout<<"Enter name :";
    cin.getline(str,50,'\n');
    cout<<"Name :"<<str<<endl;
    return 0;
}
