#include <queue>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
template<typename T>
void print(T start, T end)
{
while(start != end)
cout<<*start++;
}
int main()
{
string t[] = {"one", "two", "three", "four", "five"};
vector<string> v1(t, t+5);
deque<string> d1(v1.rbegin(), v1.rend());
d1.push_back("zero");
print(d1[0].rbegin(),d1[10].rend());

return 0;
}
//Outputs
//A : program outputs orez
//B : program outputs: evif <<<<<<<<<<<<<<<<<
//C : compilation error
//D : program outputs: five