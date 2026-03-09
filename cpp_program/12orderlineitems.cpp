#include <iostream>
#include <vector>
using namespace std;

class Order{
    vector<int> id;
    vector<int> qty;
public:
    void addLineItem(int pid,int q){
        id.push_back(pid);
        qty.push_back(q);
    }
    int totalItems(){
        int sum=0;
        for(int i=0;i<qty.size();i++)
            sum+=qty[i];
        return sum;
    }
    void print(){
        for(int i=0;i<id.size();i++)
            cout<<id[i]<<" "<<qty[i]<<endl;
        cout<<"Total "<<totalItems()<<endl;
    }
};

int main(){
    Order ord;
    ord.addLineItem(101,2);
    ord.addLineItem(105,4);
    ord.addLineItem(108,1);
    ord.print();
}