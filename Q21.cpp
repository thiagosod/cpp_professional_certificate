#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
template<class T> struct Out {
ostream & out;
Out(ostream & o): out(o) {}
void operator() (const T & val) { out<<val<<" ";} };

int main() {
int t[]={3,2,4,1,5,10,9,7,8,6};
vector<int> v1(t, t+10);
sort(v1.begin(), v1.end(), greater<int>());
cout<<min_element(v1.begin(), v1.end());
return 0;
}

//Outputs

//A : 3
//B : 1
//C : 6
//D : 10
//E : compilation error