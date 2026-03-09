#include <iostream>
#include <cmath>
using namespace std;

class Point{
public:
double x;
double y;
Point(double a=0,double b=0){x=a;y=b;}
};

double distance(double x1,double y1,double x2,double y2){
return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

double distance(Point a,Point b){
return distance(a.x,a.y,b.x,b.y);
}

double distance(Point a){
return sqrt(a.x*a.x+a.y*a.y);
}

int main(){
Point p1(1,2),p2(4,6);
cout<<distance(1,2,4,6)<<endl;
cout<<distance(p1,p2)<<endl;
cout<<distance(p1)<<endl;
}