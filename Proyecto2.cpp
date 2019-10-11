#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main() {
		int menu,menu2,menu3,menu4;


do {
	cout<<"\t\tMenu 1"<<endl<<endl;
	cout<<"1.Hoja de Presentacion"<<endl;
	cout<<"2.Metodos del Sistemas de Ecuaciones Lineales"<<endl;
	cout<<"3.Salir del programa"<<endl<<endl;
	cout<<"Eliga la opcion que desea:"<<endl;
	cin>>menu;
	system("cls");
		switch(menu){
		case 1:
				cout<<"\tUNIVERSIDAD TECNOLOGICA DE PANAMA"<<endl;
				cout<<"\tFACULTAD DE SISTEMAS Y COMPUTACION"<<endl;
				cout<<"LICENCIATURA EN INGENIERIA EN SISTEMAS COMPUTACIONALES"<<endl;
				cout<<"\tMETODOS NUMERICOS PARA INGENIEROS"<<endl;
				cout<<"\t\tPROYECTO N2"<<endl;
				cout<<"\t\t   TEMA:"<<endl;
				cout<<"SISTEMAS DE ECUACIONES ALGEBRAICAS LINEALES"<<endl;
				cout<<"FACILITADOR: ING.JACQUELINE S. DE CHING"<<endl;
				cout<<"\t\tINTEGRANTES:"<<endl;
				cout<<"\t EDGAR MARTIN 8-913-1957"<<endl;
				cout<<"\t IVES DE LA CRUZ 6-720-1526"<<endl;
				cout<<"\t\t 1IL-124"<<endl;
				cout<<"\t\t 20/10/19"<<endl;
				system("pause");
				system("cls");
		break;
		case 2:
				do {
					system("cls");
					cout<<"\t\tMenu 2"<<endl<<endl;
					cout<<"1. Metodo Iteractivo "<<endl;
					cout<<"2. Metodo Doollitle"<<endl;
					cout<<"3.Regresar al Menu Principal"<<endl<<endl;
					cout<<"Eliga la opcion que desea:"<<endl;
					cin>>menu2;
					system("cls");
						switch(menu2){
						case 1:
							 	do{
									system("cls");
									cout<<"\tMETODO ITERATIVO"<<endl<<endl;
									cout<<"1. Tabla o cuadro de iteraciones"<<endl;
									cout<<"2. Resultado del Sistema de Ecuaciones Algebraico lineal"<<endl;
									cout<<"3. Regresar al Menu anterior"<<endl<<endl;
									cout<<"Eliga la opcion que desea:"<<endl;
									cin>>menu3;
									system("cls");
										switch(menu3){
										case 1:
												system("cls");
												cout<<"1. Tabla o cuadro de iteraciones"<<endl;
												system("pause");
												system("cls");

										break;

										case 2:
												system("cls");
												cout<<"2. Resultado del Sistema de Ecuaciones Algebraico lineal"<<endl;
												system("pause");
												system("cls");
												break;

										}
								}while(menu3!=3);
						break;

						case 2:
								do{
									system("cls");
									cout<<"\tMETODO DOOLITLE"<<endl;
									cout<<"1. Matriz Principal"<<endl;
									cout<<"2. Matriz Triangular Inferior"<<endl;
									cout<<"3. Matriz Triangular Superior"<<endl;
									cout<<"4. Resultado del Sistema de Ecuaciones Algebraico Lineal"<<endl;
									cout<<"5. Regresar al Menu anterior"<<endl<<endl;
									cout<<"Eliga la opcion que desea:"<<endl;
									cin>>menu4;
									system("cls");
										switch(menu4){
										case 1:
												system("cls");
												cout<<"1. Matriz Principal"<<endl;
												system("pause");
												system("cls");
										break;

										case 2:
												system("cls");
												cout<<"2. Matriz Triangular Inferior"<<endl;
												system("pause");
												system("cls");
										break;

										case 3:
												system("cls");
												cout<<"3. Matriz Triangular Superior"<<endl;
												system("pause");
												system("cls");
										break;

										case 4:
												system("cls");
												cout<<"4. Resultado del Sistema de Ecuaciones Algebraico Lineal"<<endl;
												system("pause");
												system("cls");
										break;
										}
								}while(menu4!=5);

						break;


						}


				}while(menu2!=3);
		}

	}while(menu!=3);

}
