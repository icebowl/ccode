// switch_2d.cpp
#include <iostream>
#include <cmath>
using namespace std;
#include <stdio.h>

int main()
{
		int r,c;//row and column
		string word ="word";
		int val = 0;
		int m[8][8] = {
			{3,0,3,0,3,0,3,0} ,
			{0,0,0,0,0,0,0,3} ,
			{3,0,1,2,1,2,0,0} ,
			{0,0,2,1,2,1,0,3} ,
			{3,0,1,2,1,2,0,0} ,
			{0,0,2,1,2,1,0,3} ,
			{3,0,0,0,0,0,0,0},
			{0,3,0,3,0,3,0,3}
		};

		  for (r = 0; r < 8; r++){
				for (c = 0; c < 8; c++){
				  val = m[r][c];
						switch ( val ) {
						case 1:
						  word = "***";
						  break;
						case 2:
						  word = "%%%";
						  break;
						case 3:
						  word = "$$$";
						  break;
						default:
						  word = " 0 ";
						  break;
						}
				  	cout<<word;
				}
			cout<<endl;
		}
	return 0;
}
