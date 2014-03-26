#include <fstream>
#include <string>
using namespace std;

int main(){

	unsigned int i, c1, c2;
	char temp;
	bool swapped;
	string n, zeros = "";

	ifstream in("mazsk.in");
	in >> n;
	in.close();

	do {

		swapped = false;

		for(i = 0; i < n.size()-1; i++){

			c1 = n[i];
			c2 = n[i+1];

			if(c1 > c2){
				temp = n[i];
				n[i] = n[i+1];
				n[i+1] = temp;
				swapped = true;
			}

			if(n[i] == '0'){
				zeros += '0';
				n.erase(i, 1);
			}

		}

	} while(swapped);

	n.insert(1, zeros);

	ofstream out("mazsk.out");
	out << n;
	out.close();

	return 0;

}
