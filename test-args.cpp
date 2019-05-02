#include <iostream>

int main(int argc, char** argv) {
    std::cout << "Have " << argc << " arguments:" << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
    }
}
/*
int argc is count of number of arguments provided through command
line arguments and char **argv is 2 dimensional array of real
arguments provided through command line.
*/
