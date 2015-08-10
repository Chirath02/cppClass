//Find the position the occurance of a string
//strchr(str,'substring') - first occurance
//strrchr(str,'substring') - last occurance

#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char str[85],*ptr1,*ptr2;
    cout<<"Enter name :";
    cin.getline(str,50,'\n');
    cout<<"Name :"<<str<<endl;
    ptr1 = strchr(str,'c');
    ptr2 = strrchr(str,'c');
    cout<<ptr2<<endl;
    cout<<"Postion of 'c' from begining :"<<ptr1 - str + 1<<endl;
    cout<<"Postion of 'c' from end :"<<ptr2-str+1<<endl;
    return 0;
}
