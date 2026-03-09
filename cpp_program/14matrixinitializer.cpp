#include <iostream>
#include <initializer_list>
using namespace std;

class Matrix{
    int r,c;
    int **data;
public:
    Matrix(int rr,int cc):r(rr),c(cc){
        data=new int*[r];
        for(int i=0;i<r;i++)
            data[i]=new int[c];
    }
    Matrix(initializer_list<initializer_list<int>> list){
        r=list.size();
        c=list.begin()->size();
        data=new int*[r];
        int i=0;
        for(auto row:list){
            data[i]=new int[c];
            int j=0;
            for(auto val:row){
                data[i][j]=val;
                j++;
            }
            i++;
        }
    }
    void print(){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                cout<<data[i][j]<<" ";
            cout<<endl;
        }
    }
    ~Matrix(){
        for(int i=0;i<r;i++)
            delete[] data[i];
        delete[] data;
    }
};

int main(){
    Matrix a{{1,2,3},{4,5,6}};
    a.print();
}