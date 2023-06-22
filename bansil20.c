#include<stdio.h>
#include<conio.h> 
int main () {

int a;

printf("enter the any number  :  ");
scanf("%d",&a);



if(a==0){
    printf("this number is neutral");
}else if(a>0){
    printf("this number is positive");
}else {
    printf("this number is negative");
} 
return 0;
getch();

}

