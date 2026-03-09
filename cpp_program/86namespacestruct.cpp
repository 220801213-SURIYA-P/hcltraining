#include <iostream>
using namespace std;

namespace Data{
struct Item{
string name;
int price;
};
}

int main(){
Data::Item it{"book",50};
cout<<it.name<<" "<<it.price<<endl;
}