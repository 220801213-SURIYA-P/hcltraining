#include <iostream>
#include <regex>
using namespace std;

int main(){
string num="1234567890";
regex r("(\\d{3})(\\d{3})(\\d{4})");
cout<<regex_replace(num,r,"($1) $2-$3")<<endl;
}