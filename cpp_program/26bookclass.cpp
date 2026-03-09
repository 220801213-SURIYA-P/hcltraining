#include <iostream>
#include <string>
using namespace std;

class Book{
string isbn;
string title;
string author;
public:
Book(){}
void setIsbn(string code){isbn=code;}
void setTitle(string name){title=name;}
void setAuthor(string person){author=person;}
void updateTitle(string name){title=name;}
void print(){
cout<<"ISBN: "<<isbn<<endl;
cout<<"Title: "<<title<<endl;
cout<<"Author: "<<author<<endl;
}
};

int main(){
Book one;
one.setIsbn("111");
one.setTitle("Old Title");
one.setAuthor("Writer");
one.print();
cout<<endl;
one.updateTitle("New Title");
one.print();
}