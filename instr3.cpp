#include<iostream>

int main(){
    using namespace std;

    const int size1 =20;
    char name[size1];
    char dessert[size1];

    cout<<"your name\n";
    cin.get(name,size1).get();
    cout<<"your favorite food\n";
    cin.get(dessert,size1);
    cout<<"name: "<<name<<",food:   "<<dessert<<endl;
    return 0;
}