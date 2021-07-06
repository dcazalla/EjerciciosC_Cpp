#include <iostream>

using namespace std;

class Coche{

public:
	void nombreCoche(){
		cout << "Soy un coche \n";

	}
	
	void combustible(){
		cout << "Diesel \n";
	
	}

};



class Seat : public Coche{

public:
	void nombreCoche(){
		cout << "Soy un Seat \n";

	}


};

int main(){
	Coche coche1;
	coche1.nombreCoche();
	
	Seat seat1;
	seat1.nombreCoche();
	seat1.combustible();
	


}
