#include <stdio.h>

int main() {
	float num, num2, num3;
		
	printf("Digite os três tempos(detalhadamente): ");
	scanf("%f %f %f", &num, &num2, &num3);
	
		
	
	
	
	
		if (num < num2 and num < num3){
				printf("\n- primeiro lugar > %.1f minutos ", num);
					
			}
		
	
	
		else if(num3 < num2 and num3 < num){
			
			 
			printf("\n- primeiro lugar > %.1f minutos ", num3);
			
	
		}
		
	
		else{
			
			
			printf("\n- primeiro lugar > %.1f minutos ", num2);
			
	
		}
	
		
		
		
		
		
			
		if (num > num2 and num < num3){
				printf("\n- segundo lugar > %.1f minutos ", num);
					
			}
		
	
	
		else if(num3 > num2 and num3 < num){
			
			
			printf("\n- segundo lugar > %.1f minutos  ", num3);
			
	
		}
		
	
		else{
			
			
			printf("\n- segundo lugar > %.1f minutos ", num2);
			
	
		}
	
	
	
		
	
		if (num > num2 and num > num3){
				printf("\n- terceiro lugar > %.1f minutos ", num);
					
			}
		
	
	
		else if(num3 > num2 and num3 > num){
			
			
			printf("\n- terceiro  lugar> %.1f minutos  ", num3);
			
	
		}
		
	
		else{
			
			
			printf("\n- terceiro  lugar> %.1f minutos  ", num2);
			
	
		}
}
