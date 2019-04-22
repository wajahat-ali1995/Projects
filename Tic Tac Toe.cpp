#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include<cstdlib>
using namespace std;
int counter=0;//taking Global variables;
string player1;
string player2;
int draw=1;
int win=0;
int win2=0;
int p1win=0;
int p2win=0;
const int SIZE=9;
string boxNumbers[SIZE]={"1","2","3","4","5","6","7","8","9"};
string usernumber;
string usernumber2;
void display()
{    system("cls");
cout<<"\n\t   Welcome!\n\tThis Is Tic Toe \n   Made By:Haseeb Siddiqui \n\t&&  Wajahat Rajput\n\n";//prompt the game screen
cout<<"    This Is Two Players Game \n\n (X) For PLAYER(1) and  (O) For PLAYER(2)\n\n\n";
cout<<"\t   |    |\n \t"<<boxNumbers[0]<<"  |  "<<boxNumbers[1]<<" |  "<<boxNumbers[2]<<"\n\t   |    |\n "<<"      ---------------\n";
cout<<"\t   |    |\n \t"<<boxNumbers[3]<<"  |  "<<boxNumbers[4]<<" |  "<<boxNumbers[5]<<"\n\t   |    |\n "<<"      ---------------";
cout<<"\t\n\t   |    |\n \t"<<boxNumbers[6]<<"  |  "<<boxNumbers[7]<<" |  "<<boxNumbers[8]<<"\n\t   |    |\n ";
  
}
void checker()
{
      int k=0; 
 if(usernumber.length()==1 || usernumber[0]>=1 && usernumber[0]<=9) // checking wether usernumber is valid or not;
 {  
     while(k<=9)
       {  
	   if(usernumber==boxNumbers[k] && counter%2==0) //whther number is of 1st player or else
	     {boxNumbers[k]="X";
	     draw++;
         break;}
	    else if(usernumber==boxNumbers[k])
	     {boxNumbers[k]="O";
	      draw++;
      	  break;}
          k++;
         }
 }
 else
   {cout<<"Invalid Number:";
    getch();
    }
                          
                          }
void winner()
{   //making the comparisons inorder to get the winner
	if(boxNumbers[0]==boxNumbers[1] && boxNumbers[1]==boxNumbers[2])
	{if(boxNumbers[0]=="X")
	win++;
	else
		win2++;}
	if(boxNumbers[3]==boxNumbers[4] && boxNumbers[4]==boxNumbers[5])
	{if(boxNumbers[3]=="X")
	win++;
	else
		win2++;}
	if(boxNumbers[6]==boxNumbers[7] && boxNumbers[7]==boxNumbers[8])
	{if(boxNumbers[6]=="X")
	win++;
	else
		win2++;}
	if(boxNumbers[0]==boxNumbers[3] && boxNumbers[3]==boxNumbers[6])
	{if(boxNumbers[0]=="X")
	win++;
	else
		win2++;}
    if(boxNumbers[1]==boxNumbers[4] && boxNumbers[4]==boxNumbers[7])
	{if(boxNumbers[1]=="X")
	win++;
	else
		win2++;}
    if(boxNumbers[2]==boxNumbers[5] && boxNumbers[5]==boxNumbers[8])
	{if(boxNumbers[2]=="X")
	win++;
	else
		win2++;}
    if(boxNumbers[0]==boxNumbers[4] && boxNumbers[4]==boxNumbers[8])
	{if(boxNumbers[0]=="X")
	win++;
	else
		win2++;}
	if(boxNumbers[2]==boxNumbers[4] && boxNumbers[4]==boxNumbers[6])
	{if(boxNumbers[2]=="X")
	win++;
	else
		win2++;}  }
void turnThemBack()
{ // again making every variable the same as they were i the starting;
 counter=0;
 draw=1;
 win=0;
 win2=0;
 boxNumbers[0]="1";
 boxNumbers[1]="2";
 boxNumbers[2]="3";
 boxNumbers[3]="4";
 boxNumbers[4]="5";
 boxNumbers[5]="6";
 boxNumbers[6]="7";
 boxNumbers[7]="8";
 boxNumbers[8]="9";
}
int main(){
	// used to give colors to the background and text;
	char yesOrNo;
	display();
	cout<<"PLease give Player one name:\n";
	cin>>player1;
	
	cout<<"PLease give Player Two name:\n";
	cin>>player2;
	
   do{//the main while loop of the whole game.. 
	
	while(counter!=-1)
	{          
		display();
		if (win>=0 && win2>=0 && draw>9 )
			{break;}
       
		if (counter%2==0)
		{cout<<endl<<player1<<" turn:\n";
		cin>>usernumber;}
		else
		{cout<<endl<<player2<<" turn:\n";
		cin>>usernumber;}
         
         checker();
         
        winner();
		counter++;
	} 
	if(draw>9 && win==win2)
		cout<<"\nMatch Draw";
    	else
		if (win>0)
		   	{cout<<"\nPlayer 1:"<<player1<<" WOn the game:: Well Done Buddy\n";
	          p1win++;}
	  	else
		if(win2>0)
			 {cout<<"\n\nPlayer 2:"<<player2<<" WOn the game:: Well Done Buddy\n";
	          p2win++;}
			cout<<"\n\n "<<player1<<":"<<p1win<<"\n\n "<<player2<<":"<<p2win<<"\n\nDo you Want to play again:(y) for 'Yes' and (n) for 'No'\n";
            cin>>yesOrNo;
   turnThemBack();
   }
	while(yesOrNo=='y' || yesOrNo=='Y');
	if (p1win>p2win)//used to tell about the series winner or draw;
		cout<<player1<<" Won the Series\n";
	else if (p1win==p2win)
	     cout<< "Series Draw\n";
	else
		cout<<player2<<" Won the Series\n";
	getch();}
