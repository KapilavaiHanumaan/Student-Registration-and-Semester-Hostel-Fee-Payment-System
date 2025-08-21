#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int apply();
int fees(long int);
int hfees(long int);
long int s_bal=125000;
struct stud
{
char name[20];
char fath_name[20];
char num[10];
int course;
char gender;
};
struct fees
{
int ch,creg;
long int total,pay;
long int paid;
};
struct host
{
int ch,mess,type;
long int creg;
};
int main()
{
int ch;
char name[20];
long int reg;
srand(time(0));
reg=rand()%20229999+20221000;
printf("Welcome to KALASALINGAM UNIVERSITY\nSelect an option to proceed!");
start:
printf("\n\n1. Apply for B.Tech Online\n2. Pay Semester Fees\n3. Pay Hostel fees\n4. Exit(press 0)\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
apply();
printf("\nYour admission number is %ld\n",reg);
goto start;
case 2:
fees(reg);
goto start;
case 3:
hfees(reg);
goto start;
case 0:
break;
default:
printf("Invalid input.");
goto start;
}
}
int apply()
{
struct stud s;
printf("Select a course to apply: \n");
printf("1. B.Tech Computer Science and Engineering\n2. B.Tech Electronics and Communication Engineering\n3. B.Tech Information Technology\n4. B.Tech Electrical and Electronics Engineering\n5. B.Tech Mechanical Engineering\n6. B.Tech Civil Engineering\n7. B.Tech Bio Technology\n8. B.Tech Food Technology\n");
scanf("%d",&s.course);
printf("Enter your name(in block letters): ");
fflush(stdin);
gets(s.name);
printf("Enter your gender(M/F): ");
scanf("%c",&s.gender);
printf("Enter your father name: ");
fflush(stdin);
gets(s.fath_name);
printf("Enter your mobile number: ");
scanf("%s",&s.num);
printf("You have successfully registered.");
printf("\n\n\t\t\t\t\tSTUDENT DETAILS");
printf("\nName: %s\n",s.name);
if(s.gender=='m'||s.gender=='M')
printf("Gender: Male");
else
printf("Gender: Female");
printf("\nFather Name: %s",s.fath_name);
printf("\nMobile Number: %s",s.num);
switch(s.course)
{
case 1:
printf("\nCourse: Computer Science and Engineering");
break;
case 2:
printf("\nCourse: Electronics and Communication Engineering");
break;
case 3:
printf("\nCourse: Electrical and Electronics Engineering");
break;
case 4:
printf("\nCourse: Electrical and Electronic Engineering");
break;
case 5:
printf("\nCourse: Mechanical Engineering");
break;
case 6:
printf("\nCourse: Civil Engineering");
break;
case 7:
printf("\nCourse: Bio Technology");
break;
case 8:
printf("\nCourse: Food Technology");
break;
}
return 0;
}
int fees(long int reg)
{
struct fees f;
f.paid=0;
f.total=125000;
printf("Enter your reg number to pay fees: ");
scanf("%ld",&f.creg);
if(f.creg==reg)
{
printf("\n\t\t Semester Fee Payment\n");
f.total=125000;
printf("Total Fees    : %ld\n",f.total);
printf("Balance       : %ld\n",s_bal);
printf("Enter the amount to pay: ");
scanf("%ld",&f.pay);
if(f.pay<=s_bal)
{
f.paid+=f.pay;
s_bal-=f.paid;
printf("Your new fee balance is %ld\n\n",s_bal);
printf("Fee paid successfully.\n");
}
else
printf("Entered amount is more than balance. Can't proceed to payment");
}
else
{
printf("Invalid register number.");
}
return 0;
}
int hfees(long int reg)
{
struct host h;
printf("Enter your registration no: ");
scanf("%ld",&h.creg);
if(h.creg==reg)
{
printf("\nSelect a hostel to book:\n");
printf("1. Annexure 5 shared - 59,500\n2. Non attached 4 shared - 64,500\n3. Attached 4 shared - 74,500\n4. AC Non attached 4 shared - 83,500\n5. AC attached - 97,500\n");
scanf("%d",&h.ch);
printf("Select your type of mess: \n1. South Indian\n2. North Indian\n");
scanf("%d",&h.mess);
printf("Select your type of diet: \n1. Vegetarian\n2. Non-Vegetarian\n");
scanf("%d",&h.type);
printf("\nHostel booked successfully.\n");
printf("\n\t\t\tHostel Details");
printf("\nRegister number: %ld",reg);
printf("\nHostel type: ");
switch(h.ch)
{
case 1:
printf("Annexure 5 shared");
break;
case 2:
printf("Non attached 4 shared");
break;
case 3:
printf("Attached 4 shared");
break;
case 4:
printf("AC Non attached 4 shared");
break;
case 5:
printf("AC attached 4 shared");
break;
}
printf("\nMess type: ");
switch(h.mess)
{
case 1:
printf("South-Indian");
break;
case 2:
printf("North-Indian");
break;
}
printf("\nDiet type: ");
switch(h.type)
{
case 1:
printf("Vegetarian");
break;
case 2:
printf("Non Vegetarian");
break;
}
}
else
printf("invalid register number.\n");
return 0;
}
