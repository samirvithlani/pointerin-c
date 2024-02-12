#include<iostream>
#include<string>
using namespace std;

template<class T> class Area{


    public:

    void findArea(T a,T b){

        cout<<"Area is :"<<a*b<<endl;
    }


};

int main(){

//Area a;    
Area<int> a;
Area<float> b;
Area<string> c;
a.findArea(10.10,20);
b.findArea(10.10,20.20);
c.findArea(10,"World");

}