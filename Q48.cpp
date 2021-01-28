#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;
template<class T> struct Out {
ostream & out;
Out(ostream & o): out(o){}
void operator() (const T & val) {out<<val<<" ";} };

int main() {
ifstream f("test.in");
list<int> l;
for(;!f.fail();){
int i;
f>>i;
l.push_back(i);
}
f.close();
for_each(l.begin(), l.end(), Out<int>(cout));
return 0;
}

//Outputs with a file containing 1 2 3
//A : 1 2 3
//B : 1 2 3 3