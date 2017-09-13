#include<iostream>

int main(){
    using namespace std;

    const int size1 =20;
    char name[size1];
    char dessert[size1];

    cout<<"your name\n";
    cin.getline(name,size1);
    cout<<"your favorite food\n";
    cin.getline(dessert,size1);
    cout<<"name: "<<name<<",food:   "<<dessert<<endl;
    return 0;
}