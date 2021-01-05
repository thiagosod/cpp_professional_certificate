#include <list>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
int t[] = {1,2,3,4,5};
vector<int> v1(t, t+5);
list<int> l1;
l1.assign(v1.end(), v1.begin());
for(int i=0; i <l1.size();i ++)
{
cout<<l1.at(i)<<" ";
}
cout<<endl;
return 0;
}

//What happen when you attempt to compile and run the following code

//A. program displays 5 4 3 2 1
//B. program displays 1 2 3 4 5
//C. compilation error <---- error: ‘class std::__cxx11::list<int>’ has no member named ‘at’
//D. segmentation error
