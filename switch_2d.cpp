// switch_2d.cpp
//compile g++ ifelse_2d.cpp

#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
		int r,c;//row and column
		string word ="drow";
		int val = 0;
		int m[8][8] = {
			{3,1,2,3,4,3,3,4} ,
			{1,3,3,3,3,3,3,3} ,
			{2,3,3,3,3,3,3,3} ,
			{3,3,3,5,5,3,3,3} ,
			{4,3,3,5,5,3,3,3} ,
			{3,3,3,3,3,3,3,3} ,
			{3,3,3,3,3,3,3,3},
			{4,3,3,3,3,3,3,4}
		};

		  for (r = 0; r < 8; r++){
				for (c = 0; c < 8; c++){
				  val = m[r][c];
				 	// swtich
						switch (val){
							case 1:
								word = "-|-";
								break;
							case 2:
								word = "\\-/";
								break;
							case 3:
								word = "/-\\";
								break;
							case 4:
								word = "***";
								break;
							default:
								word = "---";
							 break;
						}
					// end switch
					cout<<word;
				}//end c
			cout<<"\n";
		}//end r
	return 0;
}
