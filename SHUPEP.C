//BILLING SYSTEM
//including all header files
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
#include<time.h>
#include<SYS\TYPES.H>

//main funcion
void main()
{
//all required variable
int i,n,qty,rate[11]={0,0,0,0,0,0,0,0,0,0,0};
char a[10],b[10];
FILE *fp;
char ch;
time_t t;

clrscr();
fp=fopen("bill.c","w+");

//draw user interface
textcolor(YELLOW+BLINK);
gotoxy(30,2);cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(30,3);cprintf("³  PIZZA LIVE  ³");
gotoxy(30,4);cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

gotoxy(15,5);
printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");

for(i=0;i<11;i++)
{
gotoxy(15,6+i);
printf("³                                                     ³\n");
}
gotoxy(15,17);
printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
textcolor(2);
gotoxy(40,6);
cprintf("Small");
gotoxy(49,6);
cprintf("Large");

textcolor(WHITE);
gotoxy(57,6);
cprintf("S");
gotoxy(60,6);
cprintf("L");
gotoxy(63,6);
cprintf("Qty.");

//preparing menu
gotoxy(17,7);
printf("1. MIX VEG \t\t60 \t110");
gotoxy(17,8);
printf("2. SWEET CORN \t\t60 \t110");
gotoxy(17,9);
printf("3. PANEER \t\t60 \t110");
gotoxy(17,10);
printf("4. MUSHROOM \t\t60 \t110");
gotoxy(17,11);
printf("5. ONION CAPSICUM \t60 \t110");
gotoxy(17,12);
printf("6. CHILLI GARLIC \t60 \t110");
gotoxy(17,13);
printf("7. SOYABEEN \t\t60 \t110");
gotoxy(17,14);
printf("8. ONLY CHEESE \t\t60 \t110");
gotoxy(17,15);
printf("9. MALAI PANEER \t60 \t110");
gotoxy(17,16);
printf("10. BABY CORN \t\t60 \t110");

//getting order from user
order:
gotoxy(20,18);
printf("Enter your choice  : ");
scanf("%d",&n);
gotoxy(20,19);
printf("Enter size (S / L) : ");
fflush(stdin);
gets(a);
strlwr(a);
gotoxy(20,20);
printf("Enter the quantity : ");
scanf("%d",&qty);

//selection of user choice
switch(n)
{
case 1:if(strcmp(a,"s")==0)
	{
	gotoxy(57,7);
	printf("");
	rate[n]=60*qty;
	fprintf(fp,"%s","MIX VEG");fprintf(fp," \t\t%dx%d = %d\n",60,qty,rate[n]);
	}
	else
	{
	gotoxy(60,7);
	printf("");
	rate[n]=110*qty;
	fprintf(fp,"%s","MIX VEG");fprintf(fp," \t\t%dx%d = %d\n",110,qty,rate[n]);
	}
	gotoxy(64,7);
	printf("%d",qty);
	break;
case 2:if(strcmp(a,"s")==0)
	{
	gotoxy(57,8);
	printf("");
	rate[n]=60*qty;
	fprintf(fp,"%s","SWEET CORN");fprintf(fp," \t\t%dx%d = %d\n",60,qty,rate[n]);
	}
	else
	{
	gotoxy(60,8);
	printf("");
	rate[n]=110*qty;
	rate[n]=110*qty;
	fprintf(fp,"%s","SWEET CORN");fprintf(fp," \t\t%dx%d = %d\n",110,qty,rate[n]);
	}
	gotoxy(64,8);
	printf("%d",qty);
	break;
case 3:if(strcmp(a,"s")==0)
	{
	gotoxy(57,9);
	printf("");
	rate[n]=60*qty;
	fprintf(fp,"%s","PANEER");fprintf(fp,"\t\t\t%dx%d = %d\n",60,qty,rate[n]);
	}
	else
	{
	gotoxy(60,9);
	printf("");
	rate[n]=110*qty;
	fprintf(fp,"%s","PANEER");fprintf(fp,"\t\t\t%dx%d = %d\n",110,qty,rate[n]);
	}
	gotoxy(64,9);
	printf("%d",qty);
	break;
case 4:if(strcmp(a,"s")==0)
	{
	gotoxy(57,10);
	printf("");
	rate[n]=60*qty;
	fprintf(fp,"%s","MUSHROOM");fprintf(fp," \t\t%dx%d = %d\n",60,qty,rate[n]);
	}
	else
	{
	gotoxy(60,10);
	printf("");
	rate[n]=110*qty;
	fprintf(fp,"%s","MUSHROOM");fprintf(fp," \t\t%dx%d = %d\n",110,qty,rate[n]);
	}
	gotoxy(64,10);
	printf("%d",qty);
	break;
case 5:if(strcmp(a,"s")==0)
	{
	gotoxy(57,11);
	printf("");
	rate[n]=60*qty;
	fprintf(fp,"%s","ONION CAPSICUM");fprintf(fp,"\t\t%dx%d = %d\n",60,qty,rate[n]);
	}
	else
	{
	gotoxy(60,11);
	printf("");
	rate[n]=110*qty;
	fprintf(fp,"%s","ONION CPSICUM");fprintf(fp,"\t\t%dx%d = %d\n",110,qty,rate[n]);
	}
	gotoxy(64,11);
	printf("%d",qty);
	break;
case 6:if(strcmp(a,"s")==0)
	{
	gotoxy(57,12);
	printf("");
	rate[n]=60*qty;
	fprintf(fp,"%s","CHILLI GARLIC");fprintf(fp,"\t\t%dx%d = %d\n",60,qty,rate[n]);
	}
	else
	{
	gotoxy(60,12);
	printf("");
	rate[n]=110*qty;
	fprintf(fp,"%s","CHILLI GARLIC");fprintf(fp,"\t\t%dx%d = %d\n",110,qty,rate[n]);
	}
	gotoxy(64,12);
	printf("%d",qty);
	break;
case 7:if(strcmp(a,"s")==0)
	{
	gotoxy(57,13);
	printf("");
	rate[n]=60*qty;
	fprintf(fp,"%s","SOYABEEN");fprintf(fp," \t\t%dx%d = %d\n",60,qty,rate[n]);
	}
	else
	{
	gotoxy(60,13);
	printf("");
	rate[n]=110*qty;
	fprintf(fp,"%s","SOYABEEN");fprintf(fp," \t\t%dx%d = %d\n",110,qty,rate[n]);
	}
	gotoxy(64,13);
	printf("%d",qty);
	break;
case 8:if(strcmp(a,"s")==0)
	{
	gotoxy(57,14);
	printf("");
	rate[n]=60*qty;
	fprintf(fp,"%s","ONLY CHEESE");fprintf(fp," \t\t%dx%d = %d\n",60,qty,rate[n]);
	}
	else
	{
	gotoxy(60,14);
	printf("");
	rate[n]=110*qty;
	fprintf(fp,"%s","ONLY CHEESE");fprintf(fp," \t\t%dx%d = %d\n",110,qty,rate[n]);
	}
	gotoxy(64,14);
	printf("%d",qty);
	break;
case 9:if(strcmp(a,"s")==0)
	{
	gotoxy(57,15);
	printf("");
	rate[n]=60*qty;
	fprintf(fp,"%s","MALAI PANEER");fprintf(fp,"\t\t%dx%d = %d\n",60,qty,rate[n]);
	}
	else
	{
	gotoxy(60,15);
	printf("");
	rate[n]=110*qty;
	fprintf(fp,"%s","MALAI PANEER");fprintf(fp,"\t\t%dx%d = %d\n",110,qty,rate[n]);
	}
	gotoxy(64,15);
	printf("%d",qty);
	break;
case 10:if(strcmp(a,"s")==0)
	{
	gotoxy(57,16);
	printf("");
	rate[n]=60*qty;
	fprintf(fp,"%s","BABY CORN");fprintf(fp," \t\t%dx%d = %d\n",60,qty,rate[n]);
	}
	else
	{
	gotoxy(60,16);
	printf("");
	rate[n]=110*qty;
	fprintf(fp,"%s","BABY CORN");fprintf(fp," \t\t%dx%d = %d\n",110,qty,rate[n]);
	}
	gotoxy(64,16);
	printf("%d",qty);
	break;
}

gotoxy(20,21);
printf("Do you Order more (Y / N) : ");
fflush(stdin);
gets(b);
strlwr(b);
if(strcmp(b,"y")==0)
{
goto order;
}
else
;

//calculate bill
for(i=0;i<11;i++)
rate[0]=rate[0]+rate[i];
fprintf(fp,"%s","----------------------------------------\n");
fprintf(fp,"Total amount : \t\t%d\n",rate[0]);
fprintf(fp,"%s","----------------------------------------\n");

//display bill
rewind(fp);
clrscr();
printf("\n");
printf("\t\tPIZZA LIVE\n");
printf("\t\t\t");
time(&t);
printf("%s",ctime(&t));
printf("                                  \n\n");


while(1)
{
ch=fgetc(fp);
if(ch==EOF)
break;
printf("%c",ch);
}
fclose(fp);
textcolor(5);
printf("\n\t\t\t");
cprintf("\t\t\t\t\t Thank you  \t\t\t\t\tn");



getch();
}
