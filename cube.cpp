#include <iostream>

double cube(double n);

double cube(double n){
  return n * n * n;
}

int main(){
  std::cout << "Please enter a number: ";
  double num;
  std::cin >> num;
  std::cout << "The cube of this number is " << cube(num);
  return 0;
}
