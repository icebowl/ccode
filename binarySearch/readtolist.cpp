#include <fstream>
#include <string>
#include <list>

using namespace std;

void readFile(const char* filename, list<string>& lines)
{
    lines.clear();
    ifstream file(filename);
    string s;
    while (getline(file, s))
        lines.push_back(s);
}
