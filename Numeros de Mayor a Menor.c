#include<stdio.h>	

presentacion()
{
	
	printf("\nUniversidad Nacional Autonoma de Mexico");	
	printf("\n\nFacultad de Estudios Superiores Aragon");
	printf("\n\nAlumno: Mora Vera Mario Alberto");
	printf("\n\nCatedratico: Juan Gastaldi");
	printf("\n\nClase 2 de Diciembre del 2020.");
	
	return 0;

}


int main()
{
	int n,i,e,z,x[100],b[100];	
	
	presentacion();
	
	printf("\n\nPrograma que ordena numeros de mayor a menor.");	
	printf("\n\nCuantos numeros se van a ordenar? ");
	scanf("%i",&n);
	
	printf("\n\nLectura de numeros..."); //Aqui se toman los datos y se guardan en X[i]
	for (i=1; i<=n; i=i+1)
	{
		
		printf("\n\nDame el %io. numero: ",i);
		scanf("%i",&x[i]);
		b[i]=x[i]; //Le asgino o guardo los valores de x[i] a b[i] para trabajar con x[i] y que los valores originales no se pierdan
		
	}
	
		printf("\nLos numeros originales son: \tLos ordenados son: \n");
		
		for(e=1; e<=n-1; e=e+1)
	{
	    for(i=e+1; i<=n; i=i+1)
		{
	        
			if(x[e]>x[i]); //No hace nada, el ";" que seria como un break point	
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
	
	 	printf("\t"); 
     
		 
		   for(i=1; i<=n; i=i+1)
	  {
		
		
		printf("%i\t\t\t\t%i\n\t",b[i],x[i]);
		
}
	
printf("\n\nQue pase un excelente d\¡a!\n\n");	
	
	return 0;
}
