#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class B { int val;
public:
B(int v) val(v){}
int getV() const {return val;} bool operator < (const B & v) const { return
val<v.val;} }; ostream & operator <<(ostream & out, const B & v) {
out<<v.getV(); return out;}
template<class T> struct Out {
ostream & out;
Out(ostream & o): out(o){}
void operator() (const T & val) {out<<val<<" ";}};

int main() {
B t1[] = {3,2,4,1,5};
int t2[] = {5,6,8,2,1};
vector<B> v1(10,0);
sort(t1, t1+5);
sort(t2, t2+5);
set_union(t1, t1 + 5,t2, t2 +5, v1.begin());
for_each(v1.begin(), v1.end(), Out<B>(cout));cout<<endl;
return 0;
}

//Outputs
//A : 3 2 4 1 5 6 8 2 1 0
//B : 1 2 3 4 5 6 8 2 1 0
//C : 1 1 2 2 3 4 5 5 6 8
//D : 1 2 3 4 5 6 8 0 0 0
//E : compilation error <<< error: no match for ‘operator<’ (operand types are ‘int’ and ‘B’) { return *__it1 < *__it2; }

