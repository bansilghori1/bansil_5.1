#include<stdio.h>
#include<conio.h> 
int main () {

int a,b;

printf("enter the value of a :  ");
scanf("%d",&a);

printf("enter the value of b :  ");
scanf("%d",&b);

if(a<b){
   printf("minimum value is a : %d",a);
}else{
    printf("minimum value is  b : %d",b);
}

return 0;
getch();

}

