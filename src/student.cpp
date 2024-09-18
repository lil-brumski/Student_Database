#include <Student_Database/student.hpp>

Database& Database::checkStudent(std::string name, int olevel_credits, int age, int jambScore, int postUtmeScore){
  this->name = name;
  this->olevel_credits = olevel_credits;
  this->age = age;
  this->jambScore = jambScore;
  this->postUtmeScore = postUtmeScore;
  this->aggregate = ((this->jambScore / 8) + this->postUtmeScore);
  this->admitted = false;
  
  return *this;
}

Database& Database::admission(){
  if(olevel_credits >= 5 && age >= 15 && aggregate >= 50){
    std::cout << "You have been admitted " << name << "!" << std::endl;
    admitted = true;
  }
  else{
    std::cout << "Sorry " << name << ", no admission for you.\n";
  }
  
  return *this;
}

Database& Database::admissionList(){
  std::ofstream File("../admission-list.txt", std::ios::app);
  
  std::ifstream Read("../admission-list.txt");
  
  std::string admittedCandidates = "Name: " + name + ", Age: " + std::to_string(age) + ", Olevel Credits: " + std::to_string(olevel_credits) + ", Jamb Score: " + std::to_string(jambScore) + ", Post UTME Score: " + std::to_string(postUtmeScore) + ", Aggregate Score: " + std::to_string(aggregate) + std::string(".");
  
  std::string check;
  
  while(std::getline(Read, check)){    
    if(check == admittedCandidates){
      std::cout << "Error: Profile already exists!\n";
      admitted = false;
    }     
  }  
  Read.close();
  
  
  if(admitted == true){
    File << admittedCandidates << std::endl;
    File << std::endl;
  }
    
  return *this;
}