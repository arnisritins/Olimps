#include <fstream>
using namespace std;

int main(){

	int a1, a2, n, i, temp;

	ifstream in("cipvirk.in");
	in >> a1 >> a2 >> n;
	in.close();

	for(i = 2; i < n; i++){
		temp = a2;
		a2 = (a1 + a2) % 10;
		a1 = temp;
	}

	ofstream out("cipvirk.out");
	out << a2;
	out.close();

	return 0;

}
