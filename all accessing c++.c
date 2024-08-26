// the at()function  to accessing the first, last , new, original ,modify  characters

#include <iostream>
#include<string>

using namespace std;

int main(){
    string mystring = "Hello";
    cout<< "original string :" << mystring << "\n";
    cout << "first character :" << mystring.at(0)<< "\n";
    cout << " second character : " << mystring.at(1) << "\n";
    cout << "last character of the string is :" << mystring.at(mystring.length()-1)<< "\n";
    mystring.at(0)='L';
    cout << "changed string :"<< mystring ;
    return 0;
}
