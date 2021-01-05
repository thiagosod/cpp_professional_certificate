#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;

void myfunction(int i){
cout<< " "<<i;
}

int main(){
int t[] = {10, 5, 9, 6, 2, 4, 7, 8, 3, 1};
deque<int> d1(t, t+10);
vector<int> v1(d1.rbegin(), d1.rend());
sort(d1.begin(), d1.end());
swap_ranges(v1.begin(), v1.end(), d1.begin());
for_each(v1.begin(), v1.end(), myfunction);
for_each(d1.begin(), d1.end(), myfunction);
return 0;
}

//Outputs

//A : 10 9 8 7 6 5 4 3 2 1 1 2 3 4 5 6 7 8 9 10
//B : compilation error
//C : 1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10
//D : 1 2 3 4 5 6 7 9 9 10 1 3 8 7 4 2 6 9 5 10 <<<<----
//D : 1 3 8 7 4 2 6 9 5 10 1 2 3 4 5 6 7 8 9 10