#include <iostream>
using namespace std;

class Media{
public:
    virtual void play(){
        cout<<"Play media"<<endl;
    }
};

class Audio:public Media{
public:
    void play(){
        cout<<"Play audio"<<endl;
    }
};

class Video:public Media{
public:
    void play(){
        cout<<"Play video"<<endl;
    }
};

int main(){
    Media *m;
    Audio a;
    Video v;
    m=&a;
    m->play();
    m=&v;
    m->play();
}