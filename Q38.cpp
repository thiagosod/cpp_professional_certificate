#include <iostream>
using namespace std;
int main()
{
cout.setf(ios::hex, ios::basefield);
cout<<100<<" ";
cout.flags(ios::showbase);
cout<<100<<" ";
return 0;
}

//Outputs
//A : 64 64
//B : 64 0x64
//C : 0x64 0x64
//D : 64 100 <<<<<<
//E : compilation error