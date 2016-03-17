#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>

using namespace std;

int fx(int & a){
    cin >> a;
    return a+1;
}

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


    set<int> mySet;
    mySet.insert(3);
    mySet.insert(5);
    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(3);
    mySet.insert(8);

    set<int>::iterator it;
    for(it= mySet.begin(); it != mySet.end(); it++)
        cout<<*it<<endl;

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









    return 0;
}