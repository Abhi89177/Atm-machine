//ATM machine with the help of C Language.
#include<stdio.h>
#include<conio.h>
int main ()
{
int pin,pin1=1234,a,b,c,h, balance=50000;
start1:
printf("Pin is pre define please enter :1234\n");
scanf("%d",&pin);
start:
if(pin==pin1)
{
 //key sellection for performing ATM
printf("welcome to Abhishek's ATM\n\n");
printf("Please select your choice\n\n");
printf("1. Withdraw Money\n");
printf("2. Check Balance\n");
printf("3. Deposit Money\n");
printf("4. Change pin\n");
printf("5. Exit\n\n");
scanf("%d",&b);
switch(b)
{
case 1:
printf("Enter Amount\n");
scanf("%d",&c);
if(c<10000)
{
if(c<balance)
{
balance=balance-c;
 printf("collect your withdraw amount %d\n\n",c);
 printf("your balance is %d\n",balance);
}
else
{
printf("low balance\n");
}
}
else
{
printf("your atm limit is only under 10k\n");
}
break;
 case 2:
 printf("your current balance is = %d\n ",balance);
 break;
 case 3:
 printf("Enter deposit amount\n");
 scanf("%d",&c);
 balance=balance+c;
 printf("new balance %d\n", balance);
 break;
 case 4:
 
 printf("enter new pin\n");
 scanf ("%d",&pin1);
 printf("new pin update\n");
 break;
 case 5:
 
 goto end;
 default:
 printf("You entered a wrong choice.\n");
 printf("Press 5 For Continue");
 getch(); 
 system("cls");
 goto start;
 
}
}
else
{
if(h<1)
{
printf("Please enter a valid pin\n");
h++;
goto start1;
}
goto end;
}
printf("press 6 for continue\n\n");
scanf("%d",&a);
system("cls");
if(a==6)
goto start;
end:
printf("Thank You For Using Abhishek ATM.");
return 0;
}

