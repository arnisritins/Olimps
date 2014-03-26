#include <fstream>
#include <string>
using namespace std;

int main(){

	int hor, ver, i, j;
	string square, letters = "abcdefgh";
	
	ifstream in("sahs3.dat");
	in >> square;
	in.close();

	hor = letters.find(square[0]) + 1;
	ver = (int) square[1] - '0';

	ofstream out("sahs3.rez");

	for(j = 8; j >= 1; j--){

		for(i = 1; i <= 8; i++){
			if(i == hor && j == ver)
				out << 0;
			else if(ver-j == hor-i || (ver-j) + (hor-i) == 0 || ver == j || hor == i)
				out << 1;
			else
				out << 2;
		}

		if(j != 1)
			out << endl;
		
	}

	out.close();
	return 0;

}
