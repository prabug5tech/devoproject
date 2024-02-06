#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>

void emergency(void);
void vehiclehelp(void);
void livestatus(void);
//#define EmergencyHelp struct help
//void AutoRevival(void);
//void Foodhelp(void);


int main(){

    int choice=0;

     printf("     Welcome to Disaster Emergency center\n \n      ");

printf("-------------------------------------------------------------\n\n");

    printf("-------------------------------------Hope you are safe-------------------------------------- \n\n\n\n   ");

    printf("   Select any one of the menu to get quick help from team   \n\n");

    printf("1.Emergency Help\n2.Auto Revival\n3.Food Help\n\n");
    printf("Enter Your Choice in Numbers  : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        emergency();
        break;

        case 2:
        vehiclehelp();
        break;
    
    
    default:
    printf("No menus selected or Invalid Choice selection");
        break;
    }


}




struct emergencyhelp
{
    /* data */

    char name[100];
    char Location[100];
    char waterLevel[10];
    char houseno[10];

char carname[100];
char carcolor[100];

char landmark[100];

char model[200];
int NoPlate;

int bread;
int milk;
int members;
}s;


    


void emergency(){

system("cls");
char test;

printf("Welcome to Emergency Help Center\n\n\n");


struct emergencyhelp ehelp;

    
    printf("\n1.Your Name :  ");
    scanf("\n%s",ehelp.name);
   printf("\n2.House No :   ");
    scanf("\n%s",ehelp.houseno);
    printf("\n3.Address  :   ");
    scanf("\n%s",ehelp.Location);
    printf("\n4.Near Landmark :   ");
    scanf("\n%s",ehelp.landmark);
    printf("\n5.Please mention the approximate water level :    ");
    scanf("\n%s",ehelp.waterLevel);

    printf("\nPress 'Y' to confirm that the Details entered are True or Press 'N' to enter again  :");
    scanf("\n%s",&test);
    //test=getche();
    if(test=='Y' || test=='y'){

        
        printf("\nThanks for the Confirmation");
        printf("\n We will rescue you and your family soon Please stay strong");

        livestatus();
        
    }
      else if(test=='N' || test=='n')  {
        emergency();
      }
    else{
        printf("Please press either 'Y' or 'N'");
    }


}

void livestatus(){

    char status;

    printf("\nPlease Reply 'Y' if you are safe or reply 'N' if you are not safe");
    scanf("\n%c",&status);

    if (status =='Y' || status =='y')
    { 
        /* code */

        sleep(5);
        livestatus();
    }
else if(status=='N' || status =='n'){

    printf("\033[1;31m");
    printf ("We are trying our best to save you Please be strong we will rescue soon");
    //printf("\033[0m");
    
}
else{
    printf("Please press either 'Y' or 'N'");
}
}

struct autorevival
{
    /* data */
    char carname[200];
char carcolor[200];

char landmark[200];
char Location[200];

char model[200];
char NoPlate[200];
char members[200];
}a;


void vehiclehelp(){

system("cls");
char mem;

printf("Welcome to Auto Revival Section\n\n\n");


struct autorevival automobile;

    printf("\n\t1.Car Name      :  ");
    scanf("\n%a",&automobile.carname);
    printf("Car Name is  %a\n",automobile.carname);
    //sleep(2);
    printf("\n\t2.Car Model     :   ");
    scanf("\n%a",&automobile.model);
    printf("Car Name is  %a\n",automobile.model);
    //sleep(2);
    printf("\n\t3.Number Plate  :   ");
    scanf("\n%a",&automobile.NoPlate);
    printf("Car Name is  %a\n",automobile.NoPlate);
    //sleep(2);
    printf("\n\t4.Is any person stucked inside Press 'Y' for yes 'N' for No  :   ");
    scanf("\n%a",&mem);
    if (mem=='Y' || mem=='y')
    {
        /* code */
        printf("\nHow many members  :  ");
        scanf("\n%a",&automobile.members);
    }
    else{

        printf("No members has been stucked");
        
    }
    //sleep(2);
    printf("\n\t5.Please mention the Color of the Car :    ");
    scanf("\n%a",&automobile.carcolor);
    //sleep(2);
    printf("\n\t6.Please mention the Detailed Location where car got strucked :    ");
    scanf("\n%a",&automobile.Location);
    //sleep(2);
    printf("\n\t7.Please mention the Landmark:    ");
    scanf("\n%a",&automobile.landmark);
    sleep(2);
    
}

