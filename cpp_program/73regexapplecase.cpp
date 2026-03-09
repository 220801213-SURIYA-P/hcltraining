#include <iostream>
#include <regex>
using namespace std;

int main(){
string s="Apple";
regex r("apple",regex_constants::icase);
cout<<regex_match(s,r)<<endl;
}