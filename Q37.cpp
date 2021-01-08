#include <iostream>
using namespace std;
int main()
{
cout<<100<<" ";
cout.setf(ios::hex);
cout<<100<<"";
return 0;
}

//Outputs
//A : 100 64
//B : 100 0x64
//C : 0x64 0x64
//D : 64 0x64
//E : 100 100 <<<< it is not activate yet. Missing std::cout.setf ( std::ios::hex, std::ios::basefield ); 
