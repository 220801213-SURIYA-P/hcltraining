#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> g(100);
int best=0;

int dfs(int v,int p){
int m1=0,m2=0;
for(int to:g[v]) if(to!=p){
int h=dfs(to,v)+1;
if(h>m1){m2=m1;m1=h;}
else if(h>m2) m2=h;
}
best=max(best,m1+m2);
return m1;
}

int main(){
g[1].push_back(2);
g[2].push_back(1);
g[2].push_back(3);
g[3].push_back(2);
dfs(1,-1);
cout<<best<<endl;
}