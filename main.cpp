#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <stdio.h>

using namespace std;

int fx(int & a){
    cin >> a;
    return a+1;
}

template <class T>
//T xchg(T const &x, T const &y){  // 引用为常量 在该函数内不可变
T xchg(T  &x, T  &y){
    T t = x;
    x=y;
    y=t;
};

typedef std::map<int,std::set<int> >    Graph;


int main() {
    string usr;
//    set<int>;

//    cout << "Hello, World!" << endl;
//    cout << "Input you name\n";
//    cin >> usr;
//    cout << usr;

    map<int,string> yourkids;
    yourkids.insert(pair<int,string>(888,"linux"));
    yourkids[11]="the str of index 11";

    cout << yourkids[11] << endl;
    cout << endl;
    cout << yourkids[888];
    cout << endl;


    set<int> mySet;
    mySet.insert(3);
    mySet.insert(5);
    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(3);
    mySet.insert(8);
    mySet.insert(4);

    cout << "set<>:" << endl;
    set<int>::iterator it;
    for(it= mySet.begin(); it != mySet.end(); it++)
        cout<<*it<<endl;
    cout << "set<> sorted by itself" << endl;
    cout << endl;

    vector<int> myVector;
    vector<int>::iterator vt;
//    vt = myVector.begin();
    vt = myVector.end();
    int i;
    for(i=0;i!=10;++i){
        myVector.insert(vt,33);
        vt=myVector.end();
    }

    cout <<"sum of 33" << endl<< myVector.size()<<endl;

//    myVector.insert(vt,1);

    cout << i << endl << myVector[5];


//    map<string,int> mapString_int;
//    mapString_int.insert(pair<string,int>("alpha", 1));
//    mapString_int.insert(map<string,int>)

    cout<<"\nMap start"<<endl;
    map<int,int> m1;
    m1.insert({1,13});
    cout<<m1[1]<<"\n";

    m1.insert(make_pair(2,20));
    cout << m1[2]<<"\n";

    m1.insert(m1.end(),make_pair(3,33));
    cout << m1[3];
    cout <<endl;

    map<int,int>::iterator mt;
    mt = m1.begin();

    cout <<"mt->first"<<endl;
    cout << mt->first<<endl;
    cout <<"mt->second"<<endl;
    cout << mt->second<<endl;

    mt=++mt;
    cout <<"mt->first"<<endl;
    cout << mt->first<<endl;
    cout <<"mt->second"<<endl;
    cout << mt->second<<endl;



    map<int,string> m3;



    int a=1,b=2;
    cout<<a<<endl;
    cout<<b<<endl;
    xchg(a,b);
    cout<<a<<endl;
    cout<<b<<endl;

/*------------Graph Start----------------*/

    cout <<"Graph Srart\n";
    Graph graph;
    //map<int,set<int,int> >::const_iterator iGraph;
    graph[0].insert(10);
    graph[0].insert(20);
    graph[1].insert(11);
    graph[1].insert(21);
    Graph::const_iterator iter = graph.begin();
    const std::set<int> & iSet = iter->second;
    //iGraph = graph.begin();

    a = iter->first;
    //iSet = iter->second;
    //cout<<iter->second;
    for(std::set<int>::const_iterator iterInner = iSet.begin(); iterInner != iSet.end(); ++iterInner) {
	    int v = *iterInner;
	    cout << v << endl; 
    }

    iter=++iter;
    const std::set<int> & iSet2 = iter->second;
    for(std::set<int>::const_iterator iterInner = iSet2.begin(); iterInner != iSet2.end(); ++iterInner) {
	    int v = *iterInner;
	    cout << v << endl; 
    }


    //cout << iSet[0];
    //cout << iSet[1];
    //iSet++;
    //cout << iSet[0];
    //cout << iSet[1];













    return 0;
}
