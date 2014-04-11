#include <fstream>
using namespace std;

int main(){

	int d, ring1[2], ring2[2];

	ifstream in("gredzeni.dat");
	in >> d >> ring1[0] >> ring1[1] >> ring2[0] >> ring2[1];
	in.close();

	ofstream out("gredzeni.rez");

	if(ring1[1] > d && ring2[1] > d){

		out << "NEVIENU";

	} else if(ring1[1] > d || ring2[1] > d){

		if(ring1[1] < ring2[1])
			out << "PIRMO";
		else
			out << "OTRO";

	} else if(ring1[1] <= ring2[0] || ring2[1] <= ring1[0] || ring1[1]+ring2[1] <= d){

		out << "ABUS";

	} else {

		out << "VIENU";
		
	}

	out.close();
	return 0;

}
