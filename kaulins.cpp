#include <fstream>
using namespace std;

int main(){

	int p, n;

	ifstream in("kaulins.dat");
	in >> p >> n;
	in.close();

	ofstream out("kaulins.rez");

	if(n%4 == 0)
		out << p;
	else if(n%2 == 0)
		out << 7-p;
	else
		switch(p){
			case 1:
			case 6:
				out << 2345;
				break;
			case 2:
			case 5:
				out << 1346;
				break;
			case 3:
			case 4:
				out << 1256;
		}

	out.close();
	return 0;

}
