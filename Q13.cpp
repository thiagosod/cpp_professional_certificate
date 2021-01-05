#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <set>
using namespace std;

void myfunction(int i) {
cout<<" "<<i;
}

int main() {
int t[] = { 10, 5, 9, 6,2,4,7, 8, 3, 1};
vector<int> v1(t, t+10);
deque<int> d1(t, t+10);
set<int> s1(t, t+10);

for_each(v1.begin(), v1.end(), myfunction); //Line I
for_each(d1.begin(), d1.end(), myfunction); //Line II
for_each(s1.begin(), s1.end(), myfunction); //Line III
return 0;
}

//What happen when you attempt to compile and run the following code

//A. Outputs 10 ,5, 9, 6,2,4,7,8,3,1, 10, 5, 9, 6,2, 4, 7, 8, 3, 1, 1, 2, 3, 4, 5, 6,...-<<<<<<<<<
//B. Outputs 10 ,5, 9, 6,2,4,7,8,3,1, 10, 5, 9, 6,2, 4, 7, 8, 3, 1, 10, 5, 9, 6, 2, 4, 7, 8
//C. Outputs 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, .... 
//D. compilation error in line I
//E. compilation error in line III

/*
It’s doesn’t allow duplicate elements i.e. it only contains unique elements.
Std::set can contain element of any specified type in template argument i.e.

std::set internally store elements in balanced binary tree.
By default std::set uses the operator < for comparing two elements and but if user passes the external sorting criteria i.e. comparator then it uses that instead of default operator <.
std::set will keep the inserted elements in sorted order based on the assigned sorting criteria i.e. either by default criteria operator < or by passed comparator (if passed).
*/