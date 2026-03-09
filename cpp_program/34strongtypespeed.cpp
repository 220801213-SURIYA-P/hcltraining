#include <iostream>
using namespace std;

class Seconds;

class Meters{
public:
double value;
Meters(double v){value=v;}
};

class Seconds{
public:
double value;
Seconds(double v){value=v;}
};

class MetersPerSecond{
public:
double value;
MetersPerSecond(double v){value=v;}
};

MetersPerSecond operator/(Meters m,Seconds s){
return MetersPerSecond(m.value/s.value);
}

int main(){
Meters dist(100);
Seconds time(10);
MetersPerSecond speed=dist/time;
cout<<speed.value<<endl;
}