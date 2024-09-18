#include <Student_Database/student.hpp>
#include <memory>

int main(){
  
  {
    auto studentInfo = std::make_unique<Database>();
    
    studentInfo->checkStudent("David Tamaratare Oghenebrume", 7, 17, 246, 24).admission().admissionList();
    
    studentInfo->checkStudent("David Tamaralayefa", 8, 15, 206, 25).admission().admissionList();
    
    studentInfo->checkStudent("Roberto Brumski", 9, 18, 296, 40).admission().admissionList();
  }
  
}