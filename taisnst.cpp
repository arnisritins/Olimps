#include <fstream>
using namespace std;

int main(){

	int n, m, count;
	ifstream in("taisnst.in");
	in >> n >> m;
	in.close();

	count = 0;

	while(true){

		count++;

		if(n == m)
			break;
		else if(n > m)
			n = n-m;
		else
			m = m-n;

	}

	ofstream out("taisnst.out");
	out << count;
	out.close();
	
	return 0;

}
