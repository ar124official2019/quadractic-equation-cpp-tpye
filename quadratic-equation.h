#ifndef __QUADRATIC_H__
#define __QUADRATIC_H__

/* 
  # Algebra
  # Mathematics

  Qudadratic Equation Type for C++
*/
class QuadraticEquation {
  protected:
    double coef_a;
    double coef_b;
    double coef_c;

  public:
    QuadraticEquation(); // default constructor
    QuadraticEquation(const QuadraticEquation *); // copy constructor
    QuadraticEquation(double, double, double); // filling constructor

    QuadraticEquation operator+(QuadraticEquation); // overload '+' operator
    QuadraticEquation operator-(QuadraticEquation); // overload '-' operator
    QuadraticEquation operator++(); // overload '++' operator - prefix
    QuadraticEquation operator--(); // overload '--' operator - prefix
    QuadraticEquation operator++(int); // overload '++' operator - postfix
    QuadraticEquation operator--(int); // overload '--' operator - postfix
    bool operator==(QuadraticEquation) const; // overload equality operator

    void pretty_print(bool = false) const; // pretty print the equation
    double get_root(bool = false) const; // get the value of equation root

    ~QuadraticEquation(); // destructor
};

#endif // __QUADRATIC_H__