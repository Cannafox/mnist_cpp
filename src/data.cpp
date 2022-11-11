#include "../include/data.h"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <unistd.h>

Data::Data() { relative_path = "/data"; }

Data::Data(std::string r_p) { relative_path = r_p; }

void Data::setFullPath() { full_path = get_current_dir_name() + relative_path; }

void Data::setDataFilenames() {
  for (const auto &entry : std::filesystem::directory_iterator(full_path))
    filenames.push_back(entry.path());
}

std::string Data::getRelativePath() { return relative_path; }

std::string Data::getFullPath() { return full_path; }

std::vector<std::string> Data::getDataFilenames() { return filenames; }

void Data::printDataFilenames() {
  for (int i = 0; i < filenames.size(); i++)
    std::cout << filenames[i] << std::endl;
}

int Data::reverseInt(int i) {
  unsigned char c1, c2, c3, c4;

  c1 = i & 255;
  c2 = (i >> 8) & 255;
  c3 = (i >> 16) & 255;
  c4 = (i >> 24) & 255;

  return ((int)c1 << 24) + ((int)c2 << 16) + ((int)c3 << 8) + c4;
}

void Data::readMnistToArray(std::string f_path) { ifstream file() }
