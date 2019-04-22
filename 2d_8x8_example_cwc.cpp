// cwc 8x8
#include <iostream>
#include <stdio.h>
int main()
{
	cwc();
	return 0;
}

int cwc(){
		int r,c;//row and column
		int red, green, blue;
		int val = 0;
		int m[8][8] = {
			{5,5,5,5,5,5,5,5} ,
			{5,0,0,0,0,0,0,5} ,
			{5,0,5,5,5,5,0,5} ,
			{5,0,5,1,1,5,0,5} ,
			{5,0,5,1,1,5,0,5} ,
			{5,0,5,5,5,5,0,5} ,
			{5,0,0,0,0,0,0,5},
			{5,5,5,5,5,5,5,5}}

			red = 0; green = 0; blue = 0;

		  for (r = 0; r < 8; r++){
				for (c = 0; c < 8; c++){
				  val = m[r][c];
					switch (val){
						case 0:
							red = 0; green = 0; blue = 0;
							break;
						case 1:
							red = 255; green = 255; blue = 0;
							break;
						case 2:
							red = 255; green = 255; blue = 0;
							break;
						case 3:
							red = 255; green = 255; blue = 0;
							break;
						default:
							red = 255; green = 255; blue = 0;
						 break;
					 }//end select
					 	//output the colors
						std::cout<<"["<<red<<" "<<green<<" "<<blue<<"]";
				}
					}//end c
				}//end c
			std:cout<<end;
		}
	return 0;
}//end cwc
