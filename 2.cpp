#include <iostream>

int insprime(int n);

int main(void) {
  std::cout << insprime(-2) << std::endl;
  std::cout << insprime(0) << std::endl;
  std::cout << insprime(2) << std::endl;
  std::cout << insprime(3) << std::endl;
  std::cout << insprime(4) << std::endl;
  std::cout << insprime(41) << std::endl;
  return 0;
}

int insprime(int n){
int N = 0;
int c = 0;
for(int ii = 2; ii <= n; ++ii){
  if(n % ii == 0){
    c++;
  }
}
if(c==1){
  N = 1;
}
return N;
}
