#include "../include/data.h"
#include <iostream>
Data::Data() { path = "/data"; }

Data::Data(std::string p) { path = p; }

std::string Data::getPath() { return path; }
