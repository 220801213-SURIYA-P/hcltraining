#include <iostream>
#include <regex>
using namespace std;

int main(){
string s="12345";
regex r("^[0-9]+$");
cout<<regex_match(s,r)<<endl;
}