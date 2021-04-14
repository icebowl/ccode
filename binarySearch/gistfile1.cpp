#include <iostream>
#include <stdlib.h>
#include <time.h>


int binary_search(int list[], int length, int to_be_found);
int recursive_binary_search(int list[], int to_be_found, int p, int r);

int main()
{
    int list_length = 30;
    int item_to_find = 150;
    int list[list_length];
    int temp_int = 0;
    srand(time(NULL));
    /* Generates a random non decreasing sequence (list) of size list_length */
    for (int i = 0; i < list_length; i++)
    {
        temp_int = rand() % 30 + temp_int;
        list[i] = temp_int;
        std::cout << i << ":" << temp_int << std::endl;
    }
    std::cout << "Result from iterative procedure: " << binary_search(list, list_length, item_to_find) << std::endl;
    std::cout << "Result from recursive procedure: " << recursive_binary_search(list, item_to_find, 0, list_length - 1) << std::endl;
    
    return 0;
}

/* Iterative solution */
int binary_search(int list[], int length, int to_be_found){
    
    int p = 0;
    int r = length - 1;
    int q = (r + p) / 2;
    int counter = 0;

    while (p <= r)
    {
        counter++;
        if (list[q] == to_be_found)
            return q;
        else
        {
            if (list[q] < to_be_found) 
            {
                p = q + 1;
                q = (r + p) / 2;
            }
            else
            {
                r = q - 1;
                q = (r + p) / 2;    
            }
        }
    }
    return -1;
}

/* Recursive solution */
int recursive_binary_search(int list[], int to_be_found, int p, int r){

    if (p > r)
        return -1;
    else
    {
        int q = (p + r) / 2;
        if (list[q] == to_be_found)
            return q;
        else
        {
            if (list[q] < to_be_found)
                return recursive_binary_search(list, to_be_found, q + 1, r);
            
            else
                return recursive_binary_search(list, to_be_found, p, q - 1);
        }
    }
}

// https://gist.github.com/rcanepa/fc29c00c4185c4a13b54
