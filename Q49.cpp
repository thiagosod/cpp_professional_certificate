#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
template<class T> struct Out {
ostream & out;
Out(ostream & o): out(o){}
void operator() (const T & val) {out<<val<<" ";} };

int main() {
int t1[] = {3,2 , 4, 1, 5};
int t2[] = {6,10, 8, 7, 9};
vector<int> v1(10);
sort(t1, t1+5); sort(t2, t2+5);
copy(t1, t1+5, v1.begin())l
copy(t2, t2+5, v1.begin()+5);
merge(v1.begin(), v1.begin()+5, v1.end());
for_each(v1.begin(),v1.end(), Out<int>(cout));cout<<endl;
return 0;
};

//Outputs:
//A: 1 2 3 4 5 6 10 8 7 9
//B: 3 2 4 1 5 6 7 8 9 10
//C: 3 2 4 1 5 6 10 8 7 9
//D: 1 2 3 4 5 6 7 8 9 10
//E: Compilation error