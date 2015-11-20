#include <string>

#define DIFF  97
#define NUM  26

using namespace std;

class Encrypt
{
public:
	Encrypt();
	//getter and setter
	void set_code_array();
	string get_code_array();
	//decode and encode
	string ToEncode(string);
	string ToDecode(string);

private:
	string code_array;
};