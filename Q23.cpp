#include <iostream>
#include <map>
using namespace std;
int main(){
int t[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
string s[] = {"one", "one", "two", "two", "three", "three", "five" "five"};
map<int, string> m;
for (int i = 0; i < 10; i++){
m.push_back(pair<int, string>(t[i], s[i]));
}
for (map<int, string>::iterator i = m.begin(); i!= m.end(); i++) {
cout<<i->first<<" ";
}
return 0;
}

//Outputs
//A : program outputs 1 2 3 4 5
//B : compilation error
//C : program outputs 1 1 2 2 3 3 4 4 5 5
//D : program outputs one two three four five
//E : program outputs one one two two three three four four five five