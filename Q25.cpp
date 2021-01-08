#include <iostream>
#include <deque>
#include <list>
#include <stack>
#include <vector>
using namespace std;

int main()
{
deque<int> mydeck;
list<int> mylist;
vector<int> myvector;
stack<int> first;//Line I
stack<int> second(mydeck);//Line II
stack<int> third(second);//Line III
stack<int, list<int>> fourth(mylist);//Line IV
stack<int, vector<int>> fifth(myvector);//Line V
return 0;
}

//Which stack initialization are correct? Choose all the options

//A : Line I  <<<
//B : Line II <<<<
//C : Line III <<<<
//D : Line IV <<<<<
//E : Line V <<<<<
