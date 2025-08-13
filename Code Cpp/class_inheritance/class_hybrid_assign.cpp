/* hybrid inheritance 
	base class vehicle :
	 	 car, bus, ship, boat, plane, helicopter
	 	 putL(), PutW(), PutA()
	sub 1 land:
		showLand()
	sub 2 water:
		showWater()	
	sub 3 air:
		ShowAir()
	sub 4 show:
		display()
		ok passed
*/
#include<iostream>
using namespace std;

class vehicle {      	//base class as hierarchical
	public:				
		string car = "Honda City";
		string bus = "Olectra";
		string boat = "surfer 23";
		string ship = "queen 3";
		string plane = "boeing 747";
		string helicopter = "v22 ospray";
		
		void putL() {
			cout<<"\tCar = "<<car;
			cout<<"\tBus = "<<bus;
			cout<<"\n";
		}
		
		void putW() {
			cout<<"\tboat = "<<boat;
			cout<<"\tship = "<<ship;
			cout<<"\n";
		}
		
		void putA() {
			cout<<"\tplane = "<<plane;
			cout<<"\thelicopter = "<<helicopter;
			cout<<"\n";
		}
};

class land : public vehicle{
	public:
		void showLand() {
			cout<<"\n Land vehicle : \n";
			vehicle :: putL();
		}
		
};

class water : public vehicle{
	public:
		void showWater() {
			cout<<"\n Water vehicle : \n";
			vehicle :: putW();
		}
};

class air : public vehicle{
	public:
		void showAir() {
			cout<<"\n Air vehicle : \n";
			vehicle :: putA();
		}
	
};

class show : public land, public water, public air{
	public:
		void display() {
			land :: showLand();
			air :: showAir();
			water :: showWater();
		}
};

int main () {
	show s1;
	s1.display();
}