#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <algorithm>
#include <iomanip>
using  namespace std;
class B { int val;
public:
B(int v=0): val(v) {}
int getV() const {return val;}
operator int() const {return val;};};

template<class T> struct Out {
ostream & out;
Out(ostream &o): out(o){}
void operator() (const T & val) {out<<setw(3)<<hex<<val;} };

int main() {
int t[] = {1, 2, 3, 4, 5, 6, 7 , 8, 9 , 10};
fstream f("test.out", ios::trunc|ios::out);
list <B> l(t, t+10);
for_each(l.begin(), l.end(), Out<B>(f));

f.close();
f.open("test.out");
for( ; f.good(); ){
int i;
f>>i;
cout<<i<<" ";
}
f.close();
return 0;
}