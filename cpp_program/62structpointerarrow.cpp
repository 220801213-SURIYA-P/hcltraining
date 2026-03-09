#include <iostream>
using namespace std;

struct Item{
string name;
int price;
};

int main(){
Item it={"pen",10};
Item* ptr=&it;
cout<<ptr->name<<" "<<ptr->price<<endl;
}