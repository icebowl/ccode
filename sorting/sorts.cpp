#include <iostream>
#include <array>
#include <string>
using namespace std;
const int arraylength = 26;
array<string,26> selectSort(array<string,26>list);
array<string,26> insertSort(array<string,26>list);
void printArray(array<string,26>list);

int main(){
	array<string,26> natorev {"zulu","yankee","xray","whiskey","victor","uniform","tango","sierra", 
							"romeo","quebec","papa","oscar","november","mike","lima","kilo","julliett", 
							"india","hotel","golf","foxtrot","echo","delta","charlie","bravo","alfa"};
	array<string,26>nato;
	cout<<"Array unsorted"<<endl;
	printArray(natorev);
	cout<<"\nSelection Sort"<<endl;
	nato = selectSort(natorev);
	printArray(nato);
	cout<<"\nInsertion Sort"<<endl;
	nato = insertSort(natorev);
	printArray(nato);
    return 0;
}


array<string,26> selectSort(array<string,26>list){
	int n = list.size();
		//pos_min is short for position of min
		string temp;
        int pos_min,i,j;
        for (i=0; i < n-1; i++){
			pos_min = i;//set pos_min to the current index of array
                for (j=i+1; j < n; j++){
					if (list[j] < list[pos_min])
						pos_min=j;
					//pos_min will keep track of the index that min is in, this is needed when a swap happens
                }  
								//if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
				if (pos_min != i){
					temp = list[i];
					list[i] = list[pos_min];
					list[pos_min] = temp;
				}
        }
        return list;
}


array<string,26> insertSort(array<string,26>list){
	int i,j;
	int p;
	int swap = 0;
	string temp;
	int n = list.size();//array length
                
	for (i = 0; i < n; i++){
		j = i;
			while (j > 0 && list[j] < list[j-1]){
				temp = list[j];
				list[j] = list[j-1];
				list[j-1] = temp;
				j--;
				swap++;
			}
			cout << " loop i "<<i<<endl;
			cin>>p;
			printArray(list);
	}
	cout<<"swaps "<<swap<<endl;
	return list;
}

void printArray(array<string,26>list){
	for (int i = 0;i < 26 ;i++){
		cout<<list[i]<<" ";
		if(i % 13 == 0 && i != 0)cout<<endl;
	}
}
