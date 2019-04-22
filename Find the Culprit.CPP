#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>


void roundE1();
void roundE2();
void roundE3();

static int randKey,life=4;
int key;

void Load()
{
	setbkcolor(BLUE);
	setcolor(WHITE);
	settextstyle(7,0,5);
	outtextxy(100,260,"FIND THE CULPRIT");
	delay(1000);
		for(int i=40;i<=600;i++)
	{
	 setfillstyle(3,WHITE);
	 bar(40,340,i,360);
	 delay(5);
	}
	settextstyle(6,0,2);
	outtextxy(195,375,"Please wait while the game is being load.......");
	rectangle(39,339,601,361);

	cleardevice();

}

void Intro()
{

     /*
     */
	 setbkcolor(BLUE);
	 settextstyle(1,0,6);
	 delay(200);
	 outtextxy(200,70,"Project By");
	 settextstyle(1,0,3);
	 outtextxy(200,150," Adnan Ahmed");
	 delay(900);
}

void roundE1(){
	srand(time(0));
	randKey=rand()%4+1;
	cleardevice();
	setcolor(WHITE);
	setbkcolor(GREEN);
	setfillstyle(1,RED);
	bar3d(2,11,290,230,10,3);
	bar3d(2,235,290,455,10,3);
	bar3d(295,11,590,230,10,3);
	bar3d(295,235,590,455,10,3);
	settextstyle(1,0,1);
	do{

	gotoxy(74,25);
	printf("Life:%d",life);

	if(life==0 && key!=randKey){
	cleardevice();
	setbkcolor(RED);
	settextstyle(1,0,3);
	outtextxy(250,320,"You Lose.......");
	getch(); break;}


	if(life==0)
	break;

	cin>>key;
	if(key==randKey)
	roundE2();
	else
	{
	if(key!=randKey && key==1){
	setfillstyle(1,0);
	bar3d(2,11,290,230,10,3); }
	else if(key!=randKey && key==2){
	setfillstyle(1,0);
	bar3d(2,235,290,455,10,3);   }
	else if(key!=randKey && key==3) {
	setfillstyle(1,0);
	bar3d(295,11,590,230,10,3);   }
	else if(key!=randKey && key==4) {
	setfillstyle(1,0);
	bar3d(295,235,590,455,10,3);    }
	life--;
	continue;
	}

	}while(life!=0 || key!=randKey);

	if(key==randKey)
	life++;

}

void roundE2(){

	srand(time(0));
	randKey=rand()%6+1;
	cleardevice();
	setcolor(WHITE);
	setbkcolor(GREEN);
	setfillstyle(1,RED);
	bar3d(52,11,240,130,10,3);
	bar3d(52,135,240,255,10,3);
	bar3d(245,11,433,130,10,3);
	bar3d(245,135,433,255,10,3);
	bar3d(52,260,240,380,10,3);
	bar3d(245,260,433,380,10,3);

	settextstyle(1,0,1);
	outtextxy(70,457,"Enter Your Guess...");


	do{




	if(life==0 && key!=randKey){
	cleardevice();
	setbkcolor(RED);
	settextstyle(1,0,3);
	outtextxy(250,320,"You Lose.......");
	getch(); break;}


	gotoxy(78,25);
	printf("Life%d",life);


	int key;

	cin>>key;
	if(key==randKey)
	roundE3();
	else
	{
	if(key!=randKey && key==1){
	setfillstyle(1,0);
	bar3d(52,11,240,130,10,3);}
	else if(key!=randKey && key==2){
	setfillstyle(1,0);
	bar3d(52,135,240,255,10,3); }
	else if(key!=randKey && key==3) {
	setfillstyle(1,0);
	bar3d(245,11,433,130,10,3);  }
	else if(key!=randKey && key==4) {
	setfillstyle(1,0);
	bar3d(245,135,433,255,10,3);     }
	else if(key!=randKey && key==5) {
	setfillstyle(1,0);
	bar3d(52,260,240,380,10,3);     }
	else if(key!=randKey && key==6) {
	setfillstyle(1,0);
	bar3d(245,260,433,380,10,3);}

	life--;
	continue;
	}
	}while(life!=0 || key!=randKey);

}

void roundE3(){

	srand(time(0));
	randKey=rand()%8+1;
	cleardevice();
	setcolor(WHITE);
	setbkcolor(GREEN);
	setfillstyle(1,RED);
	bar3d(52,11,240,130,10,3);
	bar3d(52,135,240,255,10,3);
	bar3d(245,11,433,130,10,3);
	bar3d(245,135,433,255,10,3);
	bar3d(52,260,240,380,10,3);
	bar3d(245,260,433,380,10,3);
	bar3d(438,11,590,189,10,3);
	bar3d(438,194,590,380,10,3);
	settextstyle(1,0,1);
	outtextxy(70,457,"Enter your Guess....");
	while(!kbhit());
	do{

	if(life==0 && key!=randKey){
	cleardevice();
	setbkcolor(RED);
	settextstyle(1,0,3);
	outtextxy(250,320,"You Lose.......");
	 getch(); break;}

	gotoxy(78,25);
	printf("Life%d",life);


	int key;

	cin>>key;
	if(key==randKey){
	cleardevice();
	setbkcolor(GREEN);
	settextstyle(1,0,3);
	outtextxy(250,320,"You Win.......");
	getch(); break; }
	else
	{
	if(key!=randKey && key==1){
	setfillstyle(1,0);
	bar3d(52,11,240,130,10,3);}
	else if(key!=randKey && key==2){
	setfillstyle(1,0);
	bar3d(52,135,240,255,10,3); }
	else if(key!=randKey && key==3) {
	setfillstyle(1,0);
	bar3d(245,11,433,130,10,3);  }
	else if(key!=randKey && key==4) {
	setfillstyle(1,0);
	bar3d(245,135,433,255,10,3);     }
	else if(key!=randKey && key==5) {
	setfillstyle(1,0);
	bar3d(52,260,240,380,10,3);     }
	else if(key!=randKey && key==6) {
	setfillstyle(1,0);
	bar3d(245,260,433,380,10,3);}
	else if(key!=randKey && key==7) {
	setfillstyle(1,0);
	bar3d(438,11,590,189,10,3);}
	else if(key!=randKey && key==8) {
	setfillstyle(1,0);
	bar3d(438,194,590,380,10,3);}
	life--;
	continue;
	}


	}while(life!=0 || key!=randKey);

}



int easy()
{

	cleardevice();
	roundE1();
	getch();
	return 0;
}

main()
{
	int gd=DETECT,gm,c;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	Load();
	Intro();
	easy();
	return 0;
}
