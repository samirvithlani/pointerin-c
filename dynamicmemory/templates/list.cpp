#include<iostream>
#include<string>
#include<list>

using namespace std;

int main(){


    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);


    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++){

        cout<<*it<<endl;
    }


    
}

