/*
Proyecto final
1.- Ordenar tres números ( arbol)	
2.- Ordenar tres números (IV) V2
3.- Promediar 5 calificaciones
4.- Promediar n calificaciones
5.- Ordenar n números	
6.- Capturar e imprimir una matriz
7.- Suma de dos matrices
8.- Multiplicacion de matrices
9.- Transformar un número decimal en binario
10.- Ecuación de segundo grado
11.- Decimal a octal
12.- Decimal a hexadecimal
13.- Números primos
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>	

void hola ( const char *strText ) 
{
    char ch;
    short i, iLength;	
    iLength = strlen ( strText );
    
    for ( i = 0; i < iLength; i++ ) 
	{
            ch = strText[i];
            
            switch ( ch ) 
			{
                    case 'á':
                        printf ( "%c",160 );
                        break;
                        
                    case 'é':
                        printf ( "%c",130 );
                        break;
                        
                    case 'í':
                        printf ( "%c",161 );
                        break;
                        
                    case 'ó':
                        printf ( "%c",162 );
                        break;
                        
                    case 'ú':
                        printf ( "%c",163 );
                        break;
                        
                    case 'ñ':
                        printf ( "%c", 126 );
                        break;
                        
                    case 'Ñ':
                        printf ( "%c", 127 );
                        break;
                        
                    case 'Á':
                        printf ( "%c", -75 );
                        break;
                        
                    case 'É':
                        printf ( "%c", -112 );
                        break;
                        
                    case 'Í':
                        printf ( "%c", -42 );
                        break;
                        
                    case 'Ó':
                        printf ( "%c", -32 );
                        break;
                        
                    case 'Ú':
                        printf ( "%c", -23 );
                        break;
                    
					case '¿':
						printf ("%c", 168);
						break;        
                        
                    default:
                        printf ( "%c", ch );
                        break;
                        
                }
        }
}

void arbol()
{
	float a,b,c;
	
	system("color 0e");	printf("\t%c \t\t\t\t\t\t  %c\n\t%c",201,187,185);
	hola("Programa que ordena tres números de mayor a menor"); printf("%c\n\t%c \t\t\t\t\t\t  %c",204,200,188);
	printf("\n\t\t          %c%c%c \\(>u<)/ %c%c%c",2,2,2,2,2,2);
	hola("\n\n\tDame el primer número por favor :D");
	printf(" %c ",16); scanf("%f",&a);
	hola("\n\n\tDame el segundo número por favor :|");
	printf(" %c ",16); scanf("%f",&b);
	hola("\n\n\tDame el tercer número por favor :C");
	printf(" %c ",16); scanf("%f",&c);
	system("cls");
	
	hola("\n\tLos números ordenados de mayor a menor quedan: \n");
	
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
			{
				printf("\n\t\t\t\t%.2f",a);
				printf("\n\t\t\t\t%.2f",b);
				printf("\n\t\t\t\t%.2f",c);
			}
			
			else
			{
				printf("\n\t\t\t\t%.2f",a);
				printf("\n\t\t\t\t%.2f",c);
				printf("\n\t\t\t\t%.2f",b);
			}			
		}
		
		else
		{
			printf("\n\t\t\t\t%.2f",c);
			printf("\n\t\t\t\t%.2f",a);
			printf("\n\t\t\t\t%.2f",b);	
		}
	}
	
	else
	{
		if(b>c)
		{
			if(a>c)
			{
				printf("\n\t\t\t\t%.2f",b);
				printf("\n\t\t\t\t%.2f",a);
				printf("\n\t\t\t\t%.2f",c);	
			}
			
			else
			{
				printf("\n\t\t\t\t%.2f",b);
				printf("\n\t\t\t\t%.2f",c);
				printf("\n\t\t\t\t%.2f",a);
			}
		}
		
		else
		{
			printf("\n\t\t\t\t%.2f",c);
			printf("\n\t\t\t\t%.2f",b);
			printf("\n\t\t\t\t%.2f",a);
		}
		
	}
	
	printf("\n\n\t\"Solo se muestran dos decimales por estetica\"");
	printf("\n\n\t"); 
	system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	
	
}

void IV()
{
	float a,b,c,x;
	x=0; //Lo pongo porque se creaban datos basura en el switch
	
	system("color 0e"); printf("\t%c \t\t\t\t\t\t  %c\n\t%c",201,187,185);
	hola("Programa que ordena tres números de mayor a menor"); printf("%c\n\t%c \t\t\t\t\t\t  %c",204,200,188);
	printf("\n\t\t         %c%c%c \\(>u<)/ %c%c%c",2,2,2,2,2,2);
	hola("\n\n\tDame el primer número: ");
	scanf("%f",&a);
	hola("\n\tDame el segundo número: ");
	scanf("%f",&b);
	hola("\n\tDame el tercer número: ");	
	scanf("%f",&c);
	
	if(a>b){
	}
	else{
		x=a;
		a=b;
		b=x;
		}
	if(b>c){
	}
	else {
		x=b;
		b=c;
		c=x;
	}
	if(a>b){
	}
	else{
		x=a;
		a=b;
		b=x;
	}
	
	system("cls"); hola("\n\tEL orden de los números de mayor a menor es : ");
	printf("\n\n\t\t\t%.2f",a);
	printf("\n\t\t\t\t%.2f",b);
	printf("\n\t\t\t\t\t%.2f",c);
	printf("\n\tDe escalerita que baja O_o");
	printf("\n\n\t"); system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	
}

void cincocal()
{
	float a,b,c,d,e,p,por;
	p=0; por=0;
	
	system("color 0e");	printf("\t%c \t\t\t\t\t\t     %c\n\t%c",201,187,185);
	hola("Programa que promedia cinco calificaciones locas UwU"); printf("%c\n\t%c \t\t\t\t\t\t     %c",204,200,188);	
	printf("\n\t\t           %c%c%c \\(>u<)/ %c%c%c",2,2,2,2,2,2);
	
	hola("\n\n\tSería tan amable de darme la 1er calificación por favor :D"); 
	printf(" %c ",26);scanf("%f",&a);
	hola("\n\n\tla segunda calificación :)"); 
	printf(" %c ",26);scanf("%f",&b);
	hola("\n\n\tDame la 3era calificación :/"); 
	printf(" %c ",26);scanf("%f",&c);
	hola("\n\n\tDame la cuarta calificación por favor 8o"); 
	printf(" %c ",26);scanf("%f",&d);
	hola("\n\n\tDame la 5ta calificación por favor xP"); 
	printf(" %c ",26);scanf("%f",&e);
	
	p=(a+b+c+d+e) / 5;
	por= (p* 0.1 * 100);
	system("cls");
	
	printf("\n\t%c%c El promedio de las 5 calificaciones es %.2f %c%c",29,29,p,29,29);
	printf("\n\n\tEl promedio de las 5 calificaciones resulto ser el %.2f %% de el 10",por);
	
	printf("\n\n\t"); 
	system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	
	
}

int ncal()
{
	int i,n;
	float cal [100],suma,prom;
	suma=0; prom=0; n=0; //Esto lo pude porque al entrar de nuevo desde el switch se creaban datos basura
	
	system("cls"); 
	system("color 0e"); printf("\t%c \t\t\t\t       %c\n\t%c",201,187,185);
	printf("Programa que promedia n calificaciones"); printf("%c\n\t%c \t\t\t\t       %c",204,200,188);
	printf("\n\t\t     %c%c%c \\(>u<)/ %c%c%c",2,2,2,2,2,2);
	printf("\n\n\t%cCuantas calificaciones se van a promediar? ",168);
	scanf("%i",&n);	
	system("cls");																																																		
	
	for(i=1; i<=n; i=i+1)
	{
		printf("\n\tDame la %ia",i); 
		hola(" calificación: ");
		scanf("%f",&cal[i]);
	}
    /*fin del for*/
    
    for(i=1; i<=n; i=i+1)
    {
    	suma = suma + cal[i];
	}
    /*Fin del para*/
    
    prom = suma/n;
    system("cls");
    printf("\n\tEl promedio es %.2f\n\n\t",prom); /*Al poner .2 en el campo real solo tomara dos decimales*/
    printf("Suma = %.2f\n\n\tPromedio = %.2f/%i\n\n\t",suma,suma,n);
    
	system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando  \n\n");
	
	return 0;
}

