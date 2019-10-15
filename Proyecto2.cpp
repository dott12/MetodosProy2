#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<cmath>
using namespace std;


//****Variables Iterativo
float aIt[3][4] =
//arrayDooLittle
{
{ 0, 0, 0, 0}, // row 0
{ 0, 0, 0, 0}, // row 1
{ 0, 0, 0, 0} // row 2
};

float xDL[3];
float yDL[3];

void insertValuesIt();
void printValuesIt();




//***********************************************Variables Doolittle - Inicio
float aDL[3][4] =
//arrayDooLittle
{
{ 0, 0, 0, 0}, // row 0
{ 0, 0, 0, 0}, // row 1
{ 0, 0, 0, 0} // row 2
};

//MatrizTriangular
float mT[3][4] =
{
{ 0, 0, 0, 0}, // row 0
{ 0, 0, 0, 0}, // row 1
{ 0, 0, 0, 0} // row 2
};

float matrizL[3][3] =
{
{ 1, 0, 0}, // row 0
{ 1, 1, 0}, // row 1
{ 1, 1, 1} // row 2
};

float matrizU[3][3] =
{
{ 1, 1, 1}, // row 0
{ 0, 1, 1}, // row 1
{ 0, 0, 1} // row 2
};

void insertValuesDL();
void printValuesDL();
void resolvDL();
void printValuesInput();
void testFill();
void printmT();
void initMatrices();
void printMatrizU();
void printMatrizL();
void findXnY();
void printXYdl();
void testFill2();

//***********************************************Variables Doolittle - Fin



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
						case 1:{
    						int n,i,j,k,flag=0,interac=0;
    						double x2[n];
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
										case 1:{
											cout<<"\tSe realizara el metodo GAUSS SEIDEL"<<endl;
											cout<<"\nIngrese el numero de ecuaciones\n";           
    										cin>>n;
    										double matriz[n][n+1];       //matriz para los coeficientes
    										double x[n];                //arreglo para los valores de x1 x2 x3
    										double eps=0.00001,y,error;
    										
   											cout<<"\nIngrese los coeficientes a la matriz:\n";
    										for (i=0;i<n;i++){
												for (j=0;j<=n;j++){
													cout<<"["<<i<<"]"<<"["<<j<<"]"<<":";
													cin>>matriz[i][j];
            									}
            								}
            								
            								cout<<"\nSu matriz de coeficientes es:\n";
    										for (i=0;i<n;i++){
												for (j=0;j<=n;j++){
													cout<<matriz[i][j]<<"\t\t";
            									}
            									cout<<endl;
            								}
    										cout<<"\nIngrese los valores iniciales de x0,x1,x2:\n";
    										for (i=0;i<n;i++){
											cout<<"X"<<i<<":";
       										cin>>x[i];
    										}
											for (i=0;i<n;i++)                    //Pivotizacion parcial para hacer la matriz dominante
        										for (k=i+1;k<n;k++)
            										if (abs(matriz[i][i])<abs(matriz[k][i]))
                										for (j=0;j<=n;j++)
                										{
                    										double temp=matriz[i][j];
                    										matriz[i][j]=matriz[k][j];
                    										matriz[k][j]=temp;
                										}
                							cout.precision(4);
    										cout.setf(ios::fixed);
    										cout<<"Iter"<<setw(10);
    										for(i=0;i<n;i++)
        									cout<<"x"<<i<<setw(18);
        									cout<<"Error";
    										cout<<"\n-----------------------------------------------------------------------------";
    										cout<<endl;
    										do                            
    											{
        											cout<<"\n"<<interac+1<<setw(16);
        											for (i=0;i<n;i++)       //Ciclo para calcular los valores de x1,x2,x3
        											{
            											y=x[i];
            											x[i]=matriz[i][n];
            											for (j=0;j<n;j++)
            											{
                											if (j!=i)
                											x[i]=x[i]-matriz[i][j]*x[j];
            											}
            											x[i]=x[i]/matriz[i][i];
            											if (abs(x[i]-y)<=eps)   //  Compara el valor nuevo con el anterior
                										flag++;
            											cout<<x[i]<<setw(18);
            											error=abs(x[i]-y);
            											x2[i]=x[i];
        											}
        											cout<<error;
        											cout<<"\n";
        											interac++;   		
    											}while(flag<n);  //Si el valor de todas las variables no difiere de sus valores previos con un error mayor a eps la bandera sera n y detendra el loop.   
   
    											cout<<"\nLas soluciones son:\n";
    											for (i=0;i<n;i++)
        										cout<<"x"<<i<<" = "<<x[i]<<endl;
        										system("pause");
												system("cls");

										break;
										}	
										case 2:{
												system("cls");
												cout<<"2. Resultado del Sistema de Ecuaciones Algebraico lineal"<<endl;
												for (i=0;i<n;i++)
        										cout<<"x"<<i<<" = "<<x2[i]<<endl;
												system("pause");
												system("cls");
										break;
										}
										}
								}while(menu3!=3);
						break;
						}

        //+++++++++++++++++++++++Método Doolittle++++++++++++++++++++++++++++++++

                                case 2:

                                    insertValuesDL(); //llama al método para insertar los valores de la matriz
                                    //printValuesDL();
                                    //testFill();
                                    //testFill2();

                                    //printValuesInput();
                                    resolvDL();
                                    //printmT();
                                    initMatrices();
                                    findXnY();


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
                                                        printValuesInput();
                                                        printmT();
                                                        system("pause");
                                                        system("cls");
                                                break;

                                                case 2:
                                                        system("cls");
                                                        cout<<"2. Matriz Triangular Inferior"<<endl;
                                                        printMatrizL();

                                                        system("pause");
                                                        system("cls");
                                                break;

                                                case 3:
                                                        system("cls");
                                                        cout<<"3. Matriz Triangular Superior"<<endl;
                                                        printMatrizU();
                                                        system("pause");
                                                        system("cls");

                                                break;

                                                case 4:
                                                        system("cls");
                                                        cout<<"4. Resultado del Sistema de Ecuaciones Algebraico Lineal"<<endl;
                                                        printXYdl();
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

