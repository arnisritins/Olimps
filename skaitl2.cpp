#include <fstream>
using namespace std;

int main(){

	int k, n, c, x;
	bool found = false;

	ifstream in("skaitl2.in");
	in >> n >> c;
	in.close();

	k = n;

	while( ! found){

		x = ++k;

		while(x > 0){

			if(x % 10 == c){
				found = true;
				break;
			}

			x /= 10;
			
		}

	}

	ofstream out("skaitl2.out");
	out << k;
	out.close();

	return 0;

}
