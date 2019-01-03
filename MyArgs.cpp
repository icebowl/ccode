// Program: MyArgs
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    cout << "There are " << argc << " arguments:\n";

    // Loop through each argument and print its number and value
    for (int count=0; count < argc; ++count)
        cout << count << " " << argv[count] << '\n';
    cout<<"* * * * * "<<endl;
    cout<< argv[1]<<endl;
    cout<< argv[2]<<endl;
    return 0;
}
