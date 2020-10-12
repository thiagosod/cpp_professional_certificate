#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
int t[]={3, 4, 2, 1, 6, 5, 7, 9, 8, 0};
vector<int> v(t, t+10);
multiset<int> s1(v.begin(), v.end());
s1.insert(v.begin(), v.end());
pair<multiset<int>::iterator, multiset<int>::iterator> range;
range = s1.equal_range(6);
while(range.first != range.second){
	cout<<*range.first<<" "; range.first++;
}
return 0;
}


/***
Question:
What  happens when you attempt to compile and run the following code ?
(A) Program outputs: 6 6   <-----
(B) Program outputs: 5 7
(C) Program outputs: 5 5 6 6 7 7
(D) Program outputs: 5 5 7 7
(E) Program outputs: 1 1 6 6 5 5

*/

/***
Notes:
|equal_range|
std::multiset::equal_range: Returns the bounds of a range that includes all the elements in the container that are equivalent to val.

|std::pair|
std::pair is a class template that provides a way to store two heterogeneous objects as a single unit. A pair is a specific case of a std::tuple with two elements.
If neither T1 nor T2 is a possibly cv-qualified class type with non-trivial destructor, or array thereof, the destructor of pair is trivial.

*/