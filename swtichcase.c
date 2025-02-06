#include<stdio.h>
int main(){
    int a ,b , res, choice ;
    printf("Enter the value for a and b \n");
    scanf ("%d%d", &a,&b);
    printf("Enter the choices are 1.add 2.sub 3.mul 4.div \n");
    scanf ("%d", &choice);
    switch (choice)
    {
    case 1: 
        res = a+b;
        printf ("The sum of %d and %d is %d",a,b,res);
        break;
     case 2: 
        res = a-b;
        printf ("The sub of %d and %d is %d",a,b,res);
        break;
         case 3: 
        res = a*b;
        printf ("The mul of %d and %d is %d",a,b,res);
        break;
         case 4: 
        res = a/b;
        printf ("The div of %d and %d is %d",a,b,res);
        break;
    default:
        printf("Enter a valid choice");
        break;
    }
    
       return 0 ;

}