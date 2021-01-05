#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main() {
int t[] = {3, 4, 2, 1, 0, 3, 4, 1, 2, 0};
vector<int> v(t, t + 10);
multimap<int, string> m;
for (vector<int>::iterator i = v.begin(); i != v.end(); i++){
stringstream s; s<< *i<< *i;
m.insert(pair<int, string>(*i, s.str()));
}
pair<multimap<int, string>::iterator, multimap<int, string>::iterator> range;
range = m.equal_range(2);
for (multimap<int, string>::iterator i = range.first; i!= range.second; i++) {
cout<< i->first << " ";
}
return 0;
}