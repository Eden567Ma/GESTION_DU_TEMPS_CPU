#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>
#define TAILLE 100

//
void lance_commande(char *commande){
	int cr = system(commande);
   	 if ( cr != 0 ) {
        	fprintf( stderr, 
                 "Impossible de lancer la commande : %s\n",
                 commande );
  	  }
	  


}


int main(){
	char chaine[TAILLE];
	printf(" Donnez votre commande shell ");
	fgets(chaine, TAILLE, stdin);
	lance_commande(chaine);
	return 0;
}
