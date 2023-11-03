#include <iostream>
#include <fstream>

void write(std::string s, std::string f);
std::string read(std::string f);

void write(std::string text, std::string filename){
  std::ofstream myFile(filename);
  myFile << text;
  myFile.close();
}

std::string read(std::string filename){
  std::string text;
  std::string content = "";
  std::ifstream myFile(filename);
  while(std::getline(myFile, text)){
    content += text;
    content += "\n";
  }
  myFile.close();
  return content;
}

int main(int argc, char *argv[]){
  if(argc > 1){
     std::string content = read(argv[1]);
     write(content, argv[2]);
  }else{
    std::cout << "[!] Requires two parameters\nUsage: [filename1] [filename2]";
  }
  return 0;
}
