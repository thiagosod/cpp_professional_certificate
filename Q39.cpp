#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
int t[] = {1, 2, 3, 2, 3, 5, 1, 2, 7, 3, 2, 1, 19, 4, 4, 5};
vector<int> v(t, t+15);
vector<int>::iterator it = search_n(v.begin(), v.end(), 4, 2);
cout<<it-v.begin()<<endl;
return 0;
}

//Outputs:
//A : 10
//B : 3
//C : 1
//D : 15 <<<<<<<<<<<<<<<<<< a sequence of 4 "2" in a row was not found
//E : compilation error


/*
   ForwardIterator search_n (ForwardIterator first, ForwardIterator last,
                             Size count, const T& val);


Searches the range [first, last) for the first sequence of count identical elements, each equal to the given value.

1) Elements are compared using operator==.
3) Elements are compared using the given binary predicate p.
2,4) Same as (1,3), but executed according to policy. These overloads do not participate in overload resolution unless std::is_execution_policy_v<std::decay_t<ExecutionPolicy>> (until C++20) std::is_execution_policy_v<std::remove_cvref_t<ExecutionPolicy>> (since C++20) is true.



*/