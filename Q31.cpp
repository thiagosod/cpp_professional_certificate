#include <deque>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
template<class T> struct Out {
ostream & out;
Out(ostream & o): out(o){}
void operator() (const T & val) { out<<val<<" ";}};
bool Compare(char a, char b) {return tolower(a) < tolower(b);}
int main() {
char s[] = {"qwert"};
char t1[] = {"ert"};
char t2[] = {"ERT"};
sort(s, s+6);
cout<<includes(s,s+6, t1, t1+3, Compare)<<" "<<includes(s, s+6, t2, t2+3, Compare)<<endl;return 0;
}


//Program Outputs
//A : 0 0 
//B : 0 1
//C : 1 0
//D : 1 1 <<<<

/***
std::includes
Returns true if the sorted range [first2, last2) is a subsequence of the sorted range [first1, last1). (A subsequence need not be contiguous.)

bool includes( InputIt1 first1, InputIt1 last1,
               InputIt2 first2, InputIt2 last2, Compare comp );

	comparison function object (i.e. an object that satisfies the requirements of Compare) which returns ​true if the first argument is less than (i.e. is ordered before) the second.
The signature of the comparison function should be equivalent to the following:
 bool cmp(const Type1 &a, const Type2 &b);
*/
