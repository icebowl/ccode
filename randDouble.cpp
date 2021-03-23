#include <iostream>
#include <random>
#include <chrono>
using namespace std;

int main()
	// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
{   // Initialize a random seed. This is not beginner code.  I (CWC) am still studying this code.
    mt19937_64 rng; // A Mersenne Twister pseudo-random generator of 64-bit numbers with a state size of 19937 bits.
    // initialize the random number generator with time-dependent seed
    uint64_t timeSeed = chrono::high_resolution_clock::now().time_since_epoch().count();
    seed_seq ss{uint32_t(timeSeed & 0xffffffff), uint32_t(timeSeed>>32)};
    rng.seed(ss);
    // initialize a uniform distribution between 0 and 1
    uniform_real_distribution<double> unif(0.0, 1.0);
    // ready to generate random numbers
	// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
	
	int count = 0;
	double currentRandomNumber = 0.0;
    const int nSimulations = 1000;
    for (int i = 0; i < nSimulations; i++)
    {
        currentRandomNumber = unif(rng);
        cout << currentRandomNumber<<" ";
        if(i % 15 == 0 && i != 0)cout<<endl;
    }
    return 0;
}

/*
 notes: https://en.wikipedia.org/wiki/Mersenne_Twister
 * The Mersenne Twister is a pseudorandom number generator (PRNG). 
 * It is by far the most widely used general-purpose PRNG.[1] 
 * Its name derives from the fact that its period length is chosen to be a Mersenne prime.

The Mersenne Twister was developed in 1997 by Makoto Matsumoto [ja] (松本 眞) and Takuji Nishimura (西村 拓士).[2] 
* It was designed specifically to rectify most of the flaws found in older PRNGs.

The most commonly used version of the Mersenne Twister algorithm is based on the Mersenne prime 219937−1. 
* The standard implementation of that, MT19937, uses a 32-bit word length. 
* There is another implementation (with five variants[3]) that uses a 64-bit word length, MT19937-64; it generates a different sequence.  
 
/**/
