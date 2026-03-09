#include <iostream>
using namespace std;

class Wallet;

class WalletAuditor{
public:
void report(const Wallet& w);
};

class Wallet{
double balance;
public:
Wallet(){balance=0;}
void deposit(double amt){if(amt>0) balance+=amt;}
void withdraw(double amt){if(amt<=balance) balance-=amt;}
friend class WalletAuditor;
};

void WalletAuditor::report(const Wallet& w){
cout<<"Balance "<<w.balance<<endl;
}

int main(){
Wallet my;
my.deposit(500);
WalletAuditor a;
a.report(my);
}