#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;
template<class T> struct Out {
ostream & out;
Out(ostream & o): out(o) {}
void operator() (const T & val) { out<<val<<" ";} };

int main() {
list<int> l;
for(;!cin.bad();)
{
int i;
cin>>i;
l.push_back(i);
}
for_each(l.begin(),l.end(),Out<int>(cout));
return 0;
}

//Outputs

//A : 1 2 3
//B : 1 3 3 end
//C : 1
//D : compilation error
//E : program runs forever without output