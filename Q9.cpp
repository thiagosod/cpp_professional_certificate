#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class A {
int a;
public:
A(int a) : a(a) {}
int getA() const { return a;}
void setA(int a) {this->a = a;}
/* insert Code Here */
};

struct add10 { void operator()(A & a) { a.setA(a.getA() + 10);} };

int main() {
int t[] = { 10,5,9,6,2,4,7,8,3,1};
vector<A> v1(t, t+10);
for_each(v1.begin(), v1.end(), add10());
vector<A>::iterator it = find(v1.begin(), v1.end(), A(7));
cout<<it->getA()<<endl;
return 0;
}

//A. it will compile and print 7
//B. it will not compile <------
//C. it will compule but the program result is unpredictable
//D. adding code:
//bool operator !=(const A & b) const {
//	if (this->a != b.a) { return true;} return false;}
//at Place 1 will allow te program to compile