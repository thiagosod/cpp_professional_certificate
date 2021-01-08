#include <deque>
#include <list>
#include <iostream>
using namespace std;
int main()
{
list<int>l1;
deque<int>d1;
for(int i=0; i<5; i++)
{
l1.push_back(i); l1.push_front(i);
d1.push_back(i); d1.push_front(i);
}
for(int i=0;i<d1.size();i++)
{
cout<<d1[i]<<" "<<l1[i]<<" ";
}
cout<<endl;
return 0;
}

//Result
//A : Program displays 4 4 3 3 2 2 1 1 0 0 0 0 1 1 2 2 3 3 4 4
//B : runtim exception
//C : compilation error due to line 11
//D : compilation error due to line 12
//E : compilation error due to tline 16 <<<<< error: no match for ‘operator[]’ (operand types are ‘std::__cxx11::list<int>’ and ‘int’)