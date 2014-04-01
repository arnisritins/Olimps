#include <fstream>
using namespace std;

int main(){

	int n, i, j, sum[9] = {};

	ifstream in("ns.dat");

	while(in >> n){
		i = 0;
		while(n){
			sum[i++] += n%10;
			n /= 10;
		}
	}

	in.close();

	ofstream out("ns.rez");

	for(j = i-1; j >= 0; j--)
		out << 45 - sum[j];

	out.close();

	return 0;

}
