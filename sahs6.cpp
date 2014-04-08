#include <fstream>
#include <string>
using namespace std;

int main(){

	string pos1, pos2, symbols = "abcdefgh";
	int rook[2], cut[2], i, j;

	ifstream in("sahs6.dat");
	in >> pos1 >> pos2;
	in.close();

	rook[0] = symbols.find(pos1[0])+1;
	rook[1] = pos1[1]-'0';
	cut[0] = symbols.find(pos2[0])+1;
	cut[1] = pos2[1]-'0';

	ofstream out("sahs6.rez");

	for(i=8; i>=1; i--){
		for(j=1; j<=8; j++){
			if(j == rook[0] && i == rook[1])
				out << 0;
			else if(j == cut[0] && i == cut[1])
				out << "*";
			else if(rook[0] == cut[0] && cut[0] == j && (rook[1]>cut[1] && cut[1]>i || rook[1]<cut[1] && cut[1]<i)
				|| rook[1] == cut[1] && cut[1] == i && (rook[0]>cut[0] && cut[0]>j || rook[0]<cut[0] && cut[0]<j))
				out << 3;
			else if(j == rook[0] || i == rook[1])
				out << 1;
			else
				out << 2;
		}

		if(i != 1)
			out << endl;
	}

	out.close();
	return 0;

}
