#include <deque>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
int t[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
vector<int> v1(t, t + 10);
deque<int> d1(v1.begin(), v1.end());
deque<int> d2;
d2 = d1;
d2.insert(d1.rbegin(), 10);
for(int i=0; i<d1.size(); i++)
{
cout<<d1[i]<<" ";
}
return 0;
}
//Program
//A : program outputs 0 1 2 3 4 5 6 7 8 9 10
//B : program outputs 10 0 1 2 3 4 5 6 7 8 9
//C : program outputs 0 1 2 3 4 5 6 7 8 9
//D : compilation error <<<<<< no matching function for call to ‘std::deque<int>::insert(std::deque<int>::reverse_iterator, int)’
