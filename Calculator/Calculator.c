#include <stdio.h>
#include <stdlib.h>

#include "Utils.h"
#include "My_math.h"

int main(){
	system("color 0f");
	int sign1=0;
	int sign2=0;
	node* a=NULL;
	node* b=NULL;
	a=input(a,&sign1);
	b=input(b,&sign2);
	node* c;
	int sign =0;
	printf("Addition is: ");
	if(sign1==sign2){
		c=addTwoNumbers(a,b);
		sign=sign1;
	}
	else{
		if(larger(a,b)){
			c=substract(a,b);
			sign=sign1;
		}
		else{
			c=substract(b,a);
			sign=sign2;
		}
	}
	display(c,sign);
	c=freeb(c);
	c=multiply(a,b);
	if(sign1==sign2)
	sign=0;
	else
	sign=1;
	a=freeb(a);
	b=freeb(b);
	printf("\nMultiplication is: ");
	display(c,sign);
	c=freeb(c);
	printf("\n");
	system("pause");
	return 0;
}
