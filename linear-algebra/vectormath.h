#ifndef VECTORMATH_H
#define VECTORMATH_H

using namespace std;

Vector zeros(int size);
Vector ones(int size);

double square(double x);

double dot(Vector v1, Vector v2);
double sum(Vector v);
double mean(Vector v);
double var(Vector v);

Vector add(Vector v1, Vector v2);
Vector subtract(Vector v1, Vector v2);
Vector multiply(Vector v1, Vector v2);
// Vector divide(Vector v1, Vector v2): How to handle case of division by 0???

#endif // VECTORMATH_H
