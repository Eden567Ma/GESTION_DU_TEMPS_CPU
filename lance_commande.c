#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>

	
#define TAILLE 100

//
void lance_commande(char *commande){
	struct timeval tv;
	
	int cr = system(commande);        // Recuperer la Valeur de retour de notre commande
   	 if ( cr != 0 ) {			// le test : marcher ou echouer 
        	fprintf( stderr, 
                 "Impossible de lancer la commande : %s\n",
                 commande );
  	  }
  	  int temps = gettimeofday(&tv, NULL);		// le get time of the day pour le temps
  	  if (temps == 0) {				// le Test 
       		 printf("Le temps %ld sec et %ld microsec\n", tv.tv_sec, tv.tv_usec);
   	 } else {
     		   printf("gettimeofday() echouer \n");
    		}
 
}


int main(){
	char chaine[TAILLE];
	printf(" Donnez votre commande shell ");
	fgets(chaine, TAILLE, stdin);			// La lecture sur le fichier 
	lance_commande(chaine);
	return 0;
}

