#ifndef CYCLINDER_H
#define CYCLINDER_H

#include "constants.h"

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
      return std::numbers::pi * baseRadius * baseRadius * height;
    }
  int example {}; // Members are private by default
};

#endif