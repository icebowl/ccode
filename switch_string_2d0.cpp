// ifelse_2d.cpp
#include <iostream>
#include <cmath>
using namespace std;
#include <stdio.h>

int main()
{
		int r,c;//row and column
		char ac = '*';
		char bc = '#';
		char cc = ' ';
		char dc = '|';
		char thechar = ' ';
		char lst = ('*','<','>');

		int val = 0;
		int m[8][8] = {thechar = bc;
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
					if (val == 3){
							thechar = ac;}
					else if (val == 2) {
							thechar = bc;}
					else {thechar = cc; }
				  cout<<thechar;
				}
			cout<<endl;
		}
	return 0;
}
