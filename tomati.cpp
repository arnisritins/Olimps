#include <fstream>
using namespace std;

int main(){

	int n, s, d, less, more, count = 1;

	ifstream in("tomati.dat");
	in >> n >> s >> d;
	in.close();

	if(s-1 > n-s){
		less = n-s;
		more = s-1;
	} else {
		less = s-1;
		more = n-s;
	}

	if(n > 1)
		count += (less >= d)
			? d * 2
			: d + less;

	ofstream out("tomati.rez");
	out << count;
	out.close();

	return 0;

}
