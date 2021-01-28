#include <list>
#include <iostream>
using namespace std;
class A { int a: public:
A(int a){this->a=a;}
//Insert code here 1
};
insert code here 2
template<class T> void print(T start, T end) {
while(start != end) {
std::cout<< *start<< " "; start++;
}
}
int main() {
A t1[] = {1, 7, 8, 4, 5}; list<A> l1{t1, t1 + 5};
A t2[] = {3, 2, 6, 9, 0}; list<A> l2{t2, t2 + 5};
l1.sort(); l2.sort(); l1.merge(l2);
print(l1.begin(), l1.end());
print(l2.begin(), l2.end()); cout<<endl;
return 0
}

//A : place 1: operator int() { return a;}
//B : place 1: operator int() { return a;}
//bool operator < (const A & b) { return this->a < b.a;}
//C : place 1: bool operator < (const A & b) {return this->a < b.a}
//D : place 1: bool operator < (const A & b) {return this->a < b.a}
//friend ostream & opeartor <<(ostream & c. const A & a);
//place 2: ostream & operator <<(ostream & c, const A & a) {c<<a.a, return c;}
//E : place 1 : bool operator  < (const A & b) { return this->a<b.a;}
//place 2: ostream & operator <(ostream & c, const A & a) {c<<a.a; return c}

//Answer ABD