#include <Student_Database/student.hpp>
#include <memory>
#include <random>
#include <chrono>
#include <thread>

int main(){
  
  std::ifstream NAMES{"../tests/candidate-list.txt"};
  
  //For storing the names of the values gotten from the NAME object.
  std::string collector, individual_names;
  
  //For generating random numbers.
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<int> r_olevel_credits(2, 9), r_age(14, 23), r_jamb_score(120, 360), r_post_utme(5, 46);
  
  //These values store the generated random numbers.
  int v_olevel_credits{}, v_age{}, v_jamb_score{}, v_post_utme{};
  
  if(!NAMES.is_open()){
    std::cout << "Can\'t open file, try again.\n";
  }
  else{//else-begins.      
      while(std::getline(NAMES, collector)){//While Loop.      
        auto studentInfo = std::make_unique<Database>();
        
        individual_names = collector;
      
        v_olevel_credits = r_olevel_credits(gen);
        v_age = r_age(gen);
        v_jamb_score = r_jamb_score(gen);
        v_post_utme = r_post_utme(gen);
    
        studentInfo->checkStudent(individual_names, v_olevel_credits, v_age, v_jamb_score, v_post_utme).admission().admissionList();
      
     }//While Loop.  
    
    std::cout << "Successive screening!\n";
  }//else-ends.
  
  
  
}