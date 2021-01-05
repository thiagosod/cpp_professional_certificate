#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
template<class T> struct Out {
ostream & out;
Out(ostream & o): out(o) {}
void operator() (const T & val) { out<<val<<" ";} };

int Add(int a, int b){
return a + b;
}

int main() {
int t[]={1,2,3,4,5,6,7,8,9,10};
vector<int> v1(t, t+10);
vector<int> v2(10);
transform(v1.begin(), v1.end(), v2.begin(), bind2nd(ptr_fun(Add), 1));
vector<int>::iterator it = find_if(v1.begin(),
v1.end(), bind2nd(equal_to<int>(), 10)); cout<<*it<<endl;
return 0;
}

//Outputs

//A : false
//B : true
//C : 10 <<<<<<<<<<<<<<<<<<<<<<<<,
//D : 0
//E : compilation error

/*
bind2nd

Binds a given argument x to a first or second parameter of the given binary function object f. That is, stores x within the resulting wrapper, which, if called, passes x as the first or the second parameter of f.


#include <iostream>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <cmath>
#include <cstddef>
#include <vector>
 
int main()
{
    std::vector<double> a = {0, 30, 45, 60, 90, 180};
    std::vector<double> r(a.size());
    const double pi = std::acos(-1); // since C++20 use std::numbers::pi
 
    std::transform(a.begin(), a.end(), r.begin(),
        std::bind1st(std::multiplies<double>(), pi / 180.));
//  an equivalent lambda is: [pi](double a){ return a*pi / 180.; });
 
    for(std::size_t n = 0; n < a.size(); ++n)
        std::cout << std::setw(3) << a[n] << "° = " << std::fixed << r[n]
                  << " rad\n" << std::defaultfloat;
}

  0° = 0.000000 rad
 30° = 0.523599 rad
 45° = 0.785398 rad
 60° = 1.047198 rad
 90° = 1.570796 rad
180° = 3.141593 rad


*/