#include <iostream>
using namespace std;

class Rectangle{
    double wid;
    double hei;
public:
    void setWidth(double w){
        if(w<=0) wid=1;
        else wid=w;
    }
    void setHeight(double h){
        if(h<=0) hei=1;
        else hei=h;
    }
    void show(){
        cout<<wid<<" "<<hei<<endl;
    }
};

int main(){
    Rectangle rec;
    rec.setWidth(5);
    rec.setHeight(3);
    rec.show();
    rec.setWidth(-4);
    rec.setHeight(-2);
    rec.show();
}