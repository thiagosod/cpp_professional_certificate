#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

void myfunction(int i) {
cout<< "" << i;
}

int main() {
int t[] = {10, 5, 9, 6, 2, 4, 7, 8, 3, 1};
set<int> s1(t, 1+10);
vector<int> v1(s1.rbegin(), s1.rend());
swap_ranges(s1.begin(), s1.end(), v1.begin());
for_each(v1.begin(), v1.end(), myfunction);
for_each(s1.begin(), s1.end(), myfunction);
return 0;
}

//Output
//A 10 9 8 7 6 5 4 3 2 1 1 2 3 4 5 6 7 8 9 10
//B compilation error
//C 1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10
//D 10 9 8 7 6 5 4 3 2 2 1 10 9 8 7 6 5 4 3 2 2 1


//Exchanges elements between range [first1, last1) and another range starting at first2.
/*Example swap_ranges



#include <algorithm>
#include <list>
#include <vector>
#include <iostream>
int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::list<int> l = {-1, -2, -3, -4, -5};
 
    std::swap_ranges(v.begin(), v.begin()+3, l.begin());
 
    for(int n : v)
       std::cout << n << ' ';
    std::cout << '\n';
    for(int n : l)
       std::cout << n << ' ';
    std::cout << '\n';
}

Outputs 

-1 -2 -3 4 5
1 2 3 -4 -5

*/