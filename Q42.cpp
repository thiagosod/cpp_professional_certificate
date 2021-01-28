#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
int t[] = {1,2,3,4,5,1,2,3,4,5};
vector<int> v(t, t+10);
vector<int>::iterator it;
int m1[] = {1,2,3};
it = search(v.begin(), v.end(), m1, m1+3);
cout<< "found at position: "<<it->v.begin() <<endl;
return 0;
}

//What happens when compile and run
//A: found at position 5
//B: found at position 0 <<<<<
//C: found at position 6
//D: found at position 1
//E: found at position 10