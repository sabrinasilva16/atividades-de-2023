2#include <stdio.h>



int main(void){
	
	int n1, n2, n3;
	
	printf("\nDigite o primeiro numero\n");
	scanf("%d",&n1);
	
	printf("\nDigite o segundo numero\n");
	scanf("%d",&n2);
	
	printf("\nDigite o terceiro numero\n");
	scanf("d%",&n3);
	
	if(n1<n2 and n1<n3)
		if(n2<n3)
	    	printf("%d %d %d",n1,n2,n3);
	    else
	    	printf("%d %d %d",n1,n3,n2);

	else
	
	if(n2<n1 and n2<n3)
		if(n1<n3)
			printf("%d %d %d",n2,n1,n3);
	    else
	    	printf("%d %d %d",n2,n1,n3);
	      
	else
	 
    if(n3<n2<n1)
		if(n3>n1)
	    	printf("%d %d %d",n3,n1,n2);
	    else
	    	printf("%d %d %d",n3,n1,n2);
return 0;
	      
	    
			       
}



