* There is one class inside the `student.hpp` header file with three methods: `checkStudent()`, `admission()` and `admissionList()`.

* The `checkStudent()` method takes in five parameters: name, O'level credits, age, JAMB score and Post UTME score in that order. This method serves as a setter for this class.

* The `admission()` method checks if the values set in the setter function meet the requirements for admission and outputs the outcome. This method serves as a getter for this class.

* The `admissionList()` outputs the admitted profiles to an `admission-list.txt` file.

* To use these methods, an object has to be instantiated or a smart pointer as shown [here](https://github.com/lil-brumski/Student_Database/blob/main/test%2Fmain.cpp).

* You don't have to chain the methods or use smart pointers [like I did in the test/main.cpp file](https://github.com/lil-brumski/Student_Database/blob/main/test%2Fmain.cpp), you can separate them like in [this one](https://github.com/lil-brumski/Student_Database/blob/main/test%2Ftest2.cpp)