#include <iostream>
#include <fstream>
#include <array>
#include <string>

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
            //cout<<list[i]<<" ";
        }
    }
	// end of loading file to array							
	// sorting
	//pos_min is short for position of min
	int n = arraylength;
	int swap = 0;
	int compare = 0;
		string temp;
        int pos_min;
        for (i=0; i < n-1; i++){
			pos_min = i;//set pos_min to the current index of array
                for (j=i+1; j < n; j++){
					if (list[j] < list[pos_min]){
						pos_min=j;
						compare++;
					}
					//pos_min will keep track of the index that min is in, this is needed when a swap happens
                }  
								//if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
				if (pos_min != i){
					compare++;
					temp = list[i];
					list[i] = list[pos_min];
					list[pos_min] = temp;
					swap++;
				}
        }
		cout<<"compare "<<compare<<endl;
		cout<<"swap "<<swap<<endl;
		
	for (i = 0;i < arraylength ;i++) cout<<list[i]<<endl;
	cout<<"\n\n Selection sort - arrayLength "<<arraylength<<endl;
    return 0;
}

