#include <iostream>
#include <random>
using namespace std;
int main()
{
   // https://en.cppreference.com/w/cpp/numeric/random/random_device
   default_random_engine PRNG(random_device {}());
   uniform_real_distribution<double> dist(1.0, 4.0);

   const int nSimulations { 1000 };
	int ri = 0;
   for (int i { 1 }; i <= nSimulations; i++)
   {
      //cout << dist(PRNG) << ' ';
		ri = (int)dist(PRNG);
		cout << ri << " ";
      if (i % 13 == 0) cout << '\n';
   }
   cout << '\n';
}
