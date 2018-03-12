#include <iostream>
#include <stdlib.h>
#include "Vector.h"

using namespace std;

Vector zeros(int size)
{
  Vector V(size);
  for (int i=0; i<V.length; i++) { V.set(i, 0.0); }
  return V;
}

Vector ones(int size)
{
  Vector V(size);
  for (int i=0; i<V.length; i++) { V.set(i, 1.0); }
  return V;
}

double dot(Vector v1, Vector v2)
{
  if (v1.length != v2.length) { throw ; }

  double result = 0.0;

  int n = v1.length;
  for (int i=0; i<n; i++)
  {
    result += v1.get(i) * v2.get(i);
  }

  return result;
}

double sum(Vector v)
{
  double result = 0.0;
  int n = v.length;

  for (int i=0; i<n; i++) { result += v.get(i); }

  return result;
}

double mean(Vector v)
{
  int n = v.length;
  double result = sum(v) / n;

  return result;
}

Vector add(Vector v1, Vector v2)
{
  int n = v1.length;
  if (n != v2.length) { throw; }

  Vector out(n);

  for (int i=0; i<n; i++)
  {
    double value = v1.get(i) + v2.get(i);
    out.set(i, value);
  }

  return out;
}

Vector subtract(Vector v1, Vector v2)
{
  int n = v1.length;
  if (n != v2.length) { throw; }

  Vector out(n);

  for (int i=0; i<n; i++)
  {
    double value = v1.get(i) - v2.get(i);
    out.set(i, value);
  }

  return out;
}

Vector multiply(Vector v1, Vector v2)
{
  int n = v1.length;
  if (n != v2.length) { throw; }

  Vector out(n);

  for (int i=0; i<n; i++)
  {
    double value = v1.get(i) * v2.get(i);
    out.set(i, value);
  }

  return out;
}
