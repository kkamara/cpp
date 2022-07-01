#ifndef PERSON_H
#define PERSON_H

/* declarations */

#include <iostream>

class Person{
  public :
    Person(const std::string& namesParam, int ageParam);

    void printInfo()const{
      std::cout << "name : " << fullName << " , age : " << age << std::endl;
    }
  private :
    std::string fullName;
    int age;
  public : 
    static int personCount;
};

#endif