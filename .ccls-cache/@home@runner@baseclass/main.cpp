#include <iostream>
using namespace std;

class A 
{
public:
void Afn()
{
  cout << "A\n";
}
};
class B : public A
{
public:
void Bfn()
{
  cout << "B\n";
}
};
class C : virtual public A
{

public:
void Cfn()
{
  cout << "C\n";
}
};
class D :public B, public C
{
public:
void Dfn(){
  cout << "D\n";
}
};

int main() {
    D d;
  d.Afn();
  d.Bfn();
  d.Cfn();
  d.Dfn();
    return 0;
}