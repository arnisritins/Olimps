#include <fstream>
using namespace std;

int main(){

	int h, m;
	char delimiter;

	ifstream in("caursp.dat");
	in >> h >> delimiter >> m;
	in.close();

	if(h == 0){
		if(m > 0)
			h = 11;
	} else {
		if(m > 0)
			h = 11-h;
		else
			h = 12-h;
	}

	if(m > 0)
		m = 60-m;

	ofstream out("caursp.rez");

	if(h < 10)
		out << 0;
	out << h << ":";
	
	if(m < 10)
		out << 0;
	out << m;

	out.close();
	return 0;

}
