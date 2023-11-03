#include <iostream>

int main(int argc, char *argv[]){
  if(argc > 0){
    std::cout << "Program Name: " << argv[0] <<std::endl;
    std::string argOutput = "called with "+std::to_string(argc)+" arguments: ";
    for(int i = 1; i < argc; i++){
      argOutput += argv[i];
      if(i != argc - 1){
        argOutput += ", ";
      }
    }
    std::cout << argOutput;
  }
  return 0;
}
