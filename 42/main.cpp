#include <concepts>
#include <iostream>
#include <numbers>


/* classes
   https://en.cppreference.com/w/cpp/language/class 
   see more in project 36*/

using std::cout; using std::endl;
using std::numbers::pi;

class Cyclinder {
  public :
    // Cyclinder() = default;
    Cyclinder() {
      baseRadius = 2.0;
      height = 2.0;
    }
    Cyclinder(double radiusParam, double heightParam) {
      baseRadius = radiusParam;
      height = heightParam;
    }
    virtual ~Cyclinder() {};
    double baseRadius{1.0};
    double height {1.0};
    double getBaseRadius() const { // const when the function doesnt modify any state of the class.
      return baseRadius;
    }
    double getHeight() const {
      return height;
    }
    void setBaseRadius(double radiusParam) {
      baseRadius = radiusParam;
    }
    void setHeight(double heightParam) {
      height = heightParam;
      // this->height = heightParam;
    }
    // void* pSetHeight(double heightParam) {
    //   *(this->height) = heightParam;
    //   return *this;
    // }
    // void& pSetHeight(double heightParam) {
    //   *(this->height) = heightParam;
    //   return *this;
    // }
  public :
    double volume() {
      return pi * baseRadius * baseRadius * height;
    }
  int example {}; // Members are private by default
};

/* 
  https://en.cppreference.com/w/cpp/language/virtual
  https://en.cppreference.com/book/intro/abstract_classes
  https://en.cppreference.com/w/cpp/language/friend
  https://www.fluentcpp.com/2020/02/21/virtual-final-and-override-in-cpp/
  https://www.tutorialspoint.com/pure-virtual-functions-and-abstract-classes-in-cplusplus
*/

int main(int argc, char **argv) {
  /* class instances */
  Cyclinder cyclinder;
  cout << "volume c1 : " << cyclinder.volume() << endl;

  cyclinder.baseRadius = 3.0;
  cyclinder.height = 2;
  cout << "volume c1 : " << cyclinder.volume() << endl;

  Cyclinder cyclinder2;
  cout << "volume c2 : " << cyclinder2.volume() << endl;
  
  // Cyclinder* pCyclider2 = &cyclinder2;
  // Cyclinder* pCyclider2 = new Cyclinder(100, 2);
  // (*pCyclider2).volume();
  // cyclider->volume()->other();
  // pCyclider2->pVolume()->pOther(); // pointer version
  // delete pCyclider;
  // delete pCyclider2;

  cout << "volume c2 example : " << cyclinder2.example << endl;

  Cyclinder c3(4, 6);
  cout << "volume c3 : " << c3.volume() << endl;
  
  // See project 47 for destructors.
  // Cyclinder* c4(6, 8); error
  Cyclinder* c4 = new Cyclinder(6, 8);
  delete c4;

  return 0;
}