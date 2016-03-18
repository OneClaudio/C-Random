#include<stdio.h>

int main(){
  int n,i;
  printf("Inserisci il numero di volte che vuoi essere spammato:");
  scanf("%d\n", &n);

  for (i=1; i<=n; i++){
    if (i==1) printf("kek\nSei stato spammato 1 volta\n");
      else
	printf("kek\nSei stato spammato %d volte!\n", i);
  }
}
    
