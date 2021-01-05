#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class B{ int val;
public:
B(int v): val(v) {}
int getV() const {return val;} bool operator < (const B &v ) const { return val > v.val;}};
ostream & operator <<(ostream & out, const B &v) {
out<<v.getV(); return out;}
template<class T>struct Out {
ostream & out;
Out(ostream & o): out(o) {}
void operator() (const T & val) {out<<val<<" ";}};

int main() {
B t1[]={3,2,4,1,5};
B t2[]={5,6,8,2,1};
vector<B> v1(10,0);//Initialize the vector as {0,0,0,0,0,0,0,0,0,0}
sort(t1, t1+5);//After this 5,4,3,2,1
sort(t2, t2+5);//After this 8,6,5,2,1
set_intersection(t1, t1+5, t2, t2 +5, v1.begin());//Intersection of both array 5, 2 , 1
for_each(v1.begin(), v1.end(), Out<B>(cout));cout<<endl;
return 0;
}

//What happen when you attempt to compile and run the following code

//A. compilation error
//B. 1 2 3 4 5 6 8 0 0 0
//C. 1 2 3 4 5 6 8 2 1 0
//D. 5 2 1 0 0 0 0 0 0 0 <-----
//E. 1 2 5 0 0 0 0 0 0 0

/*
set_intersection
Constructs a sorted range beginning at d_first consisting of elements that are found in both sorted ranges [first1, last1) and [first2, last2). If some element is found m times in [first1, last1) and n times in [first2, last2), the first std::min(m, n) elements will be copied from the first range to the destination range. The order of equivalent elements is preserved. The resulting range cannot overlap with either of the input ranges.

*/