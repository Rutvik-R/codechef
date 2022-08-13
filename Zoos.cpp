#include <iostream>
#include <string>
using namespace std;

int main(){
    int x ,y ;
    string s ;
    cin>>s;
    x = s.find_last_of('z');
    if ((x+1)*3 == s.length())
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0 ;
}