//++++++++++++++++++++++++++++++++++METODOS PARA ITERACIÓN (OPCIONAL USARLOS)

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

/*+++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++CÓDIGO DOOLITTLE
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++Inicio
+++++++++++++++++++++++++++
++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++*/

//Inserción de valores en la matriz de Doolittle
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




}

//Imprime los valores que el usuario ingresó en formato de sistema de ecuaciones
void printValuesDL(){

            float cont;
            cout << "\nSistema de ecuaciones:\n";


            for (int i=0;i<=2;i++){

                    std::cout <<"("<< aDL[i][0]<< ")x1 + ("<< aDL[i][1]<< ")x2 + ("<< aDL[i][2]<< ")x3 = "<< aDL[i][3] ;
                        cout <<"\n";
            }

            cout << "Presione cualquier tecla para continuar: \n";
            cin >> cont;

}



//Método que factoriza la matriz
void resolvDL(){

    //Primera fila
        mT[0][0]=aDL[0][0];
        mT[0][1]=aDL[0][1];
        mT[0][2]=aDL[0][2];


    //Segunda fila
        mT[1][0]=aDL[1][0]/aDL[0][0];
        mT[1][1]=aDL[1][1]-(mT[1][0]*aDL[0][1]);
        mT[1][2]=aDL[1][2]-(mT[1][0]*aDL[0][2]);

    //Segunda fila
        mT[2][0]=aDL[2][0]/aDL[0][0];
        mT[2][1]=(aDL[2][1]-mT[2][0]*mT[0][1])/mT[1][1];
        mT[2][2]=aDL[2][2]-(mT[2][0]*mT[0][2])-(mT[2][1]*mT[1][2]);

}


//Imprime los valores de la matriz factorizada
void printmT(){

     float cont;
            cout << "\nMatriz factorizada:\n";


            for (int i=0;i<=2;i++){

                    std::cout <<"("<< mT[i][0]<< ", "<< mT[i][1]<< ", "<< mT[i][2]<< ") " ;
                        cout <<"\n";
            }

            cout << "\n";

}


