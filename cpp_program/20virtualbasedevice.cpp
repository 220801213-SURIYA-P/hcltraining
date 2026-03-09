#include <iostream>
using namespace std;

class Device{
public:
    void info(){ cout<<"Base device"<<endl; }
};

class Phone:virtual public Device{
};

class Camera:virtual public Device{
};

class SmartPhone:public Phone,public Camera{
};

int main(){
    SmartPhone s;
    s.info();
}