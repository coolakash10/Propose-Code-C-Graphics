/*********************************************************************************************************************
     **
     **  Propose Code  
     **  Use turbo C to get more effect of graphics 
     
     **  Written By:    Akash Vishwas Londhe
     **
*********************************************************************************************************************/

//include header files
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void welcome()
{
	int gd=DETECT ,gm,i,j,x=0,y=0;
	int a=391,b=440,c=493,g=698,h=783;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	for(j=0;j<5;j++)
	{
		settextstyle(j,HORIZ_DIR,j);
		for(i=1;i<=15;i++)
		{
			cleardevice();
			settextstyle(3,HORIZ_DIR,4);

			setbkcolor(i);
			outtextxy(x,y,"Welcome to my world..!");
			delay(90);
			sound(300+i*i+j);
			sound(a);delay(10);   sound(b);delay(10);
			sound(b);delay(10);   sound(c);delay(10);
			sound(g);delay(10);   sound(a);delay(10);
			sound(h);delay(10);   sound(b);delay(10);
			x+=5;
			y+=5;
		}
	}
	nosound();
}

void sound1()
{

	int j=0,a=391,b=440,c=493,d=523,e=587,f=659,g=698,h=783;
	cleardevice();

		setbkcolor(0);
		setcolor(15);
		settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
		outtextxy(35, 200, "I want to tell you something...!");

	sound(a);	delay(150);
	sound(a);	delay(150);
	sound(h);	delay(150);
	sound(f);	delay(150);
	sound(d);	delay(150);
	sound(c);	delay(150);
	sound(b);	delay(200);
	sound(a);	delay(150);
	sound(j);	delay(10);
	sound(a);	delay(150);
	sound(b);	delay(150);
	sound(a);	delay(150);
	sound(e);	delay(150);
	sound(d);	delay(250);
																																																																																																																																	sound(a);	delay(150);
	sound(a);	delay(150);
	sound(h);	delay(150);
	sound(f);	delay(150);
	sound(d);	delay(150);
	sound(c);	delay(150);
	sound(b);	delay(200);
	sound(g);	delay(150);
	sound(g);	delay(150);
	sound(f);	delay(150);
	sound(d);	delay(150);
	sound(e);	delay(150);
	sound(d);	delay(250);

	sound(a);	delay(150);
	sound(j);	delay(10);
	sound(a);	delay(150);
	sound(b);	delay(150);
	sound(a);	delay(150);
	sound(d);	delay(150);
	sound(c);	delay(250);
	sound(j);	delay(100);

	nosound();
}
void car()
{
	int gd=DETECT ,gm,i;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	cleardevice();
	for(i=0;i<500;i++)
	{
		line(0,387,639,387);
		setbkcolor(6);
		settextstyle(3,0,4);
		outtextxy(140,100,"Let's go to long-drive");
		line(50+i,370,90+i,370);
		arc(110+i,370,0,180,20);
		line(130+i,370,220+i,370);
		arc(240+i,370,0,180,20);
		line(260+i,370,300+i,370);
		line(300+i,370,300+i,350);
		line(300+i,350,240+i,330);
		line(240+i,330,200+i,300);
		line(200+i,300,110+i,300);
		line(110+i,300,80+i,330);
		line(80+i,330,50+i,340);
		line(50+i,340,50+i,370);

		line(165+i,305,165+i,330);
		line(165+i,330,230+i,330);
		line(230+i,330,195+i,305);
		line(195+i,305,165+i,305);
		circle(177+i,317,7);

		line(160+i,305,160+i,330);
		line(160+i,330,95+i,330);
		line(95+i,330,120+i,305);
		line(120+i,305,160+i,305);

		circle(110+i,370,17);
		circle(240+i,370,17);
		delay(30);
		cleardevice();
	}

}

void init()
{
	int gd, gm;
	int x, y;
	int i, j, kk;

	detectgraph(&gd, &gm);
	initgraph(&gd, &gm,"c:\\turboc3\\bgi");

	setbkcolor(6);
	setcolor(WHITE);
	line(0, 400, 640, 400);
	rectangle(300, 330, 340, 400);
	rectangle(310, 320, 330, 330);
	setcolor(4);
	line(319, 280, 319, 398);
	line(320, 280, 320, 398);
	rectangle(320, 280, 330, 300);
	outtextxy(340, 280, "PRESS ANY KEY TO IGNITE THE ROCKET");
	getch();

}
void rocket()
{
	int gd, gm;
	int x, y;
	int i, j, kk;

	detectgraph(&gd, &gm);
	initgraph(&gd, &gm,"c:\\turboc3\\bgi");

	for (j=400; j<640; j++)
	{
		cleardevice();
		setcolor(WHITE);
		line(0, j, 640, j);
		rectangle(300, j-70, 340, j);
		rectangle(310, j-80, 330, j-70);

		setcolor(RED);
		line(319, 280, 319, 400);
		line(320, 280, 320, 400);
		rectangle(320, 280, 330, 300);
		setcolor(YELLOW);
		circle(325,300,2);

		delay(5);
	}
	for (i=400; i>340; i--)
	{
		cleardevice();
		setcolor(RED);
		line(319, i, 319, i-120);
		line(320, i, 320, i-120);
		rectangle(320, i-120, 330, i-100);

		setcolor(YELLOW);
		circle(325, i-100, 2);
		delay(25);
	}

}
void jalwa()
{
	int gd, gm;
	int x, y;
	int i, j, k;

	detectgraph(&gd, &gm);
	initgraph(&gd, &gm,"c:\\turboc3\\bgi");

	cleardevice();
	k = 0;
	for (j=100; j<350; j++)
	{
		if (j%20==0)
		{
			setcolor(k);
			k=k+3;
		}
		sound(100*(j-99));
		delay(10);
		nosound();
		ellipse(320, 30, 0, 360, j+100, j+0);
	}
	nosound();
}
void wish()
{
	int gd, gm;
	int i=0,j=0,k=0;

	detectgraph(&gd, &gm);
	initgraph(&gd, &gm,"c:\\turboc3\\bgi");
	cleardevice();
	i = 0;
	while (!kbhit())
	{
		if(j>=340)
		   j=-j;

		if(k>=380)
		   k=-k;

		setcolor(rand());
		settextstyle(10,0,5);
		outtextxy(abs(j),abs(k),"I LOVE YOU");
		j+=5;
		k+=5;
		sound(100*i);
		i++;
		if(i>1000)
		  i=0;
		delay(50);
		nosound();

		setcolor(i++);
		settextstyle(GOTHIC_FONT,HORIZ_DIR,3);
		outtextxy(50, 200, "****** will u like to be my valentine?");
		delay(90);
		cleardevice();
	}
	getch();

}
int main()
{
	int gd, gm;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm,"c:\\turboc3\\bgi");
	cleardevice();
	welcome();
	delay(300);
	sound1();
	car();
	cleardevice();
	setbkcolor(0);
	setcolor(15);
	settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
	delay(300);
	init();
	rocket();
	jalwa();
	wish();

	return 0;
}

