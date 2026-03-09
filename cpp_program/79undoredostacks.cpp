#include <iostream>
#include <stack>
using namespace std;

int main(){
stack<string> undo,redo;
string text="";
undo.push(text);
text+="a";
undo.push(text);
text+="b";
undo.push(text);
text=undo.top(); undo.pop();
redo.push(text);
cout<<text<<endl;
}