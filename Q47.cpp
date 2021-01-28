#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main(){
int t[]= {3,4,2,1,6,5,7,9,8,0};
vector<int> v(t, t+10);
map<int, string> m;
for(vector<int>::iterator i = v.begin(); i!=v.end();i++) {
stringstream s; s<<*i<<*i; m.insert(pair<int, string>(*i,s.str()));
}
for(map<int, string>::iterator i=m.begin();i!=m.end();i++) {
cout<<*i<<" ";
}
return 0;
}
//Outputs
//A : 3 4 2 1 6 5 7 9 8 0
//B : 00 11 22 33 44 55 66 77 88 99
//C : 0 1 2 3 4 5 6 7 8 9
//D : 0 00 1 11 2 22 3 33 4 44 5 55 6 66 7 77 8 88 9 99
//E : compilation error <<<<<<<<<<<<<<<<<<<< error: no match for ‘operator<<’ (operand types are ‘std::ostream {aka std::basic_ostream<char>}’ and ‘std::pair<const int, std::__cxx11::basic_string<char> >’)