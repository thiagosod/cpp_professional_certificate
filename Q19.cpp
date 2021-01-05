#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;
template<class T> struct Out {
ostream & out;
Out(ostream & o): out(o) {}
void operator() (const T & val) { out<<val<<" ";} };

int main() {
int t1[] = {3,2,4,1,5};
int t2[] = {5,6,8,2,1};
vector<int> v1(10);
sort(t1, t1+5);
sort(t2, t2+5);
set_union(t1, t1 + 5, t2, t2 +5, v1.begin());
for_each(v1.begin(), v1.end(), Out<int>(cout));cout<<endl;
return 0;
}

//Outputs

//A : 3 2 4 1 5 6 8 2 1 0
//B : 1 2 3 4 5 6 8 2 1 0
//C : 1 1 2 2 3 4 5 5 6 8
//D : 1 2 3 4 5 6 8 0 0 0 <<<<----
//E : compilation error


/*
set_union

Constructs a sorted union beginning at d_first consisting of the set of elements present in one or both sorted ranges [first1, last1) and [first2, last2).

If some element is found m times in [first1, last1) and n times in [first2, last2), then all m elements will be copied from [first1, last1) to d_first, preserving order, and then exactly std::max(n-m, 0) elements will be copied from [first2, last2) to d_first, also preserving order.



*/