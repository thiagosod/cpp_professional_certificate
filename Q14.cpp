#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
int t[] = { 10, 5, 9, 6, 2, 4, 7, 8, 3, 1};
map<int, int> m;
for(int i=0;i < 10; i++)
{
m[i] = t[i];
}

pair<const int, int> p(5,5);
map<int, int>::iterator it = find(m.begin(), m.end(), p);
if (it != m.end())
{
cout<<it->first<<end;
}
else
{
cout<<"Not found\n";
}
return 0;
}

//Program outputs
//A  5
//B  Not found!
//C. 10
//D. Compilation error <<<<<<????