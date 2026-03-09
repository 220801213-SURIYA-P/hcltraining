#include <iostream>
#include <regex>
using namespace std;

int main(){
string ip="192.168.1.1";
regex r("^(\\d{1,3}\\.){3}\\d{1,3}$");
cout<<regex_match(ip,r)<<endl;
}