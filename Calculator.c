///Create a menu-driven calculator in C that allows user to select an arithmetic operation
///(addition,subtraction,multiplication,division or modulus) AND input two numbers to perform
///the selected operation.

#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,add,sub,mul,div,mod,choose;
    printf("NUR'S CALCULATOR.\n");
    printf("Five Operations Supported.\n");
    printf("1.Addition (+)\n2.Subtraction (-)\n3.Multiplication (*)\n4.Division (/)\n5.Modulus (%%)\n");
    printf("Choose One Operator - ");
    scanf("%d",&choose);
    if(choose == 1){
        printf("You Choosed Addition.\n");
        printf("Enter 1st Digit - ");
        scanf("%d",&x);
        printf("Enter 2nd Digit - ");
        scanf("%d",&y);
        add = x+y;
        printf("Answer = %d",add);
    }
    else if(choose == 2){
        printf("You Choosed Subtraction.\n");
        printf("Enter 1st Digit - ");
        scanf("%d",&x);
        printf("Enter 2nd Digit - ");
        scanf("%d",&y);
        sub = x-y;
        printf("Answer = %d",sub);
    }
    else if(choose == 3){
        printf("You Choosed Multiplication.\n");
        printf("Enter 1st Digit - ");
        scanf("%d",&x);
        printf("Enter 2nd Digit - ");
        scanf("%d",&y);
        mul = x*y;
        printf("Answer = %d",mul);
    }
    else if(choose == 4){
        printf("You Choosed Division.\n");
        printf("Enter 1st Digit - ");
        scanf("%d",&x);
        printf("Enter 2nd Digit - ");
        scanf("%d",&y);
        div = x/y;
        printf("Answer = %d",div);
    }
    else {
        printf("You Choosed Modulus.\n");
        printf("Enter 1st Digit - ");
        scanf("%d",&x);
        printf("Enter 2nd Digit - ");
        scanf("%d",&y);
        mod = x%y;
        printf("Answer = %d",mod);
    }
    return 0;
}