//Imprime los valores que el usuario ingresó en forma de matriz con paréntesis
void printValuesInput(){

            float cont;
            cout << "\nMatriz ingresada:\n";


            for (int i=0;i<=2;i++){

                    std::cout <<"("<< aDL[i][0]<< ", "<< aDL[i][1]<< ", "<< aDL[i][2]<< ") = ("<<aDL[i][3]<<")" ;
                        cout <<"\n";
            }

            cout << "\n";

}

//Valores de prueba 1
void testFill(){

    //llena fila 1
    aDL[0][0] = 2;
    aDL[0][1] = 1;
    aDL[0][2] = 3;
    aDL[0][3] = 11;

    //llena fila 2
    aDL[1][0] = 4;
    aDL[1][1] = 3;
    aDL[1][2] = 10;
    aDL[1][3] = 28;

    //llena fila 3
    aDL[2][0] = 2;
    aDL[2][1] = 4;
    aDL[2][2] = 17;
    aDL[2][3] = 31;

}

//Valores de prueba 2
void testFill2(){
    //llena fila 1
    aDL[0][0] = 2;
    aDL[0][1] = -1;
    aDL[0][2] = -2;
    aDL[0][3] = -1;

    //llena fila 2
    aDL[1][0] = -4;
    aDL[1][1] = 6;
    aDL[1][2] = 3;
    aDL[1][3] = 13;

    //llena fila 3
    aDL[2][0] = -4;
    aDL[2][1] = -2;
    aDL[2][2] = 8;
    aDL[2][3] = -6;

}

//Inicializa las matrices triangulares superior e inferior
void initMatrices(){

    //Matriz superior
    for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
           matrizU[i][j] = matrizU[i][j]*mT[i][j];
        }
    }

    //Matriz inferior
    for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
           matrizL[i][j] = matrizL[i][j]*mT[i][j];
        }

    }

        matrizL[0][0]=1;
        matrizL[1][1]=1;
        matrizL[2][2]=1;

}

//Imprime la matriz triangular superior
void printMatrizU(){

            cout << "\nMatriz triangular superior:\n";
            for (int i=0;i<=2;i++){
                    std::cout <<"("<< matrizU[i][0]<< ", "<< matrizU[i][1]<< ", "<< matrizU[i][2]<< ")" ;
                        cout <<"\n";
            }
}

//Imprime la matriz triangular inferior
void printMatrizL(){

            cout << "\nMatriz triangular inferior:\n";
            for (int i=0;i<=2;i++){
                    std::cout <<"("<< matrizL[i][0]<< ", "<< matrizL[i][1]<< ", "<< matrizL[i][2]<< ")" ;
                        cout <<"\n";
            }
}

//Metodos para encontrar x y y al final del procedimiento
void findXnY(){
    yDL[0]=aDL[0][3]/matrizL[0][0];
    yDL[1]=aDL[1][3]+(-1*matrizL[1][0]*yDL[0])/matrizL[1][1];
    yDL[2]=aDL[2][3]+(-1*matrizL[2][0]*yDL[0])+(-1*matrizL[2][1]*yDL[1])/matrizL[2][2];

    xDL[2]=matrizU[2][2]/yDL[2];
    xDL[1]=(yDL[1]-(xDL[2]*matrizU[1][2]))/matrizU[1][1];
    xDL[0]=(yDL[0]-(xDL[1]*matrizU[0][1])-(matrizU[0][2]*xDL[2]))/matrizU[0][0];
}

//Imprimir valores de x y y al final del procedimiento
void printXYdl(){
     cout <<"\n";
      cout <<"\n";
    std::cout <<"y1 = "<< yDL[0]<< "\n";
    std::cout <<"y2 = "<< yDL[1]<< "\n";
    std::cout <<"y3 = "<< yDL[2]<< "\n";

    cout <<"\n";

    std::cout <<"x1 = "<< xDL[0]<< "\n";
    std::cout <<"x2 = "<< xDL[1]<< "\n";
    std::cout <<"x3 = "<< xDL[2]<< "\n";
}


/*+++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++CÓDIGO DOOLITTLE
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++FIN
+++++++++++++++++++++++++++
++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++*/


