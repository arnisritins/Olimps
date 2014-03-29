#include <fstream>
using namespace std;

int main(){

	int n[3], points[3] = {};
	int i, j, max, max_index, limit;

	ifstream in("spele.dat");
	in >> limit;

	for(i = 1; i <= limit; i++){
		
		in >> n[0] >> n[1] >> n[2];

		if(n[0] == n[1] && n[1] == n[2]){

			continue;

		} else if(n[0] != n[1] && n[0] != n[2] && n[1] != n[2]){

			max = n[0];
			max_index = 0;

			for(j = 1; j <= 2; j++){
				if(n[j] > max){
					max = n[j];
					max_index = j;
				}
			}

			points[max_index]++;

		} else {

			if(n[1] == n[2])
				points[0]++;
			else if(n[0] == n[2])
				points[1]++;
			else
				points[2]++;

		}

	}

	in.close();

	ofstream out("spele.rez");
	out << points[0] << " " << points[1] << " " << points[2];
	out.close();

	return 0;

}
