#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;


//****Variables Iterativo
float aIt[3][4] =
//arrayDooLittle
{
{ 0, 0, 0, 0}, // row 0
{ 0, 0, 0, 0}, // row 1
{ 0, 0, 0, 0} // row 2
};

void insertValuesIt();
void printValuesIt();



//****Variables Doolittle
float aDL[3][4] =
//arrayDooLittle
{
{ 0, 0, 0, 0}, // row 0
{ 0, 0, 0, 0}, // row 1
{ 0, 0, 0, 0} // row 2
};
void insertValuesDL();
void printValuesDL();



//+++++++++++++++++++++++++++++CÓDIGO++++++++++++++++++++++
int main() {
		int menu,menu2,menu3,menu4;


        do {

                //Menu principal
            cout<<"\t\tMenu 1"<<endl<<endl;
            cout<<"1.Hoja de Presentacion"<<endl;
            cout<<"2.Metodos del Sistemas de Ecuaciones Lineales"<<endl;
            cout<<"3.Salir del programa"<<endl<<endl;
            cout<<"Elija la opcion que desea:"<<endl;
            cin>>menu;
            system("cls");


                switch(menu){
                case 1:

        //***************Página principal
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
                            cout<<"Elija la opcion que desea:"<<endl;
                            cin>>menu2;
                            system("cls");


                                switch(menu2){
                                case 1:

                                    insertValuesIt();
                                        do{
                                            system("cls");
                                            cout<<"\tMETODO ITERATIVO"<<endl<<endl;
                                            cout<<"1. Tabla o cuadro de iteraciones"<<endl;
                                            cout<<"2. Resultado del Sistema de Ecuaciones Algebraico lineal"<<endl;
                                            cout<<"3. Regresar al Menu anterior"<<endl<<endl;
                                            cout<<"Elija la opcion que desea:"<<endl;
                                            cin>>menu3;
                                            system("cls");

                                            //D
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

        //******************Método Doolittle
                                case 2:

                                    insertValuesDL(); //llama al método para insertar los valores de la matriz

                                        do{


                                            system("cls");
                                            cout<<"\tMETODO DOOLITLE"<<endl;
                                            cout<<"1. Matriz Principal"<<endl;
                                            cout<<"2. Matriz Triangular Inferior"<<endl;
                                            cout<<"3. Matriz Triangular Superior"<<endl;
                                            cout<<"4. Resultado del Sistema de Ecuaciones Algebraico Lineal"<<endl;
                                            cout<<"5. Regresar al Menu anterior"<<endl<<endl;
                                            cout<<"Elija la opcion que desea:"<<endl;
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

//Acá se insertan los valores para la matriz de doolittle
void insertValuesDL() {

    system("cls");

    float valor=0;

    cout << "\n\nInserte valores: \n";


        for (int i=0;i<=2;i++){
           std::cout << "(" << "Fila "<< i+1<< ")" << '\n';

        for (int j=0;j<=2;j++){

                std::cout << "x" << j+1<< ": " ;
            cin >> valor;
            aDL[i][j] = valor;
        }
        std::cout << "  = " ;
        cin >> valor;
        aDL[i][3] = valor;

        cout <<"\n";
    }

    printValuesDL();


}

void printValuesDL(){

    float cont;
    cout << "\nMatriz:\n";

/*
     for (int i=0;i<=2;i++){

        for (int j=0;j<=3;j++){
            std::cout << aDL[i][j]<< ", ";
        }
        cout <<"\n";
    }*/

    for (int i=0;i<=2;i++){


    std::cout <<"("<< aDL[i][0]<< ")x1 + ("<< aDL[i][1]<< ")x2 + ("<< aDL[i][2]<< ")x3 = "<< aDL[i][3] ;

        cout <<"\n";
    }


    cout << "Presione cualquier tecla para continuar: \n";
    cin >> cont;

}

void insertValuesIt(){

    system("cls");

    float valor=0;

    cout << "\n\nInserte coeficientes: \n";


    for (int i=0;i<=2;i++){
           std::cout << "(" << "Fila "<< i+1<< ")" << '\n';

        for (int j=0;j<=2;j++){

                std::cout << "x" << j+1<< ": " ;
            cin >> valor;
            aIt[i][j] = valor;
        }
        std::cout << "  = " ;
        cin >> valor;
        aIt[i][3] = valor;

        cout <<"\n";
    }
}

void printValuesIt(){

}
