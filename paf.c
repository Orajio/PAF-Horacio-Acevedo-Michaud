//Horacio Acevedo Michaud

#include <stdio.h>
#include <stdlib.h>

int main (){
	int *numeros, N=0,i,j,k,cont=0,result=0,menor;
	//Filtra la entrada correcta solicitada por el programa
	printf("Ingrese el numero de elementos, con un minimo de 3\n");
	scanf("%d",&N);
		while(N<3){
		printf("El minimo son 3 numeros, reintente porfavor\n");
		scanf("%d",&N);
		}
	k=-N;
	//Estableciendo lo necesario para el uso de los archivos de entrada y salida"
	FILE *fila1= NULL;
	FILE *fila2= NULL;
	char *entra="entrada.ent";
	char *sale="salida.sal";

	//Abro "entrada.ent" para escritura y asigno la memoria necesaria para el arreglo
	fila1= fopen(entra, "w");
	fprintf(fila1,"%d \n" ,N);
	printf("Entrege los %d numeros enteros ahora:\n",N);
	numeros = (int*)malloc(j*sizeof(int));

	//En el siguiente for:
	//-Lectura de los numeros del arreglo y impresión en "entrada.ent"
	//-Diferencia absoluta en los distintos casos a probar
	//-Diferencia absoluta minima

	for(i=0;i<(2*N-1);i++,k++){
		if(i<N){
		scanf("%d",&numeros[i]);
		cont=cont+*(numeros+i);
		fprintf(fila1,"%d",numeros[i]);
		}
		else{
			result=result+*(numeros+k);
			*(numeros+k)=abs(cont-(2*result));
			if(k==0){
				menor=*(numeros+k);
			}
			else if(*(numeros+k)<menor){
				menor=*(numeros+k);
			}

		}
	}
	//Se imprime la minima diferencia en "salida.sal", se cierra éste y "entrada.ent"
	fclose(fila1);
	fila2=fopen(sale,"w");
	fprintf(fila2,"%d",menor);
	fclose(fila2);
	free(numeros);
	return 0;
}
