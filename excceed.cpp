#include<iostream>

#define ZERO 0;

#include<climits>

int main(){
    using namespace std;
    short sam=SHRT_MAX;
    unsigned short sue=sam;

    cout<<"Sam has  "<<sam<<"   dollars and Sue has"<<sue;
    cout<<" dollars deposit"<<endl
    <<"Add $1 to each acount"<<endl<<"  Now";
    sam++;
    sue++;
    cout<<"Sam has  "<<sam<<"   dollars and Sue has"<<sue;
    cout<<" dollars deposit\nPoor Sam!"<<endl;

    return 0;
    
}