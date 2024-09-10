#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter ch";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lowercase"<<endl;
    }
    else{
        cout<<"upper case"<<endl;
    }
    return 0;

    
}