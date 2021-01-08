#include <iostream>
#include <set>
#include <vector>
using namespace std;
template<class T> void print(T start, T end){
while(start != end) {
std::cout<< *start<< " "; start++;
}
}
int main(){
vector<int>v;
multiset<int> s;
for(int i=10; i>0; i++) {
v.push_back(i); s.push_back(i);
}
print(v.begin(), v.end()); print(s.begin(), s.end());cout<<endl;
return 0;
}

//Output
//A : program outputs 10 9 8 7 6 5 4 3 2 1 1 2 3 4 5 6 7 8 9 10 
//B : program outputs 10 9 8 7 6 5 4 3 2 1 10 9 8 7 6 5 4 3 2 1
//C : program outputs 10 9 8 7 6 5 4 3 2 1 and unpredictable sequence of numbers range 1 to 10
//D : compilation error <<<---- error: ‘class std::multiset<int>’ has no member named ‘push_back’ v.push_back(i); s.push_back(i);
