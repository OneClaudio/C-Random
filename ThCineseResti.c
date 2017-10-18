#include<stdio.h>

int main(){
	int n;
	printf("Le congruenze sono del tipo:  x= 'r' mod 'm'\n\n"); 
	printf("Inserisci il numero di congruenze del tuo sistema: ");
	scanf("%d", &n);
	
	int r[n], m[n];
	for( int i=0; i<n; ++i){
		printf("Inserisci il 'r' numero %d: ", i+1);
		scanf("%d", &r[i]);
		printf("Inserisci l' 'm' numero %d: ", i+1);
		scanf("%d", &m[i]);
		}

	int N=1;
	for( int i=0; i<n; ++i){
		N *= m[i]; }
	printf("N= %d\n", N);

	int nexc[n], x[n], y[n];
	for( int i=0; i<n; ++i){
		nexc[i]= N/m[i];
		x[i]= nexc[i]/m[i];
		x[i]=m[i]*x[i];
		x[i]=nexc[i]-x[i]; 
		printf("x[%d]= %d\n", i+1, x[i]);
		
		for(int j=1; j<m[i]; ++j)
			if( ( (j*x[i])%m[i] )==1 ){ y[i]=j; break; }
		//printf("         y[%d]= %d\n", i+1, y[i]);
		
		}
		
	for( int i=0; i<n; ++i) printf("N[%d]= %d\t", i+1, nexc[i]);
	printf("\n");
	for( int i=0; i<n; ++i) printf("y[%d]= %d \t", i+1, y[i]);
	printf("\n");
	for( int i=0; i<n; ++i) printf("r[%d]= %d \t", i+1, r[i]);
	printf("\n");
	
	int mult[n];
	for( int i=0; i<n; ++i){ mult[i]=nexc[i]*y[i]*r[i]; printf("mult[%d]= %d \t", i+1, mult[i]); }
	
	int sum=0;
	for( int i=0; i<n; ++i) sum+=mult[i];
	printf("\nsum= %d \n",sum);
	
	int c;
	c=sum/N;
	c=c*N;
	c=sum-c;
	
	printf("\nSoluzione: x= %d mod %d\n\n", c, N);
	
					
	}
		
