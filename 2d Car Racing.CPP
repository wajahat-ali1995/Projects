#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>

int easy();

void load(){
	setbkcolor(1);
	cleardevice();
	setcolor(14);
	settextstyle(1,0,4);
	outtextxy(150,160,"Car Crash");
	rectangle(120,260,560,290);
	settextstyle(1,0,2);
	outtextxy(160,350,"Project By");
	outtextxy(280,350,"Adnan Ahmed");

	for(int i=121;i<=559;i++){
	delay(10);
	setfillstyle(3,14);
	bar(121,261,i,289);}
	delay(1000);
}

void level()
{
	easy();
}

int easy(){
	cleardevice();

	int rise=1,roundTime=6000;
	int life=4;
	long long highscore=0;
	int xOfCar=1,xOfObject=1,yOfCar=1,yOfObject=1;
	setfillstyle(9,GREEN);
	bar(0,0,690,600);
	do{

	roundTime--;
	printf("Time : %d ", roundTime/10);
	gotoxy(1,17);
	printf("Lifes : %d ", life);
	gotoxy(1,1);
	printf("Your Score : %d ", highscore);
	gotoxy(1,9);



	if(60+yOfObject==670)
	yOfObject=1;


	setfillstyle(1,8);
	bar(150,0,500,600);
	setfillstyle(8,4);
	bar(129,0,149,600);
	bar(501,0,521,600);

	setfillstyle(5,6);
	bar(200,10+yOfObject,250,60+yOfObject);

	bar(390,-150+yOfObject,440,-100+yOfObject);


	line(330,50+rise,330,180+rise);
	line(330,250+rise,330,380+rise);
	delay(5);
	rise++;
	if(rise==200)
	rise=1;

	if(kbhit()){

	char key;

	key=getche();

	if(key=='y' || key == 'Y')
	yOfCar-=6;
	else if(key=='h' || key=='H')
	yOfCar+=6;
	else if(key=='g' || key=='G')
	xOfCar-=6;
	else if(key=='j' || key=='J')
	xOfCar+=6;
		    }


	setfillstyle(1,1);
	bar(200+xOfCar,400+yOfCar,250+xOfCar,450+yOfCar);
	setfillstyle(1,3);
	bar(205+xOfCar,405+yOfCar,245+xOfCar,445+yOfCar);
	setfillstyle(1,0);
	bar(190+xOfCar,405+yOfCar,200+xOfCar,415+yOfCar);
	bar(190+xOfCar,435+yOfCar,200+xOfCar,445+yOfCar);
	bar(250+xOfCar,405+yOfCar,260+xOfCar,415+yOfCar);
	bar(250+xOfCar,435+yOfCar,260+xOfCar,445+yOfCar);





	if(( 200+xOfCar>200 && 200+xOfCar<250 && 400+yOfCar>=60+yOfObject && 400+yOfCar<=10+yOfObject )||( 200+xOfCar>390 && 200+xOfCar<440 && 400+yOfCar<=10+yOfObject && 400+yOfCar>=60+yOfObject )||( 250+xOfCar>200 && 200+xOfCar<250 && 400+yOfCar==60+yOfObject) || ( 250+xOfCar>390 && 200+xOfCar<440 && 400+yOfCar==-100+yOfObject ) ||( 190+xOfCar<=145 || 260+xOfCar>=502)){

	  life--;
	  xOfCar=1,xOfObject=1,yOfCar=1,yOfObject=1;
	  getch();
								 }

	if(life==0){
	clrscr();
	cleardevice();
	setbkcolor(RED);
	settextstyle(1,0,3);
	outtextxy(250,320,"You Lose.......");
	printf("Your Score : %d ", highscore);
	gotoxy(10,3);
	}
	if(life!=0 && roundTime==0)
	{
	clrscr();
	cleardevice();
	setbkcolor(GREEN);
	settextstyle(1,0,3);
	outtextxy(250,320,"You Win.......");
	printf("Your Score : %d ", highscore);
	gotoxy(10,3);
	break;

	}

	highscore+=10;
	yOfObject++;
	}while(life!=0);
	return 0;
}

main()
{
	int gd=DETECT,gm,c;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	load();
	level();

	getch();
}

