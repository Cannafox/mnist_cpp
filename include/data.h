#include <iostream>
#include <string>
#include <vector>

class Data {
protected:
  std::string relative_path;
  std::string full_path;
  std::vector<std::string> filenames;

public:
  Data();
  Data(std::string r_p);

  void setFullPath();
  void setDataFilenames();
  std::string getRelativePath();
  std::string getFullPath();
  std::vector<std::string> getDataFilenames();
  void printDataFilenames();
  void readDataToArray();
  int reverseInt(int i);
  void readMnistToArray();
};
