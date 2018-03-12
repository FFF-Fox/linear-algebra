#include <iostream>
#include "Vector.h"
#include "vectormath.h"

using namespace std;

double square(double x)
{
  return x*x;
}

double cube(double x)
{
  return x*x*x;
}

void myPrint(double x)
{
  cout << to_string(x) << endl;
}

int main()
{
  int n = 10;
  Vector v0 = zeros(n);
  Vector v1 = ones(n);
  Vector v2(n);
  for (int i=0; i<n; i++) { v2.set(i,i*1.0); }

  cout << "v2:\n" << v2.toString() << endl;
  Vector v3 = subtract(multiply(add(v1, v1), v0), v1);
  cout << "v3:\n" << v3.toString() << endl;

  Vector v4 = v2.slice(2,150);
  cout << "v4:\n" << v4.toString() << endl;

  v4.transform(square);
  cout << "v4 transformed:\n" << v4.toString() << endl;

  Vector v5 = v4.map(cube);
  cout << "v5:\n" << v5.toString() << endl;

  cout << "printing v5 using foreach:" << endl;
  v5.foreach(myPrint);

  double d1 = dot(v1,v1);
  double d2 = dot(v1,v0);

  double s = sum(v1);
  double m = mean(v2);
  cout << "dot(v1,v1) = " << std::to_string(d1) << endl;
  cout << "dot(v1,v0) = " << std::to_string(d2) << endl;
  cout << "sum(v1) = " << std::to_string(s) << endl;
  cout << "mean(v2) = " << std::to_string(m) << endl;

  return 0;
}
