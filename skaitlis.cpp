#include <fstream>
using namespace std;

int main(){

	int n, m, k;

	ifstream in("skaitlis.in");
	in >> n >> m;
	in.close();

	k = n + 1;

	while(k % m != 0)
		k++;
	
	ofstream out("skaitlis.out");
	out << k;
	out.close();

	return 0;

}
