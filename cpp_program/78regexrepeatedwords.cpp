#include <iostream>
#include <regex>
using namespace std;

int main(){
string txt="the the";
regex r("\\b(\\w+) \\1\\b");
cout<<regex_search(txt,r)<<endl;
}