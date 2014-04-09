#include <fstream>
using namespace std;

int main(){

	int n, i, last_factor = 0;

	ifstream in("pirmreiz.dat");
	in >> n;
	in.close();

	ofstream out("pirmreiz.rez");

	for(i = 2; i <= n; i++){
		while(n%i == 0){
			n /= i;
			if(last_factor != i){
				last_factor = i;
				out << i << endl;
			}
		}
	}

	out.close();
	return 0;

}
