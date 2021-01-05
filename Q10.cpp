#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void myfunction(int i) {
cout<<" "<< i;
}
void multiply(int a){
a*2;
}

int main() {
int t[] = {10, 5, 9, 6, 2, 4, 7, 8, 3, 1};
vector<int> v1(t, t+10);
for_each(v1.begin(), v1.end(), multiply);
iter_swap(v1.begin(), t+9);
for_each(v1.begin(),v1.end(),myfunction);
return 0;
}

//What happen when you attempt to compile and run the following code

//A. 1 5 9 6 2 4 7 8 3 1
//B. compilation error
//C. 1 2 3 4 5 6 7 8 9 10
//D. 10 9 8 7 6 5 4 3 2 1
//e. 10 5 9 6 2 4 7 8 3 1

/*
<iter_swap>
Swaps the values of the elements the given iterators are pointing to.
*/