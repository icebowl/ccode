//CODE CREATED BY CWC MODIFIED BY MAGICKALWIZ

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;
int main(int argc, char** argv)
{
	int i;
	const int arraylength = stoi(argv[1]);	
	string wordlist[arraylength];
	string wordlistlen = argv[1];
	ifstream filename(wordlistlen + ".txt");
    if(filename.is_open())
    {   for(int i = 0; i < arraylength; ++i)
        {
            filename >> wordlist[i];
        }
    }

	sort(wordlist, wordlist + arraylength);

	for (i = 0; i < arraylength;i++)
		cout << wordlist[i] <<endl;

	
		cout<<"\n\n C sort - arrayLength "<<arraylength<<endl;
	
	return 0;
	
	
}


/*
 http://www.cplusplus.com/forum/beginner/141751/
 https://www.codespeedy.com/cpp-program-to-sort-an-array-of-strings-alphabetically/
 */
