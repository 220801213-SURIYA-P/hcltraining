#include <iostream>
#include <regex>
using namespace std;

int main(){
string post="hello #world #cpp";
regex r("#\\w+");
auto it=sregex_iterator(post.begin(),post.end(),r);
for(;it!=sregex_iterator();++it) cout<<it->str()<<endl;
}