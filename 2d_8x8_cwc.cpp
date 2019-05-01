// cwc 8x8
#include <iostream>
#include <stdio.h>
int cwc();  //define int cwc(); function

int main()
{
	cwc();//call cwc function
	return 0;
}
// start of cwc() function
int cwc(){
		int r,c;//row and column
		int red, green, blue;
		int val = 0;
		int m[8][8] = {
			{5,5,5,5,5,5,5,5} ,
			{5,4,0,0,0,0,4,5} ,
			{5,0,5,5,5,5,0,5} ,
			{5,0,5,1,1,5,0,5} ,
			{5,0,5,1,1,5,0,5} ,
			{5,0,5,5,5,5,0,5} ,
			{5,4,0,0,0,0,4,5},
			{5,5,5,5,5,5,5,5}
		};

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
						case 2: // green
							red = 55; green = 200; blue = 20;
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
					}//end c
					std::cout<<"\n";
		}//end r
	return 0;
}//end cwc() function
