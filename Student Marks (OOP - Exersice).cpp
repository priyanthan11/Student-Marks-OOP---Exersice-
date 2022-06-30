

#include <iostream>
#include "string.h"

using namespace std;

class Result
{
private:
	int Roll, M1, M2, M3, Total;
	char name[25];


public:

	// Accesors
	char GetName();
	

	// Mutators
	void SetName(char name[25]);

};

char Result::GetName()
{
	return name[25];
}

void Result::SetName(char name[25])
{
	name[25] = this->name[25];
}

int main()
{
	Result r;

	cout <<"Enter Name: " << endl;
	cin << r.SetName();
	
	

}
