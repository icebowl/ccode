#include <iostream>
#include <array>
#include <string>
#include <random>
using namespace std;

int binary_search(array<string,13> blist, string search_string);

int main(){
	// Set up random double
	default_random_engine PRNG(random_device {}());
	uniform_real_distribution<double> dist(97.0, 123.0);
	int i,index;
	int rint = 0,count = 1;
	string temp = "";
	string word = "";
	
	array<string,13> list {"aaa","bbb","ccc","ddd","eee","fff","gggggg","hhh","iii","jjj","kkk","lll","mmm"};
	// print list
	//for (i = 0 ; i < 13;i++){
	//	cout<<list[i]<<" ";
	//}
	bool done = false;
	while (!done){
		for (i = 0; i < 6; i++){
				rint = (int)dist(PRNG);temp = (char)rint;
				word = word + temp;
		}
		index = binary_search(list, word);
		if (index != -1) done = true;
		cout << "search index = " << index <<" word "<<word<< " count "<<count<<endl;
		count++;
		word = "";
	}
    
    return 0;
}

int binary_search(array<string,13> blist, string search_string){
	int n = blist.size();
    //cout<< "\nList_length "<<" n "<< n <<endl;
    int p = 0;//  start of list
    int r = n - 1; // end index of the list
    int q = (r + p) / 2; // middle

    while (p <= r)
    {    if (blist[q] == search_string)
            return q;
        else
        { if (blist[q] < search_string) 
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

/*

#include <iostream>

using namespace std;
int main()
{
   // https://en.cppreference.com/w/cpp/numeric/random/random_device
   default_random_engine PRNG(random_device {}());
   uniform_real_distribution<double> dist(97.0, 123.0);

   const int nSimulations { 127 };
	
	for (int i { 1 }; i <= nSimulations; i++)
   { 
	   rint = (int)dist(PRNG);
	   temp = (char)rint;
	   cout << rint<< " "<<temp<<" ";
	   sum = sum + temp;
      if (i % 13 == 0) cout << '\n';
   }
   cout << '\n'<<sum<<'\n';
}
*/
