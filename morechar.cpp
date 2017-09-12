#include<iostream>

int main(){
    using namespace std;


    char ch='M';
    int i=ch;
    cout<<"the ASCII val of ch is   :"<<i<<endl;
    ch++;
    i=ch;
    cout<<"the ASCII val of ch is   :"<<i<<endl;
    cout<<"using cout.put(ch):  ";
    cout.put(ch);
    cout.put('!');
    cout<<endl<<"Done"<<endl;
    return 0;
}