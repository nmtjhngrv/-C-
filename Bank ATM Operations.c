#include<stdio.h>

int main() {
	int operation;
	int balance=1000;
	int amount;
	
	printf("Operations\n 1:Cash Money\n 2:Deposit Money\n 3:EFT\n 4:Balance\n 5:Card Refund\n\n\n");
	
	printf("Choose Operations:");
	scanf("%d", &operation);
		
	switch(operation){
		    case 1:
		    	printf("Your Balance:%d\n",balance);
		    	printf("Cash Amount :");
		    	scanf("%d",&amount);
		if(amount>balance){
			   printf("You balance is not enough\n");
		   }
		    balance-=amount;
		    printf("Balance: %d",balance);
		        
		break;
			
			case 2:
			    printf("Your Balance:%d\n",balance);
		    	printf("Deposit Money:");
		    	scanf("%d",&amount);
			
			 balance+=amount;
		    printf("Balance: %d",balance);
	    break;
			
			
			case 3:
			printf("Your Balance:%d\n",balance);
		    	printf("EFT:");
		    	scanf("%d",&amount);
		if(amount>balance){
			   printf("You balance is not enough\n");
		   
		}
			else {
			
		    balance-=amount;
		    printf("Balance: %d",balance);
	
		break;
		}
			case 4:
			
		printf("Balance %d",balance);
		break;
			
			case 5:
				
		printf("Card Refunded:");		
	        break;
		
			default:
			printf("Unknown Operation:")
		
	}
	
	
	


	return 0;
}
