#include <stdio.h>
  int main(){
  	
  	  char operador ;
  	  double numb1, numb2, result ;
  	   
  	    printf("Escolha a operação (+, -, *, /)");
  	    scanf("%c",&operador);
  	    
  	    printf("Digite o primeiro numero:");
  	    scanf("%lf",&numb1);
  	      
  	    printf("Digite o segundo numero:");
  	    scanf("%lf",&numb2);
  
          if(operador == '+'){
           result = numb1 + numb2;
         }
  	       else if (operador == '-'){
  	         result = numb1 - numb2;         
         }
  	       else if (operador == '*'){
  	         result = numb1 * numb2;
  	     }
		   else if (operador == '/'){
		   	  result = numb1 / numb2;
		   }  	
  	
  	     printf("Resultado: %.1lf",result);
  	
  	
  	return 0;
  }
