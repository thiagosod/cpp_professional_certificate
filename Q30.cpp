#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
int t[] = {1,2,3,2,3,5,1,2,7,3,2,1,10,4,4,5};
vector<int> v(t,t+15);

int number = count(v.begin(), v.end(), 2);
cout<<number<<endl;
return 0;
}

//Outputs:
//A : 4 <<<<<
//B : 3
//C : 2 
//D : 0
//E : compilation error