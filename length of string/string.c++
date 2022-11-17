#include <iostream>
#include <string>
using namespace std;

int main(){
    string test;
    cin>>test;
    int i=0;
    int length=0;
    while (test[i]!='\0')
    {
        length+=1;
        i++;
    }

    cout<<length;
    
}