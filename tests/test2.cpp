#include <Student_Database/student.hpp>
#include <memory>

int main(){
    
    Database studentInfo;
    
    //First Candidate
    studentInfo.checkStudent("David Tamaratare Oghenebrume", 7, 17, 246, 24);
    studentInfo.admission();  
    studentInfo.admissionList();
    
    //Second Candidate
    studentInfo.checkStudent("David Tamaralayefa", 8, 15, 206, 25);
    studentInfo.admission();
    studentInfo.admissionList();
    
    //Third Candidate
    studentInfo.checkStudent("Roberto Brumski", 9, 18, 296, 40);
    studentInfo.admission();
    studentInfo.admissionList();
  
}