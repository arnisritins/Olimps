#include <fstream>
using namespace std;

int main(){

	int n, s, d, min, count = 1;

	ifstream in("tomati.dat");
	in >> n >> s >> d;
	in.close();

	min = (n-s < s-1)
		? n-s
		: s-1;

	if(n > 1)
		count += (min >= d)
			? d * 2
			: d + min;

	ofstream out("tomati.rez");
	out << count;
	out.close();

	return 0;

}
