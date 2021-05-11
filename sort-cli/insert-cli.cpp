#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
	int i,j;
	const int arraylength = stoi(argv[1]);	
	string list[arraylength];
	string wordlistlen = argv[1];
	ifstream filename(wordlistlen + ".txt");
    if(filename.is_open())
    {   for(i = 0; i < arraylength; ++i)
        {
            filename >> list[i];
        }
    }
	// end of loading file to array						
	// insert sort
	int p;
	int noswap = 0;
	int compare = 0;
	string temp;
	int n = arraylength;
                
	for (i = 0; i < n; i++){
		j = i;
		compare++;
			while (j > 0 && list[j] < list[j-1]){
				temp = list[j];
				list[j] = list[j-1];
				list[j-1] = temp;
				j--;
				noswap++;
			}
	}//end for i in insert sort

	for (i = 0;i < arraylength ;i++){
		cout<<list[i]<<" "<<endl;
		//if(i % 13 == 0 && i != 0)cout<<endl;
	}
	
	cout<<"\n\n Insertion sort - arrayLength "<<arraylength<<endl;
    return 0;
}
