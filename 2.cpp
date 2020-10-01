#include <iostream>

int insprime(int n);

int main(void) {
  std::cout << insprime(-2) << std::endl;
  std::cout << insprime(-2) << std::endl;
  std::cout << insprime(-2) << std::endl;
  std::cout << insprime(-2) << std::endl;
  std::cout << insprime(-2) << std::endl;
  std::cout << insprime(-2) << std::endl;
  return 0;
}

int insprime(int n){
  int N = 1;
  for(int ii = 2;ii < n; ++ii){
    if(n % ii = 0){
      N = 0;
      ii = n;
    }
  }
return N;
}