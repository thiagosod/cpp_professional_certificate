#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class B {int val;
public:
B(int v=0): val(v){}
int getV() const {return val;}
operator int() const {return val;}};
template<class T> struct Out {
ostream & out;
Out(ostream & o): out(o){}
void operator() (const T & val) { out<<val<<" ";}};

struct Add{
B operator(){B &a, B &b) {return a+b;}};
int main() {
int t[]={1,2,3,4,5,6,7,8,9,10};
vector<B> v1(t,t+10);
vector<B> v2(10);
transform(v1.begin(), v1.end(), v2.begin(), bind1st(1,Add()));
for_each(v2.rbegin(), v2.rend(), Out<B>(cout));cout<<endl;
return 0;
}

//Outputs
//A : 1 2 3 4 5 6 7 8 9 10
//B : 2 3 4 5 6 7 8 9 10 11
//C : 10 9 8 7 6 5 4 3 2 1
//D : 11 10 9 8 7 6 5 4 3 2
//E : compilation error <<<<<