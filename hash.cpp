#include <iostream>
#include<map>
using namespace std;

int main() {
    
   map<string,int>m;
    //1
    pair<string,int>p=make_pair("aritra",3);
    m.insert(p);
    //2
    pair<string,int> pair2("ganguly",2);
    m.insert(pair2);
    //3
    m["hai"]=1;
    //search
    cout<<m["hai"]<<endl;
    cout<<m.at("aritra")<<endl;
    //cout<<m["hhk"]<<endl;
    //size
    cout<<m.size()<<endl;
    //count occurence
    cout<<m.count("aritra")<<endl;
    m.erase("aritra");
    cout<<m.size()<<endl;
    //printing
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;
    //printing alternative    
    map<string,int> :: iterator it=m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }    
        
    return 0;
}
