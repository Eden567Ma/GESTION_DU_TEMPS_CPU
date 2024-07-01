my_times : exercice2.o 
	gcc -o my_times exercice2.o

	
lance_com : lance_commande.o
	gcc -o lance_com lance_commande.o

loopsys : loopsys.o
	gcc -o loopsys loopsys.o
	
loopsys.o : loopsys.c
	gcc -c -Wall loopsys.c


	
lance_commande.o : lance_commande.c
	gcc -c -Wall lance_commande.c

	
exercice2.0 : exercice2.c 
	gcc -c -Wall exercice2.c
	
clean : 
	rm *.o
