#include <iostream>

int main() {
  int num1 = 15;
  int num2 = 017;
  int num3 = 0x0f;
  int num4 = 0b00001111;

  std::cout << "number1 : " << num1 << std::endl;
  std::cout << "number2 : " << num2 << std::endl;
  std::cout << "number3 : " << num3 << std::endl;
  std::cout << "number4 : " << num4 << std::endl;

  // int newNumber { doesntExist }; // compile error

  // int narrowingConversion {2.9}; // compile error

  int elephantCount; // may contain random garbage value . WARNING
  int lionCount{}; // initializes to zero
  int dogCount{10};
  int catCount{15};
  int domesticatedAnimals { dogCount + catCount };

  std::cout << "elephant count : " << elephantCount << std::endl;
  std::cout << "lion count : " << lionCount << std::endl;
  std::cout << "dog count : " << dogCount << std::endl;
  std::cout << "cat count : " << catCount << std::endl;
  std::cout << "domesticated animal count : " << domesticatedAnimals << std::endl;

  // functional initialization
  int appleCount(5);
  int orangeCount(10);
  int fruitCount (appleCount + orangeCount);
  // information lost. less safe than braced initializers
  int narrowingConversionFunctional (2.9);

  std::cout << "apple count : " << appleCount << std::endl;
  std::cout << "orange count : " << orangeCount << std::endl;
  std::cout << "narrowing conversion : " << narrowingConversionFunctional << std::endl;

  int bikeCount = 2;
  int truckCount = 7;
  int vehicleCount = bikeCount + truckCount;
  int narrowingConversionAssignment = 2.9;

  std::cout << "bike count : " << bikeCount << std::endl;
  std::cout << "truck count : " << truckCount << std::endl;
  std::cout << "vehicle count : " << vehicleCount << std::endl;
  std::cout << "narrowing conversion : " << narrowingConversionAssignment << std::endl;

  // check the size with sizeof
  std::cout << "sizeof int : " << sizeof(int) << std::endl;
  std::cout << "sizeof truckCount : " << sizeof(truckCount) << std::endl;

  short shortVar {-32768}; // 2 bytes
  short int shortInt {455};
  signed short signedShort {122};
  signed short int signedShortInt {-456};
  unsigned short int unsignedShortInt {456};

  int intVar {55}; // 4 bytes
  signed signedVar {66};
  signed int signedInt {77};
  unsigned int unsignedInt{77};

  long longVar {88}; // 4 or 8 bytes
  long int longInt {33};
  signed long signedLong {44};
  signed long int signedLongInt {44};
  unsigned long int unsignedLongInt {44};

  long long longLong {888}; // 8 bytes
  long long int longLongInt {999};
  signed long long signedLongLong {444};
  signed long long int signedLongLongInt{1234};
  unsigned long long int unsignedLongLongInt{1234};

  unsigned int value3 {4};
  // unsigned int value4 {-5}; // compile error

  std::cout << "short variable : " << shortVar << " , size : "
    << sizeof (short) << " bytes" << std::endl;
  std::cout << "short int : " << shortInt << " , size : "
    << sizeof (short int) << " bytes" << std::endl;
  std::cout << "signed short : " << signedShort 
    << " , size : " << sizeof (signed short) << " bytes" << std::endl;
  std::cout << "unsigned short int : " << unsignedShortInt
    << " , size : " << sizeof (unsigned short int) << " bytes" << std::endl;

  std::cout << "--------------" << std::endl;

  std::cout << "int variable : " << intVar << " , size : "
    << sizeof (int) << " bytes" << std::endl;
  std::cout << "signed variable " << signedVar << ", size : "
    << sizeof (signed) << " bytes" << std::endl;
  std::cout << "signed int : " << signedInt << " , size : "
    << sizeof (signed int) << " bytes" << std::endl;
  std::cout << "unsigned int : " << unsignedInt << " , size : "
    << sizeof (unsigned int) << " bytes" << std::endl;

  std::cout << "--------------" << std::endl;

  std::cout << "long long : " << longLong << " , size : "
    << sizeof (long long) << " bytes" << std::endl;
  std::cout << "long long int : " << longLongInt << " , size : "
    << sizeof (signed long long) << " bytes" << std::endl;
  std::cout << "signed long long int : " << signedLongLongInt << " , size : "
    << sizeof (signed long long int) << " bytes" << std::endl;
  std::cout << "unsigned long long int : " << unsignedLongLongInt << " , size : "
    << sizeof (unsigned long long int) << " bytes" << std::endl;

  std::cout << "--------------" << std::endl;

  return 0;
}