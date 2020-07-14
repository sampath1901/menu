#include<stdio.h>
int main()
{
	printf("MENU\n");
    printf("ENTER 1 FOR PIZZA\n");
    printf("ENTER 2 FOR BURGER\n");
    printf("ENTER 3 FOR PASTA\n");
    printf("ENTER 4 FOR FRENCH FRIES\n");
    printf("ENTER 5 FOR SANDWICH\n");
    printf("enter ur choice");
    int ch=0;
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:
    		printf("Food item-Pizza\n");
    	    printf("Price-Rs 239");
    	    break;
     case 2:
    	   	printf("Food item-Burger\n");
    	   	printf("Price-Rs 129");
    	   	break;
     case 3:	
    		printf("Food item-Pasta\n");
    	    printf("Price-Rs 179");
    	    break;
     case 4:
    	    printf("Food item-French fries\n");
    	  	printf("Price-Rs 99");
    	  	break;
   	 case 5:
     	    printf("Food item-Sandwich\n");
    	   	printf("Price-Rs 149");
    	    break;
    default:
    	    printf("U HAVE ENTERED WRONG CHOICE");		
	}  
}
