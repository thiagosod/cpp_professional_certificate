
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <class T> struct Out{
ostream & out;
Out(ostream & o): out(o){}
void operator()(const T & val){
out<<val<<" ";
}
};
struct Sequence {
int start;
Sequence(int start): start(start){}
int operator()(){
return start++;}};
int main(){
vector<int> v1(10);
generate(v1.rbegin(),v1.rend(), Sequence(1));
rotate(v1.begin(), v1.begin() + 1, v1.end());
for_each(v1.begin(), v1.end(), Out<int>(cout) ); cout<< endl;
return 0;
}

/***
Question:
What  happens when you attempt to compile and run the following code ?
(A) Program outputs: 1 2 3 4 5 6 7 8 9 10
(B) Program outputs: 10 9 8 7 6 5 4 3 2 1
(C) Program outputs: 9 8 7 6 5 4 3 2 1 10  <-------
(D) Program outputs: 1 10 9 8 7 6 5 4 3 2

*/

/***
Notes:
generate(v1.rbegin(),v1.rend(), Sequence(1));
It generates the vector {10 9 8 7 6 5 4 3 2 1}

|rotate|
void rotate (ForwardIterator first, ForwardIterator middle,
               ForwardIterator last);
Rotates the order of the elements in the range [first,last), in such a way that the element pointed by middle becomes the new first element.

rotate(v1.begin(), v1.begin() + 1, v1.end());
It takes the first element

first = 10
middle = 9
last = 1

new first element = 9
move 10 to to the end of the vector

*/