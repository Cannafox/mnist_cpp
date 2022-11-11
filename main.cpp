#include "include/main.h"

int main() {
  std::cout << "Dupa" << std::endl;

  Data data_1 = Data();
  Data data_2 = Data(1.0);

  std::cout << data_1.getTest() << std::endl;
  std::cout << data_2.getTest() << std::endl;

  return 0;
}
