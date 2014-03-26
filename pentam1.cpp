#include <fstream>
using namespace std;

int main(){

	char shape;
	unsigned int number, i, j, row, col, count = 0;
	int grid[8][8] = {{}};

	ifstream in("pentam1.in");
	in >> number;

	for(i = 1; i <= number; i++){

		in >> shape >> col >> row;
		grid[--row][--col] = 1;

		switch(shape){
			case 'A':
				grid[row-1][col] = 1;
				grid[row-2][col] = 1;
				grid[row-2][col+1] = 1;
				grid[row-2][col+2] = 1;
			break;
			case 'B':
				grid[row-1][col] = 1;
				grid[row-2][col] = 1;
				grid[row][col+1] = 1;
				grid[row-1][col+1] = 1;
			break;
			case 'C':
				grid[row+1][col] = 1;
				grid[row][col-1] = 1;
				grid[row][col-2] = 1;
				grid[row][col-3] = 1;
			break;
		}

	}

	in.close();

	for(i = 0; i < 8; i++)
		for(j = 0; j < 8; j++)
			if(grid[i][j] == 1)
				count++;

	ofstream out("pentam1.out");
	out << count;
	out.close();

	return 0;

}
