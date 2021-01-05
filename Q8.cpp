#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class B { int val;
public:
B(int v): val(v) {}
int getV() const {return val;} bool operator < (const B & v) const { return
v<v.val;} ostream & operator <<(ostream & out, const B & v) {
out<<v.getV(); return out;}

template<class T> struct Out {
ostream & out;
Out(ostream & o): out(o) {}
void operator() (const T & val) { out<<val<<" ";}};

int main() {
B t1[]={3,2,4,1,5};
B t2[]={6,10,8,7,9};
vector<B> v1(10);
sort(t1, t1+5);
sort(t2, t2+5);
merge(t1, t1+5, 2, t2+5, v1.begin());
for_each(v1.begin(), v1.end(), Out<B>(cout)); cout<<endl;
return 0;
}
		 
//What happen when you attempt to compile and run the following code

//A. 1 2 3 4 5 6 10 8 7 9
//B. 3 2 4 1 5 6 7 8 9 10
//C. 3 2 4 1 5 6 10 8 7 9
//D. 1 2 3 4 5 6 7 8 9 10
//E. compilation error   <------
		 
/*
<merge>
Merges two sorted ranges [first1, last1) and [first2, last2) into one sorted range beginning at d_first.
*/