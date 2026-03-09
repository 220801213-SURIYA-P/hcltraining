#include <iostream>
using namespace std;

namespace Company{
namespace HR{
void displayPolicy(){ cout<<"policy"<<endl; }
}
}

int main(){
Company::HR::displayPolicy();
}