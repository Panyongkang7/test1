#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int x;
	int y,f;
	int b;
	int c;
	int e=0; 
	
	scanf("%d",&x);
		
	for(y=0;y<=x;y++){
      c=0;
      f=y;
	while (f>0){

		b=f%10;
		c=b+10*c;
		f/=10;
	}
	if(c==y){
	
	printf("%d,",c);
	e=e+1;

		
	}
   if(e==10)
   {
   	printf("\n");
   	e=0;
   }
}
	return 0;
}
