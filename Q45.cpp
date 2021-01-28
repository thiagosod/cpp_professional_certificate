#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
template<class T> struct Out {
ostream & out;
Out(ostream & o): out(o){}
void operator() (const T & val) {out<<val<<" ";} };

int main() {
int t1[] = {3,2,4,1,5};
int t2[] = {6,10,8,7,9};
vector<int> v1(5);
transform(t1, t1 +5, t2, v1.rbegin(), plus<int>());
for_each(v1.rbegin(), v1.rend(), Out<int>(cout));cout<<endl;
return 0;
}

//Outputs:
//A : 9 12 12 8 14 <<<<<<<<<<<<<<<
//B : 14 8 12 12 9
//C : 3 2 4 1 5 6 10 8 7 9
//D : 1 2 3 4 5 6 7 8 9 10
//E : compilation error