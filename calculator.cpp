#include <iostream>

double SafeDivide(double a, double b) {
if (b == 0) {
std::cerr <<"Error: division by zero.">>
return 0;
}
return a / b;
}
