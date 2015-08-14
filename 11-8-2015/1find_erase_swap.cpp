//find("string")  -- returns the psotion of the string
//erase(index,width) -- erases the string of width from specified index
//s1=swap(s2) -- swaps s1 and s2

#include<iostream>
#include<cstring>
using namespace std;
int main() {
    string s1 = "Welcome world how are you ";
    string s2("World");
    int n = s1.find("you");
    s1.erase(6,3);
    cout<<s1<<endl;
    cout<<"pos="<<n<<endl;
    cout<<s2<<endl;
    s1.swap(s2);
    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}
