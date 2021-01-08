#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
int t[]={3, 4, 2, 1, 6, 5, 7, 9, 8, 0};
vector<int> v(t, t+10);
set<int> s1(v.begin(), v.end());
bool found = s1.find(7);
if (found){
cout<<"Element found!\n";
}else{
cout<<"Element not found!\n";
}
return 0;
}


//A : program will display "Element found"
//B : program will display "Element not found!\n"
//C : code will not compile <<<<<< find method return iterator
//D : changing type of variable found to int will make this code compile
