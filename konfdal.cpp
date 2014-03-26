#include <fstream>
#include <cmath>
using namespace std;

int main(){

	int n, k, m, count, remainder;

	ifstream in("konfdal.dat");
	in >> n >> k >> m;
	in.close();

	if(k == m)
		count = ceil((double)n / (double)k);
	else if (k >= n)
		count = 1;
	else if(m >= n)
		count = 2;
	else {

		remainder = n % (k + m);
		count = (n / (k + m)) * 2;

		if(remainder != 0)
			if(remainder > k)
				count += 2;
			else 
				count++;

	}

	ofstream out("konfdal.rez");
	out << count;
	out.close();

	return 0;

}
