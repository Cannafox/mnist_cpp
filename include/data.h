#include <iostream>

class Data {
protected:
  std::string path;

public:
  Data();
  Data(std::string p);

  std::string getPath();
};
