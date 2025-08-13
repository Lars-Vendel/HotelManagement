#include<Librerias.h>
class Fecha 
{
private:
	int dia;
	int mes;
	int annio;
public:
	Fecha(int dia, int mes, int annio){
		setMes(mes);
		setDia(dia);
		setAnnio(annio);
	}
	void setMes(int mes){
		if(mes>=1 && mes<=12){
			this->mes=mes;
		}else{
			cout<<"Mes invalido("<<mes<<") se establece 1"<<endl;
			this->mes=1;
		}
		
	}
	void setDia(int dia){
		int diasPorMes[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		
		// comprobar si el dia está dentro del rango del mes
		if ( dia > 0 && dia <= diasPorMes[mes] ){
			this->dia=dia;   
		}else{
				cout<<"Dia invalido("<<dia<<") se establece en 1"<<endl;
				this->dia=1;
		}
	}
	void setAnnio(int annio){
		this->annio=annio;
	}
		
	//Devuelve la fecha completa
	string toString(){
		std::stringstream out; //variable para concatenar texto
		out<<this->dia<<"/"<<this->mes<<"/"<<this->annio; // Ejp: 13/08/2015
		return out.str();
	}   
			
};
