#include <fstream>
#include <string>
using namespace std;

int main(){

	int i;
	long long int a, b, c, sum[3];
	string status[3] = {"NEVAR","NEVAR","NEVAR"};

	ifstream in("trissk.dat");
	in >> a >> b >> c;
	in.close();

	sum[0] = a + b;
	sum[1] = a + c;
	sum[2] = b + c;

	for(i = 0; i < 3; i++){
		if(sum[i] > 0)
			status[0] = "VAR";
		else if(sum[i] == 0)
			status[1] = "VAR";
		else
			status[2] = "VAR";
	}

	ofstream out("trissk.rez");
	out << status[0] << endl << status[1] << endl << status[2];
	out.close();

	return 0;

}
