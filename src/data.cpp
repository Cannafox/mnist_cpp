#include "../include/main.h"

class Data {
public:
  std::string path = "data/";
  Data(std::string p) { path = p; }

  std::string getPath() { return path; }
};
