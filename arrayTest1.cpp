//https://stackoverflow.com/questions/29371474/c-returning-an-array-to-main-function-and-passing-array-to-another-function
#include <cmath>
#include <iostream>

using namespace std;

void ran(int list[]){       //random number generator
    srand (time(NULL));
    int a = rand() % 6 + 1;
    int b = rand() % 7 + 1;
    while(a == b)
        b = rand() % 7 + 1;
    int c = rand() % 8 + 1;
    while(a == c || b == c)
        c = rand() % 8 + 1;
    int d = rand() % 9 + 1;
    while(a == d || b == d || c == d)
        d = rand() % 9 + 1;

    list[0] = a;
    list[1] = b;
    list[2] = c;
    list[3] = d;
}

void guess(int list[]){         //takes user input for a guess
    int random_no[4];
    for(int i = 0; i < 4; i++){
        cin >> list[i];
    }
}
int black_marker(int num1[], int num2[]){   //Counts how many digits from random number
    int black_count = 0;                    //is similar to the user's guess
    for(int i = 0; i < 4; i++){
        if(num1[i] == num2[i]){
            black_count += 1;
        }
    }
    return black_count;
}
int main(){
    int r[4];
    int g[4];
    ran(r);
    guess(g);
    int answer = black_marker(r, g);
    cout << answer << endl;
}
