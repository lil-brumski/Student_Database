#include <student.hpp>

int main(){
  Database *studentInfo = new Database();
  
  studentInfo->checkStudent("David Tamaratare Oghenebrume", 7, 17, 246, 24).admission().admissionList();
  
  delete studentInfo;
  studentInfo = nullptr;
  
  
  Database *studentInfo2 = new Database();
  
  studentInfo2->checkStudent("David Tamaralayefa", 8, 15, 206, 25).admission().admissionList();
  
  delete studentInfo2;
  studentInfo2 = nullptr;
  
  
  Database *studentInfo3 = new Database();
  
  studentInfo3->checkStudent("Roberto Brumski", 9, 18, 296, 40).admission().admissionList();
  
  delete studentInfo3;
  studentInfo3 = nullptr;
}