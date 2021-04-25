#include <iostream>
#include <array>
#include <string>
using namespace std;
const int arraylength = 26;
array<string,26> selectSort(array<string,26>list);

int main(){
	array<string,26> natorev {"zulu","yankee","xray","whiskey","victor","uniform","tango","sierra", 
							"romeo","quebec","papa","oscar","november","mike","lima","kilo","julliett", 
							"india","hotel","golf","foxtrot","echo","delta","charlie","bravo","alfa"};
	array<string,26>nato;
	int i;
	for (i = 0;i < 26 ;i++){
		cout<<natorev[i]<<" ";
		if(i % 4 == 0 && i != 0)cout<<endl;
	}
	nato = selectSort(natorev);
	
	for (i = 0;i < 26 ;i++){
		cout<<nato[i]<<" ";
		if(i % 4 == 0 && i != 0)cout<<endl;
	}
	cout<<"\n\n";
    return 0;
}


array<string,26> selectSort(array<string,26>list){
	int n = list.size();
	cout<<"\n\nn "<<n<<"\n\n";

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




void insertion_sort (int arr[], int length){
                int j, temp;
                
        for (int i = 0; i < length; i++){
                j = i;
                
                while (j > 0 && arr[j] < arr[j-1]){
                          temp = arr[j];
                          arr[j] = arr[j-1];
                          arr[j-1] = temp;
                          j--;
                          }
                }
}
