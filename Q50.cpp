#include <vector>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

void print(int v) {cout<<v<<" ";}
struct Sequence {
int start;
Sequence(int start): start(start){}
int operator()(){return start++;}
};
bool predicate(int v){return v%2==0;}
int main() {
vector<int> v1(10);
generate_n(v1.begin(), 10, Sequence(1));
set<int> s1(v1.begin(), v1.end());
remove_if(s1.begin(), s1.end(), predicate);
for_each(s1.begin(), s1.end(), print); cout<<endl;
return 0;
}

//Outputs
//A : 1 3 5 7 9 6 7 8 9 10
//B : 1 3 5 7 9 
//C : 2 4 6 8 10
//D : compilation error
