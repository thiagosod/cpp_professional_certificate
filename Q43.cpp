#include <deque>
#include <iostream>
#include <algorithm>
using namespace::std;
template<class T> struct Out {
ostream & out;
Out(ostream & o): out(o){}
void operator() (const T & val) {out<<val<<" ";} };
struct Sequence { int start;
Sequence(int start): start(start){}
int operator()(){return 10*(1+(start++ %3));}
};
int main() {
deque<int> d1(10);
generate(d1.begin(),d1.end(),Sequence(1));
sort(d1.begin(), d1.end());
pair<deque<int>::iterator, deque<int>::iterator > result =
equal_range(d1.begin(),d1.end(),20); for_each(result.first, result.second,
Out<int>(cout)); cout<<endl;
return 0;
}

//Outputs:
//A : 10 10 10 20 20 20 20 30 30 30
//B : 20 20 20 20 <<<<<<<<<<<<<<
//C : 10 20 20 20 20
//D : 20 20 20 20 30
//E : 10 20 20 20 20 30