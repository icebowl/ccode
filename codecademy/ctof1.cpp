#include <iostream>

int main() {
  
  double tempf = 27.0;
  double tempc;
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  return 0;
}
