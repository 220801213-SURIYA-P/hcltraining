#include <iostream>
#include <string>
using namespace std;

class Book{
    string isbn;
    string title;
    string author;
public:
    void setIsbn(string v){ isbn=v; }
    void setTitle(string v){ title=v; }
    void setAuthor(string v){ author=v; }
    void updateTitle(const string& t){ title=t; }
    void print(){
        cout<<isbn<<" "<<title<<" "<<author<<endl;
    }
};

int main(){
    Book b;
    b.setIsbn("111");
    b.setTitle("CPP");
    b.setAuthor("Bjarne");
    b.print();
    b.updateTitle("AdvancedCPP");
    b.print();
}