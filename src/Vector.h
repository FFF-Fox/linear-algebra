#ifndef VECTOR_H
#define VECTOR_H

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

    void transform(double (*func)(double));

    Vector map(double (*func)(double));

    void foreach(void (*func)(double));
};

#endif // VECTOR_H
