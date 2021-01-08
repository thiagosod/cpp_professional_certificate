#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;
class B{ int val;
public:
B(int v):val(v){}
int getV() const {return val;} bool operator < (const B & v) const { return 
val<v.val;} }; ostream & operator <<(ostream & out, const B & v) {
out<<v.getV(); return out;}
template<class T> struct Out {
ostream & out;
Out(ostream & o): out(o) {}
void operator() (const T & val) { out<<val<<"";}} ;
int main() {
int t[]={8, 10, 5, 1, 4, 6, 2, 7, 9, 3};
deque<B> d1(t, t+10);
sort(d1.begin(), d1.end());
deque<B>::iterator it = upper_bound(d1.begin(), d1.end(), B(4), greater<B>());
for_each(it, d1.end(), Out<B>(cout)); cout<<endl;
return 0;
}

//Outputs
//A : 5 6 7 8 9 10
//B : 4 5 6 7 8 9 10
//C : compilation error <<<<-- /usr/include/c++/7/bits/stl_function.h:376:20: error: no match for ‘operator>’ (operand types are ‘const B’ and ‘const B’)
//D : 1 2 3 4 5
//E : 1 2 3 4