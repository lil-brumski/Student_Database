#include <string>
#include <iostream>
#include <fstream>

class Database{ 
private:
  std::string name;
  int olevel_credits;
  int age;
  int jambScore;
  int postUtmeScore;
  int aggregate;
  bool admitted;
  
public:
  Database& checkStudent(std::string name, int olevel_credits, int age, int jambScore, int postUtmeScore);
  
  Database& admission();
  
  Database& admissionList();
};