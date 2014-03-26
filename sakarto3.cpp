#include <fstream>
using namespace std;

int main(){

	int n[3];
	int i, temp;
	bool swapped;
	
	ifstream in("sakarto3.dat");
	in >> n[0] >> n[1] >> n[2];
	in.close();

	do {

		swapped = false;

		for(i = 0; i < 2; i++){
			if(n[i] > n[i+1]){
				temp = n[i];
				n[i] = n[i+1];
				n[i+1] = temp;
				swapped = true;
			}
		}

	} while(swapped);

	ofstream out("sakarto3.rez");
	out << n[0] << " " << n[1] << " " << n[2];
	out.close();

	return 0;

}
