// ostream constructor
#include <iostream>     // std::cout, std::ostream, std::ios
#include <fstream>      // std::filebuf
#include <filesystem>


/* input / output
   https://cplusplus.com/doc/tutorial/files/
*/

namespace fs = std::filesystem;
int main () {
  std::filebuf fb;
  std::string path {fs::current_path()};
  path += "/45/test.txt";
  std::cout << path << std::endl;
  fb.open (path,std::ios::out);
  std::ostream os(&fb);
  os << "Test sentence\n";
  fb.close();
  return 0;
}