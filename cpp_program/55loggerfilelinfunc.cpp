#include <iostream>
using namespace std;

void work(){
cout<<__FILE__<<" "<<__LINE__<<" "<<__func__<<endl;
}

void task(){
cout<<__FILE__<<" "<<__LINE__<<" "<<__func__<<endl;
}

int main(){
work();
task();
}