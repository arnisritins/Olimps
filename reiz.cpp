#include <fstream>
using namespace std;

int main(){

	int n;
	ifstream in("reiz.in");
	in >> n;
	in.close();

	ofstream out("reiz.out");
	out << n * 2;
	out.close();

	return 0;

}
