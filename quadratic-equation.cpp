#include <iostream>
#include <math.h>
#include "quadratic-equation.h"

QuadraticEquation::QuadraticEquation() {
  this->coef_a = 0;
  this->coef_b = 0;
  this->coef_c = 0;
}

// copy constructor
QuadraticEquation::QuadraticEquation(const QuadraticEquation* existing_equation) {
  this->coef_a = existing_equation->coef_a;
  this->coef_b = existing_equation->coef_b;
  this->coef_c = existing_equation->coef_c;
}

// quick filling constructor
QuadraticEquation::QuadraticEquation(double coef_a, double coef_b, double coef_c) {
  this->coef_a = coef_a;
  this->coef_b = coef_b;
  this->coef_c = coef_c;
}

// add given polynomial to calling polynomial
QuadraticEquation QuadraticEquation::operator+(const QuadraticEquation other_equation) {
  QuadraticEquation*temp = new QuadraticEquation(this->coef_a + other_equation.coef_a,
    this->coef_b + other_equation.coef_b,
    this->coef_c + other_equation.coef_c);

  return *temp;
}

// subtract given polynomial from calling polynomial
QuadraticEquation QuadraticEquation::operator-(const QuadraticEquation other_equation) {
  QuadraticEquation *temp = 
    new QuadraticEquation(this->coef_a - other_equation.coef_a,
      this->coef_b - other_equation.coef_b,
      this->coef_c - other_equation.coef_c);

  return *temp;
}

// prefix increment
QuadraticEquation QuadraticEquation::operator++() {
  this->coef_a++;
  this->coef_b++;
  this->coef_c++;

  return *this;
}

// postfix increment
QuadraticEquation QuadraticEquation::operator++(int) { 
  QuadraticEquation temp = new QuadraticEquation(this);

  this->coef_a++;
  this->coef_b++;
  this->coef_c++;

  return temp;
}

// prefix decrement
QuadraticEquation QuadraticEquation::operator--() {
  this->coef_a--;
  this->coef_b--;
  this->coef_c--;

  return *this;
}

// postfix decrement
QuadraticEquation QuadraticEquation::operator--(int) { 
  QuadraticEquation temp = new QuadraticEquation(this);

  this->coef_a--;
  this->coef_b--;
  this->coef_c--;

  return temp;
}

// compare operator
bool QuadraticEquation::operator==(QuadraticEquation other_equation) const {
  return this->coef_a == other_equation.coef_a &&
      this->coef_b == other_equation.coef_b &&
      this->coef_c == other_equation.coef_c;
}

void QuadraticEquation::pretty_print(bool trailing_new_line) const {
  if (this->coef_b != 0)
    std::cout << this->coef_a << "x ";

  if (this->coef_b != 0) {
    if (this->coef_b > 0) {
      std::cout << "+ "
            << this->coef_b << "x^2 ";
    } else {
      std::cout << "- "
            << this->coef_b * -1 << "x^2 ";
    }
  }

  if (this->coef_c != 0) {
    if (this->coef_c > 0)
      std::cout << "+ ";
    std::cout << this->coef_c;
  }

  if (trailing_new_line)
    std::cout << "\n";
}

/* get the root solution of the equation either first or second
  if which_root is true, return 2nd else return first
*/
double QuadraticEquation::get_root(bool which_root) const {
  double dividend = 0;

  if (!which_root) {
    dividend = (-1 * this->coef_b) + 
        sqrt((this->coef_b * this->coef_b) - 
          (4 * this->coef_a * this->coef_c));
  } else {
    dividend = (-1 * coef_b) - 
        sqrt((this->coef_b * this->coef_b) -
          (4 * this->coef_a * this->coef_c));
  }

  return dividend / (2 * this->coef_a);
}

QuadraticEquation::~QuadraticEquation() { 
  // do cleanup here, if required
}