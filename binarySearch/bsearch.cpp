#include<iostream>
using namespace std;

int binarySearch(int arr[], int num) {
	int p, int r
	int n = sizeof(arr)/ sizeof(arr[0]);
	p = 0; r = n -1
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
      return mid ;
      if (arr[mid] > num)
      return binarySearch(arr, p, mid-1, num);
      if (arr[mid] > num)
      return binarySearch(arr, mid+1, r, num);
   }
   return -1;
}

int main(void) {
   int list[] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
 
   int num = 33;  // search for 33
   int index = binarySearch (list,num);
   if(index == -1)
		cout<< num <<" is not present in the array";
   else
		cout<< num <<" is present at index "<< index <<" in the array";
   return 0;
}
