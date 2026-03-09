#include <iostream>
#include <string>
using namespace std;

class CryptoBox{
    string key;
public:
    CryptoBox(string k){ key=k; }
    friend void dumpForAudit(const CryptoBox& b);
};

void dumpForAudit(const CryptoBox& b){
    cout<<"Key "<<b.key<<endl;
}

int main(){
    CryptoBox box("secret123");
    dumpForAudit(box);
}