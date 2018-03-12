#include <iostream>
#include <stdlib.h>
#include "Vector.h"

using namespace std;

Vector::Vector(int size)
{
  length = size;
  v = (double*) malloc(length * sizeof(double));
}

string Vector::toString()
{
  string out = "[";
  for (int i = 0; i < length; i++)
  {
    out += "[";
    out += std::to_string(v[i]);
    out += "]";
    if (i+1 != length)
    {
      out += ",\n";
    }
  }

  out += "]";

  return out;
}

void Vector::set(int i, double value)
{
  v[i] = value;
}

double Vector::get(int i)
{
  return v[i];
}

void Vector::add(Vector w)
{
  int n = w.length;
  if (length != n) { throw; }
  for (int i=0; i<n; i++) { v[i] = v[i] + w.get(i); }
}

Vector Vector::slice(int start, int end)
{
  int n = end - start;
  if (n <= 0) { throw; }
  if (n > length) { n = length - start; }

  Vector out(n);
  for (int i=0; i<n; i++) {
    out.set(i, v[start+i]);
  }

  return out;
}

void Vector::transform(double (*func)(double))
{
  for (int i=0; i<length; i++)
  {
    v[i] = (*func)(v[i]);
  }
}

Vector Vector::map(double (*func)(double))
{
  Vector out(length);

  for (int i=0; i<length; i++)
  {
    double value = (*func)(v[i]);
    out.set(i,value);
  }

  return out;
}

void Vector::foreach(void (*func)(double))
{
  for (int i=0; i<length; i++) { (*func)(v[i]); }
}
