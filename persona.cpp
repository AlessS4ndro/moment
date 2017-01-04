#include<iostream>

using namespace std;

class Persona
{
  string nombre;
  long dni;
  int edad;
public:
  Persona(){}
  Persona(string a,long b,int c):nombre(a),dni(b),edad(c){}
  string get_nombre(){return nombre;}
  int get_edad(){return edad;}
  long get_dni(){return dni;}
  void set_nombre(string a){nombre=a;}
  void set_edad(int a){edad=a;}
  void set_dni(long a){dni=a;}
  void mostrar_datos(){cout<<"mi nombre es: "<<nombre<<"\n mi edad es: "<<edad<<"\n mi dni es"<<dni<<endl;}
};




int main()
{
  string name;
  int years;
  long identidad;

  Persona P1("juancito",2134123423,34);
  P1.mostrar_datos();
  Persona *lista[];
  for (int i=0;i<10;i++){
    lista[i]=new Persona;
    cout<<"ingresa nombre: ";cin>>name;
    cout<<"ingresa dni: ";cin>>identidad;
    cout<<"ingresa edad: ";cin>>years;
    lista[i]->set_dni(identidad);
    lista[i]->set_edad(years);
    lista[i]->set_nombre(name);

    lista[i]->mostrar_datos();
  }





  return 0;
}