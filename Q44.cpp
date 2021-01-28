#include <iostream>
#include <map>
#include <string>
using namespace std;
class A{
int a;
public:
A(int a):a(a){}
int getA() const { return a;}
/* Insert Code Here 1*/
};
/* Insert Code Here 1*/

int main() {
int t[]={3, 4, 2, 1, 6, 5, 7, 9, 8, 10};
string s[] = {"three", "four", "two", "one", "six", "five", "seven",
"nine", "eight", "ten"}; map<A, string> m;/* Repace Code Here 3*/
for(int i=0;i<10;i++){
insert(pair<A, string>(A(t[i],s[i])));
erase(m.lower_bound(2),m.upper_bound(7));
map<A, string>::iterator i=m.begin(); /*Replace Code Here 4 */
for(;i!=m.end(); i++){
cout<<i->second<<" ";
}
cout<<endl;
return 0;
}

//A: Operator int() const {return a;} inserted at Place 1
//B: bool operator < (const A & b) const {return a<b.a;} inserted at Place 1
//C: bool operator < (const A & b) const {return b.a>a;} inserted at Place 1
//D: struct R( bool operator()(const A & a, const A & b) { return 
//a.getA()<b.getA();} }; inserted at Place 2 replacing line marked 3 with map<A, string, R> m
//replacing line marked 4 with map<A, string, R>::iterator i=m.begin();
	
//A,B,D