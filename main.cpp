#include<iostream>
using namespace std;
class Perro{
public:
	Perro();
	~Perro();
	int anos;
	void ladrar();
	void pee();
	void setpeso(int nuevo);
	int getpeso(void);
	int getage(void);
	void setage(int age1);
	void setname(string name1);
	string getname(void);
private:
	int peso;
	int age;
	string name;
};
void Perro::ladrar(){
	cout<<"Rufus!Rufus!Rufus!Rufus!"<<endl<<endl;
}
void Perro::pee(){
	cout<<"Pssss"<<endl<<endl;
}
void Perro::setpeso(int nuevo){
	peso=nuevo;
}
int Perro::getpeso(void){
	return peso;
}
void Perro::setage(int age1){
	age=age1;
}
int Perro::getage(void){
	return age;
}
void Perro::setname(string name1){
	name=name1;
}
string Perro::getname(void){
	return name;
}
Perro::~Perro(){
cout<<"morire";	
}
int main(){
	int weight;
	int edad;
	string nombre;
	Perro p;
	p.ladrar();
	p.pee();
	cout<<"Ingresa un peso:"<<endl;
	cin>>weight;
	p.setpeso(weight);
	cout<<"El nuevo peso es: "<<p.getpeso()<<" Kg."<<endl;
	cout<<"Ingresa la edad: "<<endl;
	cin>> edad;
	p.setage(edad);
	cout<<"La nueva edad es: "<<p.getage()<<" Anos."<<endl;
	cout<<"Ingresa un nombre: "<<endl;
	cin>> nombre;
	p.setname(nombre);
	cout<<"El nuevo nombre es: "<<p.getname()<<endl;
	return 0;
	
}
