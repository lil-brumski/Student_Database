//This is the definition file for this project.
//Made by David Tamaratare Oghenebrume
//@lil-brumski on GitHub.

#include <student.hpp>

//These functions have a data type 'Database&' instead of 'void' so that its function can be chained with other functions. It has to 'return *this' to make that possible.
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
  //If all conditions are true, admission will be given to the candidate.
  if(olevel_credits >= 5 && age >= 15 && jambScore >= 190 && aggregate >= 50){
    std::cout << name << " has been admitted!" << std::endl;
    //The 'admitted' variable will be set to 'true'.
    admitted = true;
  }
  else{
    std::cout << name << " was not admitted.\n";
  }
  
  return *this;
}

Database& Database::admissionList(){
  //This object writes to a file.
  std::ofstream File("../admission-list.txt", std::ios::app);
  
  //This object reads from that same file to make sure the same student doesn't get admitted more than once.
  std::ifstream Read("../admission-list.txt");
  
  //This variable stores the admitted user's details.
  std::string admittedCandidates = "Name: " + name + ", Age: " + std::to_string(age) + ", Olevel Credits: " + std::to_string(olevel_credits) + ", Jamb Score: " + std::to_string(jambScore) + ", Post UTME Score: " + std::to_string(postUtmeScore) + ", Aggregate Score: " + std::to_string(aggregate) + std::string(".");
  
  //This variable takes in each admitted candidate's details and checks if they were given admission more than once.
  std::string check;
  
  while(std::getline(Read, check)){    
    if(check == admittedCandidates){
      std::cout << "Error: Profile already exists!\n";
      admitted = false;
    }     
  }  
  Read.close();
  
  //If a student is admitted, their details get printed to the external file.
  if(admitted == true){
    File << admittedCandidates << std::endl;
    File << std::endl;
  }
    
  return *this;
}