#include <iostream>
#include <string>
#include <fstream>

int main()
{
    using namespace std;
	int i;
	string wordlist[26];
    ifstream file("words.txt");
    if(file.is_open())
    {
        

        for(i = 0; i < 26; ++i)
        {
            file >> wordlist[i];
        }
    }
    
    for(i = 0; i < 26;i++){
			cout<<wordlist[i]<<endl;
	}

}
