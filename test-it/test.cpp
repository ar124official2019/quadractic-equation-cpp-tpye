#include "../quadratic-equation.h"
#include <iostream>

using namespace std;

void test() {
  QuadraticEquation a = new QuadraticEquation(4, 8, 3);
  QuadraticEquation b = new QuadraticEquation(2, 14, 3);
  QuadraticEquation c = new QuadraticEquation(12, 8, 4);

  QuadraticEquation sum = a + b;
  QuadraticEquation sum1 = b + c;
  QuadraticEquation sub = a - b;
  QuadraticEquation sub1 = b - c;

  cout << "QuadraticEquation a\n\t";
  a.pretty_print();
  cout << endl << endl;

  cout << "QuadraticEquation b\n\t";
  b.pretty_print();
  cout << endl << endl;

  cout << "QuadraticEquation c\n\t";
  c.pretty_print();
  cout << endl << endl;

  cout << "------------------------------------------------\n";

  cout << "sum = a + b =>\n\t";
  sum.pretty_print();
  cout << endl << endl;

  cout << "sum1 = b + c =>\n\t";
  sum1.pretty_print();
  cout << endl << endl;

  cout << "sub = a - b =>\n\t";
  sub.pretty_print();
  cout << endl << endl;

  cout << "sub1 = b - c =>\n\t";
  sub1.pretty_print();
  cout << endl << endl;

  cout << "------------------------------------------------\n";

  cout << "++sum\n\t";
  (++sum).pretty_print();
  cout << endl << endl;

  cout << "sum1++\n\t";
  (sum1++).pretty_print();
  cout << endl << endl;

  cout << "\tsum1\n\t";
  sum1.pretty_print();
  cout << endl << endl;

  cout << "------------------------------------------------\n";

  cout << "--sub\n\t";
  (--sub).pretty_print();
  cout << endl << endl;

  cout << "sub1--\n\t";
  (sub1--).pretty_print();
  cout << endl << endl;

  cout << "\tsub1\n\t";
  sub1.pretty_print();
  cout << endl << endl;

  cout << "------------------------------------------------\n";

  cout << "a == new QuadraticEquation (a)\n\t";
  if (a == new QuadraticEquation(a))
    cout << "True" << endl << endl;
  else
    cout << "False" << endl << endl;

  cout << "a == b\n\t";
  if (a == b)
    cout << "True" << endl << endl;
  else
    cout << "False" << endl << endl;

  cout << "------------------------------------------------\n";

  cout << "Solution of a\n\t";
  cout << "x = " << a.get_root() << ", x = " << a.get_root(1);
  cout << endl << endl;
  
  cout << "Solution of b\n\t";
  cout << "x = " << b.get_root() << ", x = " << b.get_root(1);
  cout << endl << endl;
  
  cout << "Solution of c\n\t";
  cout << "x = " << c.get_root() << ", x = " << c.get_root(1);
  cout << endl << endl;
}
