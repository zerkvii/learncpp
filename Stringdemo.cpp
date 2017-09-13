#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size]="AwesomeCpp";

    cout<<"Howdy I'm  "<<name2;
    cout<<"! Whats your name \n";
    cin>>name1;
    cout<<"well my name is  "<<name1<<" ,your name has  ";
    cout<<strlen(name1)<<" letters and is stored\n";
    cout<<"in an array of "<<sizeof(name1)<<" bytes.\n";

    return 0;
}