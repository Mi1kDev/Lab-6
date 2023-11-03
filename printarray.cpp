#include <iostream>

void printArray(int numbers[], int size);
void swap(int numbers[], int index1, int index2);

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

void swap(int numbers[], int index1, int index2){
  int temp = numbers[index1];
  numbers[index1] = numbers[index2];
  numbers[index2] = temp;
}

int main(){
  int numbers[] = {1, 2, 3};
  printArray(numbers, 3);
  swap(numbers, 0, 1);
  printArray(numbers, 3);
  return 0;
}
