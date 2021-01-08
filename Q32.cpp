#include <vector>
using namespace std;
int main()
{
std::vector<int> v1;
v1.push_back(10);
return 0;
}

//A : compilation fails due to error in line 2
//B : compilation fails due to error in line 5
//C : exception is thrown during run time
//D : code compiles and executes successfully <<<<<