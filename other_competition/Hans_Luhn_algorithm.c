#include <stdio.h>
#include <string.h>
int main ()
{
	int ODD = 0 ; int EVEN = 0 ; 
char *c= "4388576018410707" ; 
int y = strlen(c) ; 
if (y<13 && y>16) 
{
	printf("Sorry Credit card is missing some numbers\n");
 return 1 ; 
}
for (int i = 0 ; i<strlen(c); i++)
{
if (i%2==0)
	//printf("EVEN "); 
{
int y = c[i] - '0' ; 
y*=2 ; 
if (y>=10)
{
	y-=9 ;
	EVEN+=y; 
}
else 
EVEN+=y; 

}

else 
{

int x = c[i] - '0' ; 
ODD+= x; 


}

}
int RESULT = EVEN + ODD ; 
if (RESULT%10==0)
{
	if (c[0]=='4')
	{
		printf("Entered: Visa Card");
	}
		else if (c[0]=='5')
		{
			printf("Entered: Master Card"); 
		} 
		else if (c[0]=='3')
		{
		printf("Entered: American Express Card"); 	
		}
		else if (c[0]=='6')
		{
		printf("Entered:Discover Cards"); 	
		}
	
printf(" Valid\n");
}
else 
{
printf("Invlaid\n"); 
}

}