#include <fstream>
#include <string>
#include <sstream>
using namespace std;

bool same_chars(string str1, string str2){

	int pos;

	for(int i = 0; i < 4; i++){
		pos = str2.find(str1[i]);
		if(pos != -1)
			str2.erase(pos, 1);
	}

	return str2.size() == 0;

}

void plus_minute(int &h, int &m){

	if(m == 59){
		m = 0;
		h++;
	} else
		m++;

	if(h == 24)
		h = 0;

}

int main(){

	int h, m;
	char delimiter;
	string str, start_time, end_time;

	ifstream in("pulkst.dat");
	in >> str;
	in.close();

	in.open("pulkst.dat");
	in >> h >> delimiter >> m;
	in.close();

	start_time = str.erase(2, 1);

	while(true){

		plus_minute(h, m);

		ostringstream ss;
		ss.fill('0');
		ss.width(2);
		ss << h;
		ss.fill('0');
		ss.width(2);
		ss << m;

		end_time = ss.str();

		if(same_chars(start_time, end_time))
			break;

	}

	ofstream out("pulkst.rez");
	out << end_time.insert(2, ":");
	out.close();

	return 0;

}
