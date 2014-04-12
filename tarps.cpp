#include <fstream>
using namespace std;

int main(){

	int m, n, count = 0;

	ifstream in("tarps.dat");
	in >> m >> n;
	in.close();

	while(true){

		if(m > 1){
			m--;
			count++;
		} else {
			break;
		}

		if(n > 1){
			n--;
			count++;
		} else {
			break;
		}
		
	}

	ofstream out("tarps.rez");
	out << count;
	out.close();

	return 0;

}
