//This is the main test file for this project.
//Made by David Tamaratare Oghenebrume
//@lil-brumski on GitHub.

#include <student.hpp>
#include <memory>
#include <random>

int main(){
  
  //This object reads from a file.
  std::ifstream NAMES("../tests/test1/candidate-list.txt");
  
  //For storing the names of the values gotten from the NAME object.
  std::string collector, individual_names;
  
  //For generating random numbers.
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<int> r_olevel_credits(2, 9), r_age(14, 23), r_jamb_score(120, 360), r_post_utme(5, 46);
  
  //These values store the generated random numbers.
  int v_olevel_credits{}, v_age{}, v_jamb_score{}, v_post_utme{};
  
  //Checks if the file isn't open.
  if(!NAMES.is_open()){
    std::cerr << "Can\'t open file, try again.\n";
  }
  //If the file is open the while loop will run.
  else{//else-begins.      
      while(std::getline(NAMES, collector)){//While Loop.    
        //This is a smart pointer for those that may not know.        
        auto studentInfo = std::make_unique<Database>();
        
        //Sets the 'individual_names' variable to each line {name} in the file that's being read from.
        individual_names = collector;
      
        v_olevel_credits = r_olevel_credits(gen);
        
        v_age = r_age(gen);
        
        v_jamb_score = r_jamb_score(gen);
        
        v_post_utme = r_post_utme(gen);
    
        studentInfo->checkStudent(individual_names, v_olevel_credits, v_age, v_jamb_score, v_post_utme);
        
        studentInfo->admission();
        
        studentInfo->admissionList();
      
     }//While Loop.  
     NAMES.close();
    
   std::cout << "Successive screening!\n";
  }//else-ends.
  
  
  
}