void ordenar()
{
		int n,i,e,z,x[100],b[100],o;
		z=0;
		
	system("color 0e"); printf("\t%c \t\t\t\t\t     %c\n\t%c",201,187,185);
	hola("Programa que ordena números de mayor a menor"); printf("%c\n\t%c \t\t\t\t\t     %c",204,200,188);		
	printf("\n\t\t        %c%c%c \\(>u<)/ %c%c%c",2,2,2,2,2,2);
	printf("\n\n\t%c",168);
	hola("Cuántos números se van a ordenar? ");
	scanf("%i",&n); system("cls");
	
	hola("\n\tLectura de números..."); //Esto solo es para leer los numeros
	for (i=1; i<=n; i=i+1)
	{
		
		printf("\n\n\tDame el %io.",i); 
		hola(" número: ");
		scanf("%i",&x[i]);
		b[i]=x[i];
	}
	
	system("cls");
		
	for(e=1; e<=n-1; e++) //Todo esto sólo es para ordenarlos dentro de la maquina en b[i]
	{
	    for(i=e+1; i<=n; i++)
		{
	        
			if(x[e]>x[i])
			{
			} //No hace nada
	        else 
			   {
			   	z=x[e]; 
				x[e]=x[i];
				x[i]=z;
			   }
	        //Fin del if
	    }
		//Fin del for interno
    }
	//Fin del for externo
	
	hola("\n\n\tLos números ordenados de mayor a menor quedan: "); hola("\t\tLos números originales son: "); printf("\n");
      for(o=1; o<=n; o++)
	  	{
			printf("\n\t\t\t\t%i\t\t\t\t\t\t%i",x[o],b[o]); 
	
	  	}
	  	
	printf("\n\n\t"); 
	system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");   
	
	
}

void lmatriz()
{
	int m,n,i,j,a[10][10];	
	
	system("color 0e"); printf("\t%c \t\t\t\t\t\t  %c\n\t%c",201,187,185);
	printf("Programa que captura e imprime matrices locas ;u;"); printf("%c\n\t%c \t\t\t\t\t          %c",204,200,188);
	printf("\n\t\t         %c%c%c \\(>u<)/ %c%c%c",2,2,2,2,2,2);
	printf("\n\n\t%c",168);		
	hola("Cuantos renglones tendrá? ");
	scanf("%i",&m);                         // m=no de renglones
	printf("\n\n\t%c",168);
	hola("Cuantas columnas tendrá? ");
	scanf("%i",&n);                         // n=no de columnas
	system("cls");
	
	for(i=1; i<=m; i=i+1)
	    for( j=1; j<=n; j=j+1)
		{
			printf("\n\tDame el elemento de el %io renglon, %io columna de la matriz: ",i,j);
			scanf("%i",&a[i][j]);
		}
		
		system("cls");
		printf("\n\tEsta es tu matriz: \n\t");
		for(i=1; i<=m; i++)
		{
		    printf("\n"); //Pongo un salto de linea cada vez que se ejecute la instruccion
	        for( j=1; j<=n; j++ )
			{
		    printf("\t%i",a[i][j]);
	        	
			}
	    }
	
	printf("\n\n\t");
	system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	
}

void sumamatriz()
{
		int suma,o,p,m,n,i,j,u,v,x,y,a[10][10],b[10][10],c[10][10],k;
		suma=0;
		
	system("color 0e"); printf("\t%c \t\t\t\t\t\t      %c\n\t%c",201,187,185);
	printf("Programa que captura, imprime y suma o resta matrices");	printf("%c\n\t%c \t\t  %c%c%c \\(>u<)/ %c%c%c\t\t      %c",204,200,2,2,2,2,2,2,188);	
	hola("\n\n\tAl sumar matrices se establece como restriccion que a fuerzas el número de \n\tcolumnas y de filas de \"A\" debe ser exactamente igual a las col. y filas de \"B\"");
	printf("\n\n\t%cQuieres sumar o restar las matrices?\n\n\tPresiona 1 seguido de un enter para sumar matrices\n\n\tPresiona 2 seguido de un enter para restar matrices\n\n\t",168); scanf("%i",&k); system("cls");
	
		switch (k){
			
			case 1:
					
				printf("\n\tCuantos renglones tendra la primer matriz? ");
				scanf("%i",&m);                         // m=no de renglones
				system("cls");
				printf("\n\tCuantas columnas tendra la primer matriz? ");
				scanf("%i",&n);                         // n=no de columnas
				system("cls");
	
				printf("\n\tCuantos renglones tendra la segunda matriz? ");
				scanf("%i",&u);                         // u=no de renglones
				system("cls");
				printf("\n\tCuantas columnas tendra la segunda matriz? ");
				scanf("%i",&v);                         // v=no de columnas	
				system("cls");
				
				 if(m<0){
					system("color 8c");
					hola("\n\tTorpe, me has dado un número de renglón negativo >:C");
					printf("\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
				}
				else if(n<0){
					system("color 8c");
					hola("\n\tTorpe, me has dado un número de columna negativo >:C");
					printf("\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
				}
				else if(u<0){
					system("color 8c");
					hola("\n\tTorpe, me has dado un número de renglón negativo >:C");
					printf("\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
				}
				else if(v<0){
					system("color 8c");
					hola("\n\tTorpe, me has dado un número de columna negativo >:C");
					printf("\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
				}
				
				else if(m==u && n==v)
				{
					for(i=1; i<=m; i=i+1)
				    for( j=1; j<=n; j=j+1)
					{
							printf("\n\tDame el elemento de el %io renglon, %io columna de la primera matriz: ",i,j);
						scanf("%i",&a[i][j]);
						system("cls");
						}
					
				
	

					for(o=1; o<=u; o=o+1)
				    for( p=1; p<=v; p=p+1)
					{
						printf("\n\tDame el elemento de el %io",o); hola(" renglón,"); printf(" %io columna de la segunda matriz: ",p);
						scanf("%i",&b[o][p]);
						system("cls");
					}

	
    			    printf("\n\n\tMatriz \"A\"\n");	   
  	   
				for(i=1; i<=m; i++)
					{
					    printf("\n"); //Pongo un salto de linea cada vez que se ejecute la instruccion
				        for( j=1; j<=n; j++ )
						{
					    printf("\t%i",a[i][j]);
				        	
						}
				    }
	    
	    
				printf("\n\n\tMatriz \"B\"\n");
		
					for(i=1; i<=u; i++)
					{
					    printf("\t\n"); //Pongo un salto de linea cada vez que se ejecute la instruccion
				        for( j=1; j<=v; j++ )
						{
					    printf("\t%i",b[i][j]);	
	        	
						}
				    }
	    
				    printf("\n\n\tMatriz \"A\" + \"B\"\n");
	    
				    for(i=1; i<=m; i++)
						{
					    printf("\n"); //Pongo un salto de linea cada vez que se ejecute la instruccion
				        for( j=1; j<=n; j++ )
						{
							c[i][j]=(a[i][j]+b[i][j]);
					    	printf("\t%i",c[i][j]);
			        	
						}
				    }
				    
				    printf("\n\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	
	    		}
				
				else{
					system("color 8c");
					hola("\n\tAl sumar matrices se establece como restriccion que a fuerzas el número de \n\tcolumnas y de filas de \"A\" debe ser exactamente igual a las col. y filas de \"B\"\n\tPor lo tanto es imposible hacer una suma de matrices, saldras del programa");
					printf("\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	
				}
				
				break;
			
			case 2:	
			
				printf("\n\tCuantos renglones tendra la primer matriz? ");
				scanf("%i",&m);                         // m=no de renglones
				system("cls");
				printf("\n\tCuantas columnas tendra la primer matriz? ");
				scanf("%i",&n);                         // n=no de columnas
				system("cls");
	
				printf("\n\tCuantos renglones tendra la segunda matriz? ");
				scanf("%i",&u);                         // u=no de renglones
				system("cls");
				printf("\n\tCuantas columnas tendra la segunda matriz? ");
				scanf("%i",&v);                         // v=no de columnas	
				system("cls");
	
				if(m<0){
					system("color 8c");
					hola("\n\tTorpe, me has dado un número de renglón negativo >:C");
					printf("\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
				}
				else if(n<0){
					system("color 8c");
					hola("\n\tTorpe, me has dado un número de columna negativo >:C");
					printf("\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
				}
				else if(u<0){
					system("color 8c");
					hola("\n\tTorpe, me has dado un número de renglón negativo >:C");
					printf("\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
				}
				else if(v<0){
					system("color 8c");
					hola("\n\tTorpe, me has dado un número de columna negativo >:C");
					printf("\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
				}
				
				else if(m==u && n==v)
				{
					for(i=1; i<=m; i=i+1)
				    for( j=1; j<=n; j=j+1)
					{
							printf("\n\tDame el elemento de el %io renglon, %io columna de la primera matriz: ",i,j);
						scanf("%i",&a[i][j]);
						system("cls");
						}
					
				
	

					for(o=1; o<=u; o=o+1)
				    for( p=1; p<=v; p=p+1)
					{
						printf("\n\tDame el elemento de el %io",o); hola(" renglón,"); printf(" %io columna de la segunda matriz: ",p);
						scanf("%i",&b[o][p]);
						system("cls");
					}

	
    			    printf("\n\n\tMatriz \"A\"\n");	   
  	   
				for(i=1; i<=m; i++)
					{
					    printf("\n"); //Pongo un salto de linea cada vez que se ejecute la instruccion
				        for( j=1; j<=n; j++ )
						{
					    printf("\t%i",a[i][j]);
				        	
						}
				    }
	    
	    
				printf("\n\n\tMatriz \"B\"\n");
		
					for(i=1; i<=u; i++)
					{
					    printf("\t\n"); //Pongo un salto de linea cada vez que se ejecute la instruccion
				        for( j=1; j<=v; j++ )
						{
					    printf("\t%i",b[i][j]);	
	        	
						}
				    }
	    
				    printf("\n\n\tMatriz \"A\" - \"B\"\n");
	    
				    for(i=1; i<=m; i++)
						{
					    printf("\n"); //Pongo un salto de linea cada vez que se ejecute la instruccion
				        for( j=1; j<=n; j++ )
						{
							c[i][j]=(a[i][j]-b[i][j]);
					    	printf("\t%i",c[i][j]);
			        	
						}
				    }
				    
				  	printf("\n\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	  
	    		}
				
				else{
					system("color 8c");
					hola("\n\tAl sumar matrices se establece como restriccion que a fuerzas el número de \n\tcolumnas y de filas de \"A\" debe ser exactamente igual a las col. y filas de \"B\"\n\tPor lo tanto es imposible hacer una suma de matrices, saldras del programa");
					printf("\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	
				}
				
				break;
				
				default:
					
					hola("\n\tElejiste una opción que no esta en la elección\n\n\tComo default entraras a la suma de matrices\n\n\t"); system("pause"); system("cls");
					printf("\n\tCuantos renglones tendra la primer matriz? ");
				scanf("%i",&m);                         // m=no de renglones
				system("cls");
				printf("\n\tCuantas columnas tendra la primer matriz? ");
				scanf("%i",&n);                         // n=no de columnas
					system("cls");
		
				printf("\n\tCuantos renglones tendra la segunda matriz? ");
				scanf("%i",&u);                         // u=no de renglones
				system("cls");
				printf("\n\tCuantas columnas tendra la segunda matriz? ");
				scanf("%i",&v);                         // v=no de columnas	
				system("cls");
	
				if(m<0){
					system("color 8c");
					hola("\n\tTorpe, me has dado un número de renglón negativo >:C");
					printf("\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
				}
				else if(n<0){
					system("color 8c");
					hola("\n\tTorpe, me has dado un número de columna negativo >:C");
					printf("\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
				}
				else if(u<0){
					system("color 8c");
					hola("\n\tTorpe, me has dado un número de renglón negativo >:C");
					printf("\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
				}
				else if(v<0){
					system("color 8c");
					hola("\n\tTorpe, me has dado un número de columna negativo >:C");
					printf("\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
				}
				
				else if(m==u && n==v)
				{
					for(i=1; i<=m; i=i+1)
				    for( j=1; j<=n; j=j+1)
					{
							printf("\n\tDame el elemento de el %io renglon, %io columna de la primera matriz: ",i,j);
						scanf("%i",&a[i][j]);
						system("cls");
						}
					
				
	

					for(o=1; o<=u; o=o+1)
				    for( p=1; p<=v; p=p+1)
					{
						printf("\n\tDame el elemento de el %io",o); hola(" renglón,"); printf(" %io columna de la segunda matriz: ",p);
						scanf("%i",&b[o][p]);
						system("cls");
					}

	
    			    printf("\n\n\tMatriz \"A\"\n");	   
  	   
				for(i=1; i<=m; i++)
					{
					    printf("\n"); //Pongo un salto de linea cada vez que se ejecute la instruccion
				        for( j=1; j<=n; j++ )
						{
					    printf("\t%i",a[i][j]);
				        	
						}
				    }
	    
	    
				printf("\n\n\tMatriz \"B\"\n");
		
					for(i=1; i<=u; i++)
					{
					    printf("\t\n"); //Pongo un salto de linea cada vez que se ejecute la instruccion
				        for( j=1; j<=v; j++ )
						{
					    printf("\t%i",b[i][j]);	
	        	
						}
				    }
	    
				    printf("\n\n\tMatriz \"A\" + \"B\"\n");
	    
				    for(i=1; i<=m; i++)
						{
					    printf("\n"); //Pongo un salto de linea cada vez que se ejecute la instruccion
				        for( j=1; j<=n; j++ )
						{
							c[i][j]=(a[i][j]+b[i][j]);	
					    	printf("\t%i",c[i][j]);
			        	
						}
				    }
				    
				    printf("\n\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	
	    
	    
				}
				
				else{
					system("color 8c");
					hola("\n\tAl sumar matrices se establece como restriccion que a fuerzas el número de \n\tcolumnas y de filas de \"A\" debe ser exactamente igual a las col. y filas de \"B\"\n\tPor lo tanto es imposible hacer una suma de matrices, saldras del programa");
					printf("\n\n\t"); 
					system ("pause"); system("cls"); //Despedida
					system("color 8b");
					printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
					hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	
				}
				
				break;
	 
	 		}
	
}

void multimatriz()
{
	int suma,z,o,p,m,n,i,j,u,v,x,y,a[10][10],b[10][10],c[10][10];
	suma=0; z=0;
		
	system("color 0e"); printf("\t%c \t\t\t\t\t\t    %c\n\t%c",201,187,185);
	printf("Programa que captura, imprime y multiplica matrices");	printf("%c\n\t%c \t\t  %c%c%c \\(>u<)/ %c%c%c\t\t    %c",204,200,2,2,2,2,2,2,188);	
	printf("\n\n\tCuantos renglones tendra la primer matriz? ");
	scanf("%i",&m);                         // m=no de renglones
	system("cls");
	printf("\n\tCuantas columnas tendra la primer matriz? ");
	scanf("%i",&n);                         // n=no de columnas
	system("cls");
	
	printf("\n\tCuantos renglones tendra la segunda matriz? ");
	scanf("%i",&u);                         // u=no de renglones
	system("cls");
	printf("\n\tCuantas columnas tendra la segunda matriz? ");
	scanf("%i",&v);                         // v=no de columnas	
	system("cls");
	
	if(m<0){
		system("color 8c");
		hola("\n\tTorpe, me has dado un número de renglón negativo >:C");
		printf("\n\n\t"); 
		system ("pause"); system("cls"); //Despedida
		system("color 8b");
		printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
		hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	}
	else if(n<0){
		system("color 8c");
		hola("\n\tTorpe, me has dado un número de columna negativo >:C");
		printf("\n\n\t"); 
		system ("pause"); system("cls"); //Despedida
		system("color 8b");
		printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
		hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	}
	else if(u<0){
		system("color 8c");
		hola("\n\tTorpe, me has dado un número de renglón negativo >:C");
		printf("\n\n\t"); 
		system ("pause"); system("cls"); //Despedida
		system("color 8b");
		printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
		hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	}
	else if(v<0){
		system("color 8c");
		hola("\n\tTorpe, me has dado un número de columna negativo >:C");
		printf("\n\n\t"); 
		system ("pause"); system("cls"); //Despedida
		system("color 8b");
		printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
		hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	}
	
	else if(n==u)
	{
	  for(i=1; i<=m; i=i+1)
	    for( j=1; j<=n; j=j+1)
		{
			printf("\n\tDame el elemento de el %io renglon, %io columna de la primera matriz: ",i,j);
			scanf("%i",&a[i][j]);
			system("cls");
		}
		
	
	

		for(o=1; o<=u; o=o+1)
	    for( p=1; p<=v; p=p+1)
		{
			printf("\n\tDame el elemento de el %io",o); hola(" renglón,"); printf(" %io columna de la segunda matriz: ",p);
			scanf("%i",&b[o][p]);
			system("cls");
		}

	
        printf("\n\nMatriz \"A\"\n");	   
  	   
	for(i=1; i<=m; i++)
		{
		    printf("\n"); //Pongo un salto de linea cada vez que se ejecute la instruccion
	        for( j=1; j<=n; j++ )
			{
		    printf("\t%i",a[i][j]);
	        	
			}
	    }
	    
	    
		printf("\n\nMatriz \"B\"\n");
		
		for(i=1; i<=u; i++)
		{
		    printf("\t\n"); //Pongo un salto de linea cada vez que se ejecute la instruccion
	        for( j=1; j<=v; j++ )
			{
		    printf("\t%i",b[i][j]);	
	        	
			}
	    }
	    
	    printf("\n\nMatriz \"A\"x\"B\"\n");
	    
	    //Debo de obtener C[][] con los valores de las metrices anteriores
	    
	   
	  
	    for(x=1; x<=v; x++) //Aqui solo obtengo la matriz C[m][v]
		{
			for(y=1; y<=m; y++)
			{
				c[x][y]=0;
		              for(z=1; z<=n; z++)
					  {
					  	c[x][y] += (a[x][z]*b[z][y]);
					  }
			}
		}
		
		
		for(x=1; x<=v; x++) //Aqui solo imprimo la matriz del orden de tipo C[][]
		{
			printf("\t\n");
			for(y=1; y<=m; y++)
			{
				printf("\t%i",c[x][y]);
			}
		}
	    
	printf("\n\n\t"); 
	system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");

	    
	    
	}
	
	
	else
	{
	hola("\n\tNo es posible multiplicar las matrices porque el numero de columnas de \"A\" \n\tno es igual al número de Renglones de \"B\"");
	printf("\n\n\t"); 
	system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
		
    }
        
	
}

void binario()
{
	int a,n,i,b[100],j,e[j],s; //El problema era que por default b[i] solo agarraba 10 valores y por eso s = 9 o en otras palabras, solamente se podian guardar 9 cosas en b[i]
	float f,c;
	
	system("color 0e"); printf("\t%c \t\t\t\t\t\t  %c\n\t%c",201,187,185);
	hola("Programa que traduce números de decimal a binario"); /*Titulo*/ printf("%c\n\t%c \t\t  %c%c%c \\(>u<)/ %c%c%c\t\t  %c",204,200,2,2,2,2,2,2,188);
	hola("\n\n\tTen en cuenta que puedes usar números NEGATIVOS o REALES");
	hola("\n\n\tDame tu número: "); //Lectura de 
	scanf("%f",&c);  system("cls");            //datos y limpieza de pantalla 
	
	n=c;  //Aqui obtengo y separo el valor entero del usuario
	
	
	//Vamos a obtener primero los valores binarios decimales 
	//Uso un cliclo for para no tener decimales infinitos
	
	hola("\n\tEl cociente de los enteros divididos sucesivamente y los números decimales multiplicados sucesivamente son: \n ");
	
	//Vamos a obtener los valores binarios enteros	
    //Los residuos de los enteros divididos sucesivamente son: 	

	if(c==0.0) //0 es el unico numero que no empieza con 1 en binario	
	{
		system("color 8c");
		printf("\n\t0"); //Si el valor es 0
	}
		
	else if(n<0){   //SI el valor es negativo
		
		n=-n;     //Cambio signo
		c=-c;
		f=c-n; //Aqui obtengo y separo el valor fraccional del usuario
		i=0; // Para que la variable inicie en 0 ( si no lo hago no tendra forma de aumentar de 1 en 1 si no establezco un valor previo o se usaria un valor basura )
		while( n/2>0 ) //La sentencia "while" es una sentencia de condicion "mientras que" donde se establece una "condicion" y una "instruccion" de la forma:    While (Condicion){
		                                        //                                                                                                                            instrucción }
	                                            // En otras palabras se refiere a que mientras el criterio se avale la funcion hara tal instruccion tantas veces hasta que la condicion se anule
	
	
	 { 	
	 
	 	a = n/2; //Asigno a en n/2 para usarlo en la operacion residuo
	 	i++; //Para que incremente la variable de iteracion de b[i] cada que entre al ciclo	
	 	
	 	b[i] = (n-(a*2));  //Operación residuo y lo guardo en b[i]
	 	s=i; //Para despues usarlo en el for como forma de saber cuantas veces se hizo esta operacion y empezar en b[s] como ultimo valor
	 		
	 	n = a;	//Guardo mi valor de a en n para usarlo en el siguiente ciclo	
	 	
	}
	
	printf("\n\t%c%c%c ",6,6,6);
	printf("-(signo menos)");  //Doy de vuelta el signo negativo
	printf(" 1");   //Establezco el uno ya que todos los numeros binarios a excepcion del 0 empiezan con 1 y porque el ciclo while sería infinito si intento igualar (n/2>=0)
	
	for (i=s; i>=1 ; i--)
	{
		printf(" %i",b[i]); 	
	}
	
	printf(" . ");
	
	for(j=1; j<=8; j=j+1) //El ocho hace referencia nadamas a cuantos decimales quiero yo  		
	{
		f=f*2; // primero multiplico por 2 el valor decimal
		if(f>=1.0)  // si el resultado es mayor a 1.0 entero se entra al if
		{
			f=f-1; //primero quitamos el 1 entero ( por ejemplo 1.56 - 1 = .56 ) para que se guarde en f y se use en el sig. ciclo
			e[j]=1; //le asigno 1 a e[j] ( e[1] = 1 para el primer ciclo )
		}
		else //si el resultado no es mayor o igual a 1.0
		{
			e[j]=0; //No se resta el entero 1 y a e[j] se le asigna el vaor de 0 ( e[1] = 0 para el primer ciclo )
		}
		printf(" %i",e[j]);
	}
	printf(" %c%c%c ",6,6,6);
	
	
	printf("\n\n\ts=%i ( Es el numero de veces que se completo exitosamente el ciclo while )",s); //La s es solo para ver en que valor empezaba y ver si este no era el error
	printf("\n\tN=%i ( Es el cociente de la ultima division y es la razon por la que imprimo un 1 como default )",n); //Lo hago para ver mis variables al termino del programa
	printf("\n\tF=%f ( Es el valor decimal que fue producto de la ultima multiplicacion del ciclo for )",f);
	printf("\n\tC=%f ( Mi valor inicial queda intacto dentro del programa )",c);
	printf("\n\n\t"); 
	system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");

    }
		
			
	else
	{ 
	 f=c-n; //Aqui obtengo y separo el valor fraccional del usuario
	 i=0;
	 while( n/2>0 ) //Sentencia While	
	 {
	 
	 	a = n/2; //Asigno a en n/2 para usarlo en la operacion residuo
	 	i++;
	 
	 	b[i] = (n-(a*2));  //Operacion residuo
	 	s=i;
	 	
	 	n = a;	
	 	
	}
	
	printf("\n\t%c%c%c ",6,6,6);
	printf("1");//Establezco el uno ya que todos los numeros binarios a excepcion del 0 empiezan con 1 y porque el ciclo while sería infinito si intento igualar (n/2>=0)
	
	for (i=s; i>=1 ; i--)
	{
		printf(" %i",b[i]); 	
	}
	
	printf(" . ");
	
	for(j=1; j<=8; j=j+1) //El ocho hace referencia nadamas a cuantos decimales quiero yo  		
	{
		f=f*2; // primero multiplico por 2 el valor decimal
		if(f>=1.0)  // si el resultado es mayor a 1.0 entero se entra al if
		{
			f=f-1; //primero quitamos el 1 entero ( por ejemplo 1.56 - 1 = .56 ) para que se guarde en f y se use en el sig. ciclo
			e[j]=1; //le asigno 1 a e[j] ( e[1] = 1 para el primer ciclo )
		}
		else //si el resultado no es mayor o igual a 1.0
		{
			e[j]=0; //No se resta el entero 1 y a e[j] se le asigna el vaor de 0 ( e[1] = 0 para el primer ciclo )
		}
		printf(" %i",e[j]);
	}
	printf(" %c%c%c ",6,6,6);
	
	printf("\n\n\ts=%i ( Es el numero de veces que se completo exitosamente el ciclo while )",s); //La s es solo para ver en que valor empezaba y ver si este no era el error
	printf("\n\tN=%i ( Es el cociente de la ultima division y es la razon por la que imprimo un 1 como default )",n); //Lo hago para ver mis variables al termino del programa
	printf("\n\tF=%f ( Es el valor decimal que fue producto de la ultima multiplicacion del ciclo for )",f);
	printf("\n\tC=%f ( Mi valor inicial queda intacto dentro del programa )",c); 
	printf("\n\n\t"); 
	system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");

    }
	
}

void chicharron()
{
	float a,b,c,d,real,imaginario,raiz,x1,x2;
	d=0; x1=0; x2=0; raiz=0; real=0; imaginario=0;
     
     system("color 0e"); /*Cambio color de texto a verde y consola a negro*/ printf("\t%c \t\t\t\t\t\t        %c\n\t%c",201,187,185);
	 
	 hola("PROGRAMA QUE RESUELVE LA ESCUCACIÓN DE LA CHICHARRONERA"); printf("%c\n\t%c \t\t      %c%c%c \\(>u<)/ %c%c%c\t\t\t%c",204,200,2,2,2,2,2,2,188);
	 hola("\n\n\n\tAVISO: NO USAR VALORES FRACCIONARIOS SINO EL VALOR MÁS CERCANO AL REAL\n\n\t");
	 hola("( por ejemplo: En vez de usar 1/3 usar .33333333 )\n\n\tEl programa támbien da resultados de valores imaginarios como por ejemplo"); 
	 printf(" %c ",26); 
	 hola("LA RAÍZ CUADRADA DE -3\n\n\t"); system("pause"); system("cls"); system("color 0e");
	 printf("\n\n\tDame el cociente de a: "); scanf("%f",&a); 
	 printf("\n\n\tDame el cociente de b: "); scanf("%f",&b); //LECTURA DE DATOS
	 printf("\n\n\tDame el cociente de c: "); scanf("%f",&c); 
	 
	 if (a==0)  //Si a = 0 entonces se indetermina de la forma ( numero / 0 )
	 {
	 	system("cls");
		system("color 0e"); //Cambio color texto a rojo y consola a negro
	 	hola("\n\n\tNo se puede ya que la ecuación no tiene solución ( coeficiente a=0 )\n\n\t"); system("pause");
	 }
	 
	 else{
	 
	      d = (pow(b,2)) - (4*a*c);	
	      
		       if (d>0) //Si el radicando es positivo se realiza el problema tranquilamente
		       {
		  	     x1 = (-(b) + (sqrt(d))) / (2*a);
		  	     x2 = (-(b) - (sqrt(d))) / (2*a);
		  	     
		  	     system("cls");
				 system("color 0e");   //Cambio color de texto a amarillo y consola a gris 
		  	     printf("\n\n\tX1 = %.4f\n\tX2 = %.4f",x1,x2);
		  	     hola("\n\n\tTu ecuación es"); 
				 printf("y = (%.2fx%c) + (%.2fx) + (%.2f)",a,253,b,c);
		  	     printf("\n\n\t%c%c",6,6); 
				 hola("El programa solo muestra cuatro decimales dentro de los resultados y dos decimales \n\ten la ecuación construida desde");
				 printf(" \"y\" %c%c\n\n\t",6,6); 
		       }	 	 	 	
		  
		            else  //Si el radicando es negativo se realiza un cambio de signo y una nueva variable llamada "imaginario" para denotar a los numeros imaginarios
		            {
		  	         d = ((-1)*d);
		  	         raiz = sqrt(d);  //Aqui se separa la raiz para usarlo como magnitud del numero imaginario i.e ( 15 i ) ( magnitud, unidad )
		  	         real = (-b) / (2*a);  //Aqui se separa el valor real del imaginario
		  	         imaginario = (raiz) / (2*a);  //Se define el valor imaginario
		  	         
		  	         system("cls");
				     system("color 0e");   //Cambio color de texto a amarillo y consola a gris 
		  	         printf("\n\n\tX1 = %.4f + %.4f i\n\n",real,imaginario);
		  	         printf("\n\n\tX2 = %.4f - %.4f i\n\n",real,imaginario);
		  	         hola("\n\n\tTu ecuación es"); 
					 printf(" y = (%.2fx%c) + (%.2fx) + (%.2f)",a,253,b,c);
		  	         printf("\n\n\t%c%c",6,6); 
					 hola(" El programa solo muestra cuatro decimales dentro de los resultados y dos decimales \n\ten la ecuación construida desde");
				 	 printf(" \"y\" %c%c\n\n\t",6,6); 
		            }
	                //Fin del sino
	    }      //Fin del si
	       
		//Fin del sino	
	//Fin del si
//FIN	    
	
	printf("\n\n\t"); 
	system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");

	
}

void octal()
{
		int a,n,i,b[100],j,e[100],s;		
	float f,c;
	
	system("color 0e"); printf("\t%c \t\t\t\t\t\t%c\n\t%c",201,187,185);
	hola("Programa que traduce números de decimal a octal"); /*Titulo*/ printf("%c\n\t%c \t\t  %c%c%c \\(>u<)/ %c%c%c\t\t%c",204,200,2,2,2,2,2,2,188);

	hola("\n\n\tDame tu número por favor :D "); //Lectura de 
	scanf("%f",&c); system("cls");           //datos
	
	n=c;  //Aqui obtengo y separo el valor entero del usuario
	 
	//Vamos a obtener primero los valores binarios decimales 
	//Uso un cliclo for para no tener decimales infinitos
	
	hola("\n\tLos cocientes de los enteros divididos sucesivamente y los números \n\tdecimales multiplicados sucesivamente son: \n\n");
	
	//Vamos a obtener los valores binarios enteros


	if(n==0.0)//0 es el unico numero que empieza con 0 en octal
	{
		printf("\n\t0"); //Si el valor es 0
		printf("\n\n\t"); 
		system ("pause"); system("cls"); //Despedida
		system("color 8b");
		printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
		hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");

	}
	
	else if(n<0){   //SI el valor es negativo
		
		n=-n;     //Cambio signo
		c=-c;  //Cambio signo
		f=c-n; //Aqui obtengo y separo el valor fraccional del usuario
	
		i=0;
		while( n!=0 ) //La sentencia "while" es una sentencia de condicion "mientras que" donde se establece una "condicion" y una "instruccion" de la forma:    While (Condicion){
		                                        //                                                                                                                            instrucción }
	                                            // En otras palabras se refiere a que mientras el criterio se avale la funcion hara tal instruccion tantas veces hasta que la condicion se anule
	
	
	 { 
	 
	 	a = n/8; //Asigno a en n/8 para usarlo en la operacion residuo
	 	i++;
	 	b[i] = (n-(a*8));  //Operación residuo
	 	s=i;
	 		
	 	n = a;	//Guardo mi valor de a en n para usarlo en el siguiente ciclo	
	 	
	}
	
	printf("\t%c%c%c ",6,6,6);
	printf("-(signo menos)");  //Doy de vuelta el signo negativo
	
	for (i=s; i>=1 ; i--)
	{
		printf(" %i",b[i]); 	
	}
	
	printf(" . ");
	
		for (j=1; j<=8; j++) //El ocho hace referencia nadamas a cuantos decimales quiero yo  		
	{
		f = (f*8);
		if(f>=7.0)
		{
			f=f-7;
			e[j]=7;
			printf(" 7");
		}
		else 
		{
			if(f>=6.0)
			{
				f=f-6;
				e[j]=6;
				printf(" 6");
			}
			else
			{
				if(f>=5.0)
				{
					f=f-5;
					e[j]=5;
					printf(" 5");
				}
					else
					{
						if(f>=4.0)
						{
							f=f-4;
							e[j]=4;
							printf(" 4");
						}
							else 
							{
								if(f>=3.0)
								{
									f=f-3;
									e[j]=3;
									printf(" 3");
								}
									else 
									{
										if(f>=2.0)
										{
											f=f-2;
											e[j]=2;
											printf(" 2");
										}
										else 
										{
											if(f>=1.0)
											{
												f=f-1;
												e[j]=1;
												printf(" 1");
											}
												else	
												{
													e[j]=0;
													printf(" 0");
												}
		
		
		
		
										}
									}
							}
					}
			}
        }
	}
	printf(" %c%c%c",6,6,6);
	printf("\n\n\t"); 
	system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");

    }
		
			
	else{ //Valor positivo
	 
	 f=c-n; //Aqui obtengo y separo el valor fraccional del usuario
	 i=0;
	 while( n!=0 ) //Sentencia While
	 {
	 
	 	a = n/8; //Asigno a en n/8 para usarlo en la operacion residuo
	 	i++;
	 	b[i] = (n-(a*8));  //Operacion residuo
	 	s=i;
	 	
	 	n = a;	
	 	
	}
	
	printf("\t%c%c%c",6,6,6);
	for (i=s; i>=1 ; i--)
	{
		printf(" %i",b[i]); 	
	}
	
	printf(" . ");
	
		for (j=1; j<=8; j++) //El ocho hace referencia nadamas a cuantos decimales quiero yo  		
	{
		f = (f*8);
		if(f>=7.0)
		{
			f=f-7;
			e[j]=7;
			printf(" 7");
		}
		else 
		{
			if(f>=6.0)
			{
				f=f-6;
				e[j]=6;
				printf(" 6");
			}
			else
			{
				if(f>=5.0)
				{
					f=f-5;
					e[j]=5;
					printf(" 5");
				}
					else
					{
						if(f>=4.0)
						{
							f=f-4;
							e[j]=4;
							printf(" 4");
						}
							else 
							{
								if(f>=3.0)
								{
									f=f-3;
									e[j]=3;
									printf(" 3");
								}
									else 
									{
										if(f>=2.0)
										{
											f=f-2;
											e[j]=2;
											printf(" 2");
										}
										else 
										{
											if(f>=1.0)
											{
												f=f-1;
												e[j]=1;
												printf(" 1");
											}
												else	
												{
													e[j]=0;
													printf(" 0");
												}
		
		
		
		
										}
									}
							}
					}
			}
        }
	}
	
	printf(" %c%c%c",6,6,6);
	printf("\n\n\t"); 
	system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");

    }
	
	
}

void hex()
{
	int a,n,i,b[100],j,e[100],s; //El problema era que por default b[i] solo agarraba 10 valores y por eso s = 9 o en otras palabras, solamente se podian guardar 9 cosas en b[i]
	float f,c;
	
	system("color 0e"); printf("\t%c \t\t\t\t\t\t      %c\n\t%c",201,187,185);
	hola("Programa que traduce números de decimal a hexadecimal"); /*Titulo*/ printf("%c\n\t%c \t\t  %c%c%c \\(>u<)/ %c%c%c\t\t      %c",204,200,2,2,2,2,2,2,188);
	hola("\n\n\tTen en cuenta que puedes usar números NEGATIVOS REALES");
	hola("\n\n\tDame tu número: "); //Lectura de 
	scanf("%f",&c);  system("cls");            //datos y limpieza de pantalla 
	
	n=c;  //Aqui obtengo y separo el valor entero del usuario
	
	
	//Vamos a obtener primero los valores binarios decimales 
	//Uso un cliclo for para no tener decimales infinitos
	
	hola("\n\tEl cociente de los enteros divididos sucesivamente y los números decimales multiplicados sucesivamente son: \n ");
	
	//Vamos a obtener los valores binarios enteros	
    //Los residuos de los enteros divididos sucesivamente son: 	

	if(c==0.0) //0 es el unico numero que no empieza con 1 en binario	
	{
		system("color 8c");
		printf("\n\t0"); //Si el valor es 0
	}
		
	else if(n<0){   //SI el valor es negativo
		
		n=-n;     //Cambio signo
		c=-c;
		f=c-n; //Aqui obtengo y separo el valor fraccional del usuario
		i=0; // Para que la variable inicie en 0 ( si no lo hago no tendra forma de aumentar de 1 en 1 si no establezco un valor previo o se usaria un valor basura )
		while( n!=0 ) //La sentencia "while" es una sentencia de condicion "mientras que" donde se establece una "condicion" y una "instruccion" de la forma:    While (Condicion){
		                                        //                                                                                                                            instrucción }
	                                            // En otras palabras se refiere a que mientras el criterio se avale la funcion hara tal instruccion tantas veces hasta que la condicion se anule
	
	
	 { 	
	 
	 	a = n/16; //Asigno a en n/2 para usarlo en la operacion residuo
	 	i++; //Para que incremente la variable de iteracion de b[i] cada que entre al ciclo	
	 	
	 	b[i] = (n-(a*16));  //Operación residuo y lo guardo en b[i]
	 	s=i; //Para despues usarlo en el for como forma de saber cuantas veces se hizo esta operacion y empezar en b[s] como ultimo valor
		
		n = a;	//Guardo mi valor de a en n para usarlo en el siguiente ciclo
	}
	
	printf("\n\t%c%c%c ",6,6,6);
	printf("-(signo menos)");  //Doy de vuelta el signo negativo
	
	for (i=s; i>=1 ; i--)
	{
		printf(" %i",b[i]); 	
	}
	
	printf(" . ");
	
	for(j=1; j<=8; j=j+1) //El ocho hace referencia nadamas a cuantos decimales quiero yo  		
	{
		f=f*16; // primero multiplico por 8 el valor decimal
		if(f>=15.0)  // si el resultado es mayor a 15.0 entero se entra al if
		{
			f=f-15;
			e[j]=15;
			printf(" F");
		}
		else if(f>=14.0){
			f=f-14;
			e[j]=14;
			printf(" E");
		}
		else if (f>=13.0){
			f=f-13;
			e[j]=13;
			printf(" D");
		}
		else if(f>=12.0){
			f=f-12;
			e[j]=12;
			printf(" C");
		}
		else if(f>=11.0){
			f=f-11;
			e[j]=11;
			printf(" B");
		}
		else if(f>=10.0){
			f=f-10;
			e[j]=10;
			printf(" A");
		}
		else if(f>=9.0){
			f=f-9;
			e[j]=9;
			printf(" 9");
		}
		else if(f>=8.0){
			f=f-8;
			e[j]=8;
			printf(" 8");
		}
		else if(f>=7.0){
			f=f-7;
			e[j]=7;
			printf(" 7");
		}
		
		else if(f>=6.0){
			f=f-6;
			e[j]=6;
			printf(" 6");
		}
		else if(f>=5.0){
			f=f-5;
			e[j]=5;
			printf(" 5");
		}
		else if(f>=4.0){
			f=f-4;
			e[j]=4;
			printf(" 4");
		}
		else if(f>=3.0){
			f=f-3;
			e[j]=3;
			printf(" 3");
		}
		else if(f>=2.0){
			f=f-2;
			e[j]=2;
			printf(" 2");
		}
		else if(f>=1.0){
			f=f-1;
			e[j]=1;
			printf(" 1");
		}
		else{
			e[j]=0;
			printf(" 0");
		}
	
	}
	printf(" %c%c%c ",6,6,6);
	
	printf("\n\n\tDentro de la parte entera se tiene que:");
	printf("\n\tA = 10\n\tB = 11\n\tC = 12\n\tD = 13\n\tE = 14\n\tF = 15\n\n\t"); system("pause"); system("cls");
	printf("\n\n\ts=%i ( Es el numero de veces que se completo exitosamente el ciclo while )",s); //La s es solo para ver en que valor empezaba y ver si este no era el error
	printf("\n\tN=%i ( Es el cociente de la ultima division )",n); //Lo hago para ver mis variables al termino del programa
	printf("\n\tF=%f ( Es el valor decimal que fue producto de la ultima multiplicacion del ciclo for )",f);
	printf("\n\tC=%f ( Mi valor inicial queda intacto dentro del programa )",c);
	printf("\n\n\t"); 
	system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");

    }
		
			
	else
	{ 
	 f=c-n; //Aqui obtengo y separo el valor fraccional del usuario
	 i=0;
	 while( n!=0 ) //Sentencia While	
	 {
	 
	 	a = n/16; //Asigno a en n/2 para usarlo en la operacion residuo
	 	i++;
	 
	 	b[i] = (n-(a*16));  //Operacion residuo
	 	s=i;
	 	
	 	n = a;	
	 	
	}
	
	printf("\n\t%c%c%c ",6,6,6);
	
	for (i=s; i>=1 ; i--)
	{
		printf(" %i",b[i]); 	
	}
	
	printf(" . ");
	
	for(j=1; j<=8; j=j+1) //El ocho hace referencia nadamas a cuantos decimales quiero yo  		
	{
		f=f*16; // primero multiplico por 8 el valor decimal
		if(f>=15.0)  // si el resultado es mayor a 15.0 entero se entra al if
		{
			f=f-15;
			e[j]=15;
			printf(" F");
		}
		else if(f>=14.0){
			f=f-14;
			e[j]=14;
			printf(" E");
		}
		else if (f>=13.0){
			f=f-13;
			e[j]=13;
			printf(" D");
		}
		else if(f>=12.0){
			f=f-12;
			e[j]=12;
			printf(" C");
		}
		else if(f>=11.0){
			f=f-11;
			e[j]=11;
			printf(" B");
		}
		else if(f>=10.0){
			f=f-10;
			e[j]=10;
			printf(" A");
		}
		else if(f>=9.0){
			f=f-9;
			e[j]=9;
			printf(" 9");
		}
		else if(f>=8.0){
			f=f-8;
			e[j]=8;
			printf(" 8");
		}
		else if(f>=7.0){
			f=f-7;
			e[j]=7;
			printf(" 7");
		}
		
		else if(f>=6.0){
			f=f-6;
			e[j]=6;
			printf(" 6");
		}
		else if(f>=5.0){
			f=f-5;
			e[j]=5;
			printf(" 5");
		}
		else if(f>=4.0){
			f=f-4;
			e[j]=4;
			printf(" 4");
		}
		else if(f>=3.0){
			f=f-3;
			e[j]=3;
			printf(" 3");
		}
		else if(f>=2.0){
			f=f-2;
			e[j]=2;
			printf(" 2");
		}
		else if(f>=1.0){
			f=f-1;
			e[j]=1;
			printf(" 1");
		}
		else{
			e[j]=0;
			printf(" 0");
		}
	
	}
	printf(" %c%c%c ",6,6,6);
	
	printf("\n\n\tDentro de la parte entera se tiene que:");
	printf("\n\tA = 10\n\tB = 11\n\tC = 12\n\tD = 13\n\tE = 14\n\tF = 15\n\n\t"); system("pause"); system("cls");
	printf("\n\n\ts=%i ( Es el numero de veces que se completo exitosamente el ciclo while )",s); //La s es solo para ver en que valor empezaba y ver si este no era el error
	printf("\n\tN=%i ( Es el cociente de la ultima division )",n); //Lo hago para ver mis variables al termino del programa
	printf("\n\tF=%f ( Es el valor decimal que fue producto de la ultima multiplicacion del ciclo for )",f);
	printf("\n\tC=%f ( Mi valor inicial queda intacto dentro del programa )",c); 
	printf("\n\n\t"); 
	system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");

    }
	
	
}

void primos()
{
	int i,a,c;
	
	c=0; //Para no tener un valor basura al entrar al for
	
	system("color 0e"); printf("\t%c \t\t\t     %c\n\t%c",201,187,185);
	hola("Programa para números primos"); printf("%c\n\t%c \t\t\t     %c",204,200,188);
	printf("\n\t        %c%c%c \\(>u<)/ %c%c%c",2,2,2,2,2,2);
	hola("\n\n\t\"En matemáticas, un número primo es un número natural mayor que 1 \n\tque tiene únicamente dos divisores positivos distintos");
	hola(" : él mismo y el 1.\"\n\n\t( Texto extraido de https://es.wikipedia.org/wiki/N%C3%BAmero_primo)"); printf("\n\n\n\n\t"); system("pause"); system("cls");
	hola("\n\tDicho lo anterior, podemos aclarar que los únicos números que pueden usarse deberan ser números naturales"); printf("\n\n\t%c Comencemos :D %c",173,33); 
	hola("\n\n\tDame tu número por favor :) : ");
	scanf("%i",&a);
	system("cls");
	
	if(a<=0)
	{
		system("color 8c");
		hola("\n\n\tTu número no es un número natural\n\n\t");
		system ("pause"); system("cls"); //Despedida
		system("color 8b");
		printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
		hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	}
	
	else
	{
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
		c++;
		}
		else{} //No se hace nada
	}
	
	if(c>2)
		{
			hola("\n\tEl número"); 
			printf(" %i no es primo \n\n\t",a);
		}
	
	else
		{
			hola("\n\tEl número"); 
			printf(" %i",a); 
			hola(" sí es primo \n\n\t");
		}
	
	system ("pause"); system("cls"); //Despedida
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	}
	
}

void presentacion ()		
{
	system("color 70"); printf("\n"); printf("\t    %c",201); hola("ñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñ"); printf("%c",187);
	printf("\n\t%c%c%c %c",3,3,3,185);
	hola(" Universidad Nacional Autonoma de México ");
	printf("%c %c%c%c \n\t    %c",204,3,3,3,200); hola("ñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñÑñ"); printf("%c",188);
	hola("\n\n\t      Facultad de estudios superiores Aragón");
	hola("\n\n\t         Ingeniería eléctrica electrónica");
	hola("\n\n\t            Catedrático: Juan Gastaldi");
	printf("\n\n\t             Mora Vera Mario Alberto");
	printf("\n\n\t                \"Proyecto final\"");
	printf("\n\n\t                   Grupo 1105\n\n\n\n");
	printf("\tUn hugbot te da la bienvenida \\(>U<)/\n\n\n\n\t");	
	system("pause");
	system("cls");	
	
}

int main()
{
	int n,op;
	char temp[100];
		
	presentacion();
	
	do
	{	
	system("color 8e");
	printf("\n\t                         %c%c%c",6,6,6);
	hola("  Menú  ");
	printf("%c%c%c",6,6,6);	
	printf("\n\n\t%c%c",25,25);
	hola(" \" Tecleara el número adecuado seguido de la tecla enter \"");
	printf(" %c%c",25,25);
	hola("\n\n\tPresione 1 para ir al programa \"Ordenar tres números (arbol)\"");
	hola("\n\n\tPresione 2 para ir al programa \"Ordenar tres números (IV) V2\"");
	printf("\n\n\tPresione 3 para ir al programa \"Promediar 5 calificaciones\"");
	printf("\n\n\tPresione 4 para ir al programa \"Promediar n calificaciones\"");
	hola("\n\n\tPresione 5 para ir al programa \"Ordenar n números\"");
	printf("\n\n\tPresione 6 para ir al programa \"Capturar e imprimir una matriz\"");
	printf("\n\n\tPresione 7 para ir al programa \"Suma de dos matrices\"");
	hola("\n\n\tPresione 8 para ir al programa \"Multiplicación de matrices\"");
	hola("\n\n\tPresione 9 para ir al programa \"Transformar un número decimal en binario\"");
	hola("\n\n\tPresione 10 para ir al programa \"Ecuación de segundo grado\"");
	printf("\n\n\tPresione 11 para ir al programa \"Decimal a octal\"");
	printf("\n\n\tPresione 12 para ir al programa \"Decimal a hexadecimal\"");
	hola("\n\n\tPresione 13 para ir al programa \"Números primos\"");
	printf("\n\n\tPresione 14 para salir del programa\t");
	printf("\n\t\t\t\t\t\t\t%c('U')%c\t",127,127);
	fgets(temp,100,stdin);
	op = atoi (temp);
	
	system("cls");
	system("color 0f");
	
	switch (op)
	{
		case 0:
			system("color 0d");
			printf("\n\tVolveras a entrar al menu (\\*u*)\\");
			printf("\n\n\t%c%c%c Recuerda que si quieres salir debes teclear 14 seguido de un enter :D %c%c%c",14,14,14,14,14,14);
			hola("\n\tPero sí lo haces sería nuestro fin y moririamos atrozmente c(>n<)c\n\n\t"); system ("pause"); system("cls");
			break;
		
		case 1:
			
			arbol();
			
			break;
		
		case 2:
			
			IV();
			
			break;	
		
		case 3:
			
			cincocal();
			
			break;
		
		case 4:
			
			ncal();
			
			break;
		
		case 5:
			
			ordenar();
			
			break;
		
		case 6:
			
			lmatriz();
			
			break;
		
		case 7:
			
			sumamatriz();
			
			break;
		
		case 8:
			
			multimatriz();
			
			break;
		
		case 9:
			
			binario();
			
			break;
		
		case 10:
			
			chicharron();
			
			break;
		
		case 11:
			
			octal();
			
			break;
		
		case 12:
			
			hex();
			
			break;
		
		case 13:
			
			primos();
			
			break;
			
		case 14:
			break;	
		
		default:
			
			system("cls"); system("color 0c");
			hola("\n\tEsta opcion no esta dentro del menú.\n\n\t");
			system ("pause"); system("cls"); //Despedida
			system("color 8b");
			printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
			hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n"); 	
				
			break;
										
	}
	
	} while(op!=14);
	
	system("color 8b");
	printf("\n\tLo siento pero es hora de despedirse (>n<)\n\n\tEstas a punto de salir del programa /(ToT)\\"); 
	hola("\n\n\tAdiós ¯\\_(>o<)_/¯ \n\n\t//Se retira lentamente llorando \n\n");
	
	return 0;
}
