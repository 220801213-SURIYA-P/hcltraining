#include <iostream>
#include <regex>
using namespace std;

int main(){
string url="https://site.com";
regex r("^https?://");
cout<<regex_search(url,r)<<endl;
}