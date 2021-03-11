#include<stdio.h>
#include<conio.h>
#include<string.h>
int seat = 40;
void view_service();
void book_ticket();
void old_record();
void password();
int main(){
    system("color 70");
    system("cls");
    int a;
 	do{
	printf("\n=========================================================================================================================");
	printf("\n");
	printf("\t       ******************************WELCOME GREEN LINE BUS SERVICE******************************* ");
	printf("\n");
	printf("\t                            Comfortable seats,free WIFI and air conditioning ");
	printf("\n=========================================================================================================================");
    printf("                      Green Line Paribahan is apparently a family owned transport company specializing \n                      in transportation of passenger bus services since 1990.From a humble beginning of \n                     local services, our transport system encompasses all reachable areas of Bangladesh \n                             and also beyond the border, extending our reach to Kolkata in India.\n\n\n                                         This Software is Developed by \n                                              'OMAR SHARIF RAJME'\n\n\n");


    printf("\t\t\t*****************************************************************************\n");
   	printf("\t\t\t*                                                                           *\n");
   	printf("\t\t\t*          Press <1> View All service                                       *\n");
	printf("\t\t\t*          Press <2> Book Ticket                                            *\n");
	printf("\t\t\t*          Press <3> View All ticket order [ Password Protected ]           *\n");
   	printf("\t\t\t*          Press <0> Exit                                                   *\n");
    printf("\t\t\t*                                                                           *\n");
    printf("\t\t\t*****************************************************************************\n");

   	printf("Enter your Choice ::");
   	scanf("%d",&a);

   	switch (a)
   	{
	    case 1:
			system("cls");
			view_service();
			 break;

            case 2:
		    system("cls");
		    book_ticket();
		     break;

            case 3:
                    system("cls");
                    password();
		     break;

   	}
 }while(a!=0);
getch();
return 0;
}
void view_service()
{
    printf("==================================================BUS ROUTE AND TIME=====================================================");
    printf("\t                             SERVICE                    TIME                             COST            ");
    printf("\n_________________________________________________________________________________________________________________________");
    printf("                                      DHAKA TO KHULNA              10:00 AM                       1200 TAKA ONLY\n");
    printf("                         DHAKA TO RAJHSHAHI           12:00 PM                       1000 TAKA ONLY\n");
    printf("                         DHAKA TO BARISAL              2:00 PM                       1300 TAKA ONLY\n");
    printf("                         DHAKA TO COMILLA              3:00 PM                        800 TAKA ONLY\n");
    printf("                         DHAKA TO COX-BAZAR            7:30 PM                       1400 TAKA ONLY\n");
    printf("                         DHAKA TO SYHLLET             10:00 PM                       1100 TAKA ONLY\n");
    printf("                         DHAKA TO CHITTAGONG           8:00 AM                        800 TAKA ONLY\n");
}
void book_ticket()
{

	FILE *ufp;
        char srvce[1000];
	int total_seat,mobile,total_amount,route;
	char code[10];
	char seat_tag[20];
	char name[20];
	printf("==================================================BUS ROUTE AND TIME=====================================================");
    printf("\t               Route           SERVICE                   TIME              SERVICE-CODE                   COST            ");
    printf("\n_________________________________________________________________________________________________________________________");
    printf("                               1.     DHAKA TO KHULNA              10:00 AM                   DK                 1200 TAKA ONLY\n");
    printf("                  2.     DHAKA TO RAJHSHAHI           12:00 PM                   DR                 1000 TAKA ONLY\n");
    printf("                  3.     DHAKA TO BARISAL              2:00 PM                   DB                 1300 TAKA ONLY\n");
    printf("                  4.     DHAKA TO COMILLA              3:00 PM                   DC                  800 TAKA ONLY\n");
    printf("                  5.     DHAKA TO COX-BAZAR            7:30 PM                   DX                 1400 TAKA ONLY\n");
    printf("                  6.     DHAKA TO SYHLLET             10:00 PM                   DS                 1100 TAKA ONLY\n");
    printf("                  7.     DHAKA TO CHITTAGONG           8:00 AM                   DH                  800 TAKA ONLY\n");
    printf("\n\n\n==================================================CHOOSE SEAT TAG========================================================= ");
    printf("\n");
    printf("\n");
    printf("                                 A     B     C     D     E     F     G     H     I     J\n");
    printf("                                 a     b     c     d     e     f     g     h     i     j");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("                                 k     l     m     n     o     p     q     r     s     t\n");
    printf("                                 K     L     M     N     O     P     Q     R     S     T");


    printf("\n\n\n****************** Fill Details *******************");
	printf("\nEnter Route : ");
	scanf("%d",&route);
    printf("Enter Service code :");
	scanf("%s",&code);
	printf("Enter Your Name :");
	scanf("%s",&name);
	printf("Enter Seat Tag :");
	scanf("%s",&seat_tag);
	printf("Mobile number :");
	scanf("%d",&mobile);
	printf("Total number of tickets :");
	scanf("%dTaka",&total_seat);


    if(route==1)
	   {
	   	   total_amount=total_seat*1200;
	           printf("%s",srvce);
	   }
	else if(route==2)
	   {
	   	   total_amount=total_seat*1000;
	           printf("Dhaka to rajshahi",srvce);
	   }
	else if(route==3)
	   {
	   	   total_amount=total_seat*1300;
	   }
	else if(route==4)
	   {
	   	   total_amount=total_seat*800;
	   }
	else if(route==5)
	   {
	   	   total_amount=total_seat*1400;
	   }
	else if(route==6)
	   {
	   	   total_amount=total_seat*1100;
	   }
	else if(route==7)
	   {
	   	   total_amount=total_seat*800;
	   }
	printf("\n\t\t***** ENJOY SERVICE ****\n");
	printf("\n\t\tService Code: %s",code);
	printf("\n\t\tName : %s",name);
	printf("\n\t\tMobile Number : %d",mobile);
	printf("\n\t\tSeats Tag : %s",seat_tag);
	printf("\n\t\tTotal seats : %d",total_seat);
	printf("\n\t\tTotal Amount : %d Taka",total_amount);
        printf("\n\t\tService : %s",srvce);

	ufp=fopen("booking.txt","a");
	if(ufp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(ufp,"%s %s %d %s %d %d \n",code,name,mobile,seat_tag,total_seat,total_amount);
		printf("\n\n\n!!!!!!!!!!!!!! Booking Successfull !!!!!!!!!!!!!!");
	}
		printf("\n");
	fclose(ufp);


}
void password()
{
   system("cls");
   char password[10]={"rajme"};
   char ch,pass[10];
   int i=0;
   printf("\n\t\t\t\t!!!!!!!!!!!!!!!!! Password Protected !!!!!!!!!!!!!!!!!!\n\n");
   printf("\t\t\t-----------------------------------------------------------------------");
   printf("\t\t\t\t\t                                            Enter your password:");

   while(ch!=13)
   {
    ch=getch();

    if(ch!=13 && ch!=8){
    putch('*');
    pass[i] = ch;
    i++;
    }
   }
   pass[i] = '\0';
   if(strcmp(pass,password)==0)
   {

        printf("\n\n\t\t\t\t ****************** Password Match ******************* \n");
        printf("\t\t\t\t\tpress any key to continue............\n");
        system("cls");
        old_record();
   }
   else
   {
     printf("\n\n\t\t\t\t!!!!!!!!!!! \aWarning !!! Incorrect Password !!!!!!!!!!!\n");
   }
}
void old_record()
{
    system("color 70");
    system("cls");
	char ch;
	FILE *fp;

	fp = fopen("booking.txt","r");
	/*if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{ */
		printf(" CODE     NAME           MOBILE           TAG   SEAT   TAKA\n");
		printf("____________________________________________________________\n");
		while( ( ch = fgetc(fp) ) != EOF )
      		 printf("%c ",ch);

	}
	fclose(fp);


//}


