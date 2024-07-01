#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(){
	int a = 0;
	for(int i =0; i<= 50000000; i++){
		a+=1;
		printf("%d \n",getpid());
		
	}

}
