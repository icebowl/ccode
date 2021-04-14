#include <iostream>
#include <array>

using namespace std;

int binary_search(array<int,10> blist, int search_int);

int main(){
	array<int,10> list {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
	//int list[] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
    int search_int = 33;
    int n = list.size();
	int index = binary_search(list, search_int);
	
	cout << "Result  " << index << endl;
 
    
    return 0;
}

int binary_search(array<int,10> blist, int search_int){
	//int n = 0;
	int n = blist.size();
    cout<< "List_length "<<" n "<< n <<endl;
    int p = 0;
    int r = n - 1;
    int q = (r + p) / 2; // middle

    while (p <= r)
    {    if (blist[q] == search_int)
            return q;
        else
        { if (blist[q] < search_int) 
            { p = q + 1;
              q = (r + p) / 2;
            }
            else
            {  r = q - 1;
               q = (r + p) / 2;    
            }
        }
    }
    return -1;
}


// https://gist.github.com/rcanepa/fc29c00c4185c4a13b54
