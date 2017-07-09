/*
##############################################################################
			BRAG[BRAin Game] 2015.v.1.0

This source code is an OSP[Open Source Project], Hereby it can be altered
and can be modified according to the #Developer#.

##############################################################################
			   Created by  OneWorld
##############################################################################*/

#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>


    int init_intro();
    void info();
    void game_body();
    void loading();

int main()
{
 clrscr();

    char choice;
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "c:/TC/BGI");

      choice = init_intro();

	     if(choice=='y')
	       {
		     cleardevice();
		     info();
		     game_body();
		}
	     else
		exit(0);

    closegraph();
    return(0);
}

/*
#################################################################################
##################################### INTRO() #####################################
#################################################################################*/


    int init_intro()
     {
	int x,y,c;

	    x = getmaxx() / 2;
	    y = getmaxy() / 2;


		 for(int i=0;i<200;i++)
		  {
			setbkcolor(0);
			bar(0+i,479-i,639-i,0+i);
			setfillstyle(1,i);
			delay(20);
		  }

				settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);
				outtextxy(240,220,"BRAG");
				delay(2000);
		cleardevice();
		setbkcolor(8);
		delay(150);
		settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
		settextjustify(CENTER_TEXT, CENTER_TEXT);
		outtextxy(x, y,"Welcom 2 BRAG");
		outtextxy(320, 475,"VERSION 1.0.1");
		delay(1000);
		outtextxy(320,264,"PLAY [y/n]");

	 return (getch());
       }

/*
##################################################################################
################################## INFO() ########################################
##################################################################################*/


	void info()
	  {
	    cleardevice();

		loading	();
		setbkcolor(8);
		outtextxy(320,50,"Game Rules [BRAG]");
		outtextxy(300,100,"BRAG is an 'Acronym' for BRAin Game.");
		outtextxy(315,120,"This game targets Player's memory power and Analitical thinking.");
		getch();
		outtextxy(250,250,"RULE [1]: Randomized Alphabet will be flahsed in order");
		outtextxy(210,265,"RULE [2]: Player must memorize the patterns.");
		outtextxy(238,280,"RULE [3]: Memrising flash will only be shown 'Once'");
		outtextxy(230,295,"RULE [4]: If you [FAIL], You can always Try again");
		delay(5000);
		outtextxy(530,470,"PRESS ANY KEY TO CONTINUE");

	    getch();
	  }

/*
################################################################################
################################## LOADING() ###################################
################################################################################_*/


	 void loading()
	 {

	      int x=83;
	      settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
	      outtextxy(320,240,"BRAG");
	      delay(1000);
	      for(int a=0;a<2;a++)
	      {

		  for(int h=0; h<3; h++)
		  {
			settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
			outtextxy(320,240,"BRAG");
			settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
			outtextxy(50,460,"LOADING");
				for(int i=0;i<5;i++)
				{

				   outtextxy(x, 460,".");
				   delay(250);
				   x+=10;
				}
			x=83;
			cleardevice();
			setbkcolor(h);
		  }
	      }

	 }

/*
####################################################################################
################################## GAME_BODY #######################################
####################################################################################*/


	 void game_body()
	 {

	    cleardevice();
	     loading();
	     setbkcolor(0);
	     outtextxy(320,240,"GAME UNDER_CONSTRUCTION");
	    getch();
	 }
