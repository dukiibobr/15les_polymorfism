#include <iostream>
#include <windows.h>
using namespace std;

//class Car {
//protected:
//	string model;
//	int year;
//	int speed;
//	float volume;
//public:
//	Car():model("-"),year(0),speed(0),volume(0){}
//	Car(string m,int y,int v):model(m),year(y),speed(0),volume(v){}
//
//	virtual void drive()const {
//		cout << "driving with speed: "<<speed << endl;
//	}
//
//	void setSpeed(int s) {
//		if (s > 0)
//			speed = s;
//
//		else
//			speed = 0;
//	}
//
//	virtual void print() const{
//		cout << endl;
//		cout << "model: " << model << "| year: " << year << endl;
//		cout << "speed: " << speed << "| volume: " << volume << endl << endl;
//	}
//};
//
//class Police:public Car { 
//	int soundVolume;
//public:
//	Police():Car(),soundVolume(0){}
//	Police(string m,int y,int v,int sv):Car(m,y,v),soundVolume(sv){}
//	
//	void drive()const override{
//		cout << "driving police car with speed: " << speed << endl;
//	}
//	void print() {
//		Car::print();
//		cout << "sound volume: " << soundVolume << endl;
//	}
//	void beep() {
//		for (int i = 0; i < 5; i++)
//		{
//			Beep(500, 300);
//			Beep(400, 200);
//			Beep(1000, 500);
//			Beep(400, 200);
//		}
//	}
//};
//class Sport :public Car {
//	int turbo;
//public:
//	Sport() :Car(), turbo(0) {}
//	Sport(string m, int y, int v, int t) :Car(m, y, v), turbo(t) {}
//
//	void drive()const {
//		cout << "driving sports car with speed: " << speed << endl;
//	}
//	void print()const override{
//		Car::print();
//		cout << "turbo: " << turbo << endl;
//	}
//	void nitro() {
//		speed += turbo;
//		cout << "speed with turbo: " << speed << endl;
//	}
//};
//
//void test(Car car) {
//	car.setSpeed(60);
//	car.drive();
//	car.print();
//	cout << endl;
//}

class Shape {
protected:
	string name;
public:
	Shape():name("-"){}
	Shape(string n):name(n){}
	
	void show() {
		cout << "name: " << name << endl;
	}
	virtual void getArea() {
		cout << "i will count soon" << endl;
	}

	void print() {
		cout << name << endl;
		
	}
};

class Rectangle:public Shape {
	int width;
	int height;
public:
	Rectangle(int w,int h):width(w),height(h){}
	
	void getArea()override {
		cout << "rectangle area: " << width * height << endl;
	}

	void print() {
		Shape::print();
		cout << "height: " << height << endl;
		cout << "width: " << width << endl;
	}
};

class Circle :public Shape {
	const float pi = 3.14;
	int radius;
public:
	Circle(int r) :radius(r) {}

	void getArea()override {
		cout << "circle area: " << (pi)*radius * radius << endl;
	}

	void print() {
		getArea();
	}
};

class RectTriangle:public Shape {
	int a;
	int b;
public:
	RectTriangle(int a,int b):a(a),b(b){}

	void getArea()override {
		cout << "rectangular triangle area: " <<(a*b)/2  << endl;
	}

	void print() {
		getArea();
	}
};

class Triangle:public Shape {
	int side;
	int height;
public:
	Triangle(int s,int h):side(s),height(h){}

	void getArea()override {
		cout << " triangle area: " << (side / 2) * height << endl;
	}

	void print() {
		getArea();
	}
};
class Trap {
	int middleLine;
	int height;
public:
	Trap(int m,int h):middleLine(m),height(h){}
	
	void getArea()override {
		cout << " trap area: " << middleLine * height << endl;
	}

	void print() {
		getArea();
	}
};


void testShape(Shape s) {
	s.getArea();
	s.print();
}


int main()
{

	Rectangle r(2, 6);







	//Police car1("pigMobile",2015,1.6,500);
	//car1.setSpeed(220);
	//car1.print();
	//car1.drive();
	////car1.beep();
	//Car car2("cowMobile",2014,1.3);
	//car2.setSpeed(260);
	//car2.print();
	//car2.drive();
	//Sport car3("chickenMobile", 2020, 2.5, 100);
	//car3.setSpeed(150);
	//car3.print();
	//car3.drive();

	//test(car3);


	//Car* cars[3]{
	//	new Car("cowMobile",2014,1.3),
	//	new Police("pigMobile",2015,1.6,500),
	//	new Sport("chickenMobile", 2020, 2.5, 100)
	//};

	//for (int i = 0; i < 3; i++)
	//{
	//	cars[i]->drive();
	//	cars[i]->print();
	//	delete cars[i];
	//}



}


