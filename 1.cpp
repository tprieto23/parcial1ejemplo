#include <iostream>
#include <cmath>

int F(int P, int i, int n);

int main(int argc, char **argv) {
  int P, i, n;
  std::cout << "Dinero invertido: ";
  std::cin >> P;
  std::cout << "Interés: ";
  std::cin >> i;
  std::cout << "Periodos: ";
  std::cin >> n;
  std::cout << F(P, i, n);
  return 0;
}

int F(int P, int i, int n){
  return P*(std::pow((1 + i), n));
}