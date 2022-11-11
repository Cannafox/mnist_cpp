#include "include/main.h"

int main() {
  Data data = Data();
  data.setFullPath();
  data.setDataFilenames();

  std::cout << data.getRelativePath() << std::endl;
  std::cout << data.getFullPath() << std::endl;

  // data.printDataFilenames();
  return 0;
}
