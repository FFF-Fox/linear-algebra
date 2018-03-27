#ifndef VECTOR_H
#define VECTOR_H
#include <functional>


using namespace std;
class Vector
{
  // private
  double* v;

  public:
    int length;

    Vector(int size);


    string toString();

    void set(int pos, double value);

    double get(int pos);

    void add(Vector w);

    Vector slice(int start, int end);

    // void transform(double (*func)(double));
    void transform(function<double (double)>);

    Vector map(function<double (double)>);

    void foreach(function<void (double)>);
};

#endif // VECTOR_H
