#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
template<class T> struct Out {
ostream & out;
Out(ostream & o): out(o){}
void operator() (const T & val) { out<<val<<" ";}};

int main() {
int t[]={3,2,4,1,5,6,10,8,7,9};
vector<int> v1(t, t+10);
for_each(v1.begin(),v1.end(),bind2nd(plus<int>(),1));
for_each(v1.rbegin(),v1.rend(),Out<int>(cout));cout<<endl;
return 0;
}

//Program outputs
//A : 3 2 4 1 5 6 10 8 7 9
//B : 4 3 5 2 6 7 11 9 8 10
//C : 9 7 8 10 6 5 1 4 2 3 <<<<<<<
//D : 10 8 9 11 7 6 2 5 3 4
//E : compilation error

/* 
plus 
Binary function object class whose call returns the result of adding its two arguments (as returned by operator +). */ 