### Feedback for Lab 13

Run on April 25, 18:20:27 PM.

+ :x:  Run git ls-remote to check for existence of specific branch- Branch devel not found

+ :leftwards_arrow_with_hook:  Checkout devel branch. (Test not run because of an earlier failing test)


#### Necessary Files and Structure

+ :leftwards_arrow_with_hook:  Check that directory "project" exists. (Test not run because of an earlier failing test)

+ :leftwards_arrow_with_hook:  Check that directory "project/bin" exists. (Test not run because of an earlier failing test)

+ :leftwards_arrow_with_hook:  Check that directory "project/docs" exists. (Test not run because of an earlier failing test)

+ :leftwards_arrow_with_hook:  Check that directory "project/src" exists. (Test not run because of an earlier failing test)

+ :leftwards_arrow_with_hook:  Check that directory "project/tests" exists. (Test not run because of an earlier failing test)

+ :leftwards_arrow_with_hook:  Check that directory "project/web" exists. (Test not run because of an earlier failing test)

+ :leftwards_arrow_with_hook:  Check that file "project/Makefile" exists. (Test not run because of an earlier failing test)

---


#### Compile Simulation and Tests

+ :heavy_check_mark:  Change into directory "project".

+ :heavy_check_mark:  Copy directory "Files for correct version".



+ :x:  Check that make  compiles.

    Make compile fails with errors:.
<pre>mkdir -p /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/obj
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/obj/delivery_simulation.d -MP -MT /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/obj/delivery_simulation.o -std=c++11 -g -fPIC  -I.. -I/project/grades/Spring-2021/csci3081/dependencies/include -Isrc -I. -I/project/grades/Spring-2021/csci3081/dependencies/include -Iinclude -I. src/delivery_simulation.cc
make: /soft/gcc/7.1.0/Linux_x86_64/bin/g++: Command not found
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/obj/main.d -MP -MT /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/obj/main.o -std=c++11 -g -fPIC  -I.. -I/project/grades/Spring-2021/csci3081/dependencies/include -Isrc -I. -I/project/grades/Spring-2021/csci3081/dependencies/include -Iinclude -I. src/main.cc
make: /soft/gcc/7.1.0/Linux_x86_64/bin/g++: Command not found
make: *** [Makefile:29: /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/obj/delivery_simulation.o] Error 127
make: *** Waiting for unfinished jobs....
make: *** [Makefile:29: /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/obj/main.o] Error 127
mkdir -p /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/lib
mkdir -p /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/bin
</pre>



+ :leftwards_arrow_with_hook:  Check that make test compiles. (Test not run because of an earlier failing test)

+ :leftwards_arrow_with_hook:  Dynamic Check that file exists. (Test not run because of an earlier failing test)

+ :leftwards_arrow_with_hook:  Dynamic Check that file exists. (Test not run because of an earlier failing test)

---

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Change into directory "..".


#### Checkout to branch

+ :heavy_check_mark:  Run git ls-remote to check for existence of specific branch- Branch master found

+ :heavy_check_mark:  Checkout master branch.




#### Necessary Files and Structure

+ :heavy_check_mark:  Check that directory "project" exists.

+ :heavy_check_mark:  Check that directory "project/bin" exists.

+ :heavy_check_mark:  Check that directory "project/docs" exists.

+ :heavy_check_mark:  Check that directory "project/src" exists.

+ :heavy_check_mark:  Check that directory "project/tests" exists.

+ :heavy_check_mark:  Check that directory "project/web" exists.

+ :heavy_check_mark:  Check that file "project/Makefile" exists.

---


#### Compile Simulation and Tests

+ :heavy_check_mark:  Change into directory "project".

+ :heavy_check_mark:  Copy directory "Files for correct version".



+ :x:  Check that make  compiles.

    Make compile fails with errors:.
<pre>mkdir -p /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/obj
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/obj/delivery_simulation.d -MP -MT /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/obj/delivery_simulation.o -std=c++11 -g -fPIC  -I.. -I/project/grades/Spring-2021/csci3081/dependencies/include -Isrc -I. -I/project/grades/Spring-2021/csci3081/dependencies/include -Iinclude -I. src/delivery_simulation.cc
make: /soft/gcc/7.1.0/Linux_x86_64/bin/g++: Command not found
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/obj/main.d -MP -MT /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/obj/main.o -std=c++11 -g -fPIC  -I.. -I/project/grades/Spring-2021/csci3081/dependencies/include -Isrc -I. -I/project/grades/Spring-2021/csci3081/dependencies/include -Iinclude -I. src/main.cc
make: /soft/gcc/7.1.0/Linux_x86_64/bin/g++: Command not found
make: *** [Makefile:29: /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/obj/delivery_simulation.o] Error 127
make: *** Waiting for unfinished jobs....
make: *** [Makefile:29: /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/obj/main.o] Error 127
mkdir -p /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/lib
mkdir -p /project/grades/Spring-2021/csci3081/student-repos/Lab_13_Feedback/repo-iter3-10-27-build/bin
</pre>



+ :leftwards_arrow_with_hook:  Check that make test compiles. (Test not run because of an earlier failing test)

+ :leftwards_arrow_with_hook:  Dynamic Check that file exists. (Test not run because of an earlier failing test)

+ :leftwards_arrow_with_hook:  Dynamic Check that file exists. (Test not run because of an earlier failing test)

---

+ :heavy_check_mark:  Check that make clean compiles.



---

---

