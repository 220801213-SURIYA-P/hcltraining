#include <iostream>
using namespace std;

class Seconds;

class Meters{
public:
    double v;
    Meters(double x){ v=x; }
};

class Seconds{
public:
    double v;
    Seconds(double x){ v=x; }
};

class MetersPerSecond{
public:
    double v;
    MetersPerSecond(double x){ v=x; }
};

MetersPerSecond operator/(Meters m,Seconds s){
    return MetersPerSecond(m.v/s.v);
}

int main(){
    Meters d(100);
    Seconds t(20);
    MetersPerSecond sp=d/t;
    cout<<sp.v<<endl;
}