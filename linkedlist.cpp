// cwc pointers.cpp
// reference https://www.youtube.com/watch?v=o5wJkJJpKtM
// https://www.youtube.com/channel/UCcDGsN3JxMavDkM9INRLGFA
#include <iostream>
using namespace std;

int main(){
	struct node{
		int data;
		node* next;
	}

		n = new node;
		n->data = 1;
		t = n;
		h = n;
		n = new node;
		n->date = 2;
		t->next = n;
		t=t->next;
		n = new node;
		n->date = 3;
		t->next = n;
		n = new node;
		t=t->next;
		n->date = 4;
		t->next = n;
		n->next = NULL;

		return 0;

}
