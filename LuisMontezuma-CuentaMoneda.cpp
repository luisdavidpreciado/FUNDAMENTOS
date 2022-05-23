//================================================


//==> Nombre del programa: Contador de monedas
//==> Archivo : CuentaMoneda.cpp
//==>Autor: Luis Montezuma
//==>Fecha de elaboración: 2022-01-10
//==>Fecha Última actualización: 2022-05- 15


//=================================================
#include<iostream>
using namespace std;
int main()
{
	int lm_n, lm_c=0, lm_c1=0, lm_c2=0, lm_cl, lm_cz;
	float lm_x, lm_al, lm_a=0, lm_a1=0, lm_a2=0, lm_az;
	cout<<"\n\tCuenta Moneda\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>lm_n;
	do
	{
	
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>lm_x;
		lm_c = lm_c+1;
		lm_a = lm_a+lm_x;
		if(lm_x==0.25)
		{
			lm_c1 = lm_c1+1;
			lm_a1 = lm_x+lm_a1;
		}
		else
			{
				lm_c2 = lm_c2+1;
				lm_a2 = lm_a2+lm_x;
			}
   }
	while(lm_c<lm_n);
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<lm_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<lm_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<lm_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<lm_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<lm_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<lm_a1<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparacion de 2 números"<<endl;
	cout<<"//==> Archivo : Compara.cpp"<<endl;
	cout<<"//==>Autor: Luis Montezuma"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	
return 0;
}
