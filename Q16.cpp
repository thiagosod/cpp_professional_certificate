#include <iostream>
#include <set>
#include <list>

using namespace std;
int main(){
int t[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
list<int> v(t, t+10);
set<int> s1(v.begin(), v.end());
if (s1.count(3) ==2){
s1.erase(3);//it erases just the first appearance
}
for(set<int>::iterator i=s1.begin();i!= s1.end(); i++){
cout<<*i<<" ";
}
return 0;
}

//Outputs
//A : 1 2 3 4 5 ---<
//B : 1 2 4 5
//C : 1 1 2 2 3 4 4 5 5
//D : 1 1 2 3 3 4 4 5 5
//E : Compilation error