#include <fstream>
#include <vector>
#include <string>
using namespace std;

bool is_winner(int grid[]){

	for(int i = 0; i <= 6; i+=3)
		if(grid[i] != 0 && grid[i] == grid[i+1] && grid[i] == grid[i+2])
			return true;

	for(int i = 0; i <= 2; i+=1)
		if(grid[i] != 0 && grid[i] == grid[i+3] && grid[i] == grid[i+6])
			return true;

	if(grid[2] != 0 && grid[2] == grid[4] && grid[2] == grid[6])
		return true;

	if(grid[0] != 0 && grid[0] == grid[4] && grid[0] == grid[8])
		return true;

	return false;

}

int main(){

	unsigned int i;
	int protocol, player = 1;
	int grid[9] = {};
	vector <int>pos;
	string state = "NEKOREKTS";

	ifstream in("desas.in");
	in >> protocol;
	in.close();

	while(protocol){
		pos.insert(pos.begin(), (protocol % 10)-1);
		protocol /= 10;
	}
	
	for(i = 0; i < pos.size(); i++){

		if(grid[pos[i]] != 0 || pos[i] > 8 || pos[i] < 0)
			break;

		grid[pos[i]] = player;

		if(is_winner(grid)){
			if(i == pos.size()-1)
				state = (player == 1)
					? "PIRMAIS"
					: "OTRAIS";
			break;
		} else if(i == 8 && pos.size() == 9){
			state = "NEVIENS";
			break;
		}
		
		player = (player == 1) ? 2 : 1;
		
	}

	ofstream out("desas.out");
	out << state;
	out.close();

	return 0;

}
