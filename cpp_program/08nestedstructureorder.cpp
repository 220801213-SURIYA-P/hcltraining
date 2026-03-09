#include <iostream>
#include <string>
using namespace std;

struct Customer{
    string name;
    string city;
};

struct Order{
    int id;
    Customer cus;
    float amount;
};

int main(){
    Order ord;
    cin>>ord.id;
    cin>>ord.cus.name;
    cin>>ord.cus.city;
    cin>>ord.amount;

    cout<<ord.id<<endl;
    cout<<ord.cus.name<<endl;
    cout<<ord.cus.city<<endl;
    cout<<ord.amount;
}