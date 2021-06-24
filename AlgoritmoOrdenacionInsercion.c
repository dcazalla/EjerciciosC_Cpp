#include <stdio.h>

int main(){
	int tabla[] = {44, 45, 12, 42, 94, 18, 6, 67};
	int s_tabla = sizeof(tabla)/sizeof(tabla[0]);
	printf("%d\n", s_tabla);

	for(int p=0; p< s_tabla; p++){
		printf("%d, ", tabla[p]);
	}
	printf("\n");

	for(int i=0; i < s_tabla; i++){
		for(int j=i; j>=0; j--){
			if(tabla[j-1] > tabla[j]){
				int aux = tabla[j];
				tabla[j] = tabla[j-1];
				tabla[j-1] = aux;
			}
		}
	}
	for (int k=0; k < s_tabla; k++){
		printf("%d, ", tabla[k]);
	}
	printf("\n");

}
