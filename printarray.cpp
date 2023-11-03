#include <iostream>

void printArray(int numbers[], int size);

void printArray(int numbers[], int size){
  std::string strArray = "[";
  for(int i = 0; i < size; i++){
    strArray += std::to_string(numbers[i]);
    if(i != size - 1){
      strArray += ", ";
    }
  }
  strArray += "]";
  std::cout << strArray;
}

int main(){
  int numbers[] = {1, 2, 3};
  printArray(numbers, 3);
  return 0;
}
