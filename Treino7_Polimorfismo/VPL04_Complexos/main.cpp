#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <utility>  // Inclui std::pair.

#include "complexo.h"

using namespace std;

string Concatenar (string a, string b)
{
  return a.append(b);
}

string Concatenar (string a, double b)
{
  stringstream ss;
  ss << a;
  ss << b;
  return ss.str();
}

string Concatenar(string a, Complexo b)
{
  stringstream ss;
  ss << a;
  ss << "(" << b.real() << " " << b.imag() << ")" << endl;
  return ss.str();
}

string Concatenar (double a, string b)
{

}

int main()
{
  string s1 = "leo";
  string s2 = "soares";
  double d1 = 19.8;
  Complexo c1(6, -8);

  cout << Concatenar(s1,s2) << endl;
  cout << Concatenar(s1,d1) << endl;
  cout << Concatenar(s1,c1) << endl;
}