**Student_Database**

* This project is mainly for improving on my C++ knowledge. 

* It's supposed to be an admission system that admits students based on their qualifications.

* Download this project using `$ git clone https://github.com/lil-brumski/Student_Database.git` inside any working terminal/command line.

* `$ cd Student_Database/`

* `$ mkdir build/`

* `$ cd build/`

* `$ cmake ..`

* `$ make`

* `$ chmod +x student.o`

* `$ ./student.o`

* An `admission-list.txt` file will be automatically created in the parent directory. This file contains the admission list.

* Documentation is located [here](https://github.com/lil-brumski/Student_Database/tree/main/docs).

* Check out the test codes in [tests/](https://github.com/lil-brumski/Student_Database/tree/main/tests) especially the [main.cpp](https://github.com/lil-brumski/Student_Database/blob/main/tests%2Fmain.cpp) that selects qualified candidates from the [candidate-list.txt](https://github.com/lil-brumski/Student_Database/blob/main/tests%2Fcandidate-list.txt) file. The main.cpp file automatically generates the O'level, age, JAMB score and POST UTME score for each name. It them selects those qualified and creates a profile for them in the created `admission-list.txt` file.

* Made by David Tamaratare Oghenebrume.