#include <fstream>
using namespace std;

int main(){

	int n, k, s, l, a, i = 1, x;

	ifstream in("banka2.dat");
	in >> n >> k >> s >> l;

	x = n-k+1;

	while(in >> a){
		if(a > 0){
			if(i%x == 0)
				s += a;
			i++;
		}
		s += a;
	}

	in.close();

	ofstream out("banka2.rez");
	out << s;
	out.close();

	return 0;

}
