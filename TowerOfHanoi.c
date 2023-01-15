#include <conio.h>
#include <graphics.h>
#include <stdio.h>

void outline()
{
	// Main Base
	line(65, 440, 575, 440);

	// 1st Line
	line(150, 220, 150, 440);

	// 2nd Line
	line(320, 220, 320, 440);

	// 3rd Line
	line(490, 220, 490, 440);

	// Printing Message
	settextstyle(8, 0, 1);
	outtextxy(140, 445, "(1)");
	outtextxy(310, 445, "(2)");
	outtextxy(480, 445, "(3)");
}

// Function for moving the YELLOW Disk
// to Third Tower On Top Of LIGHTRED Disk
void p7()
{
	getch();
	cleardevice();
	settextstyle(8, 0, 1);
	outtextxy(280, 40, "7th Phase");
	setfillstyle(SOLID_FILL, LIGHTRED);
	rectangle(440, 400, 540, 360);
	floodfill(445, 365, 15);
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(455, 360, 525, 320);
	floodfill(460, 325, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(425, 440, 555, 400);
	floodfill(430, 405, 15);
	
	// Calling outline() function
	outline();
}

// Function for moving the LIGHTRED
// Disk To Third Tower On Top Of Red Disk
void p6()
{
	getch();
	cleardevice();
	settextstyle(8, 0, 1);
	outtextxy(280, 40, "6th Phase");
	setfillstyle(SOLID_FILL, LIGHTRED);
	rectangle(440, 400, 540, 360);
	floodfill(445, 365, 15);
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(115, 440, 185, 400);
	floodfill(120, 405, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(425, 440, 555, 400);
	floodfill(430, 405, 15);

	// Calling outline() function
	outline();
}

// Function for moving YELLOW Disk
// To the First Tower
void p5()
{
	getch();
	cleardevice();
	settextstyle(8, 0, 1);
	outtextxy(280, 40, "5th Phase");
	setfillstyle(SOLID_FILL, LIGHTRED);
	rectangle(270, 440, 370, 400);
	floodfill(275, 405, 15);
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(115, 440, 185, 400);
	floodfill(120, 405, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(425, 440, 555, 400);
	floodfill(430, 405, 15);

	// Calling outline() function
	outline();
}

// Moving Red Disk To Third Tower
void p4()
{
	getch();
	cleardevice();
	settextstyle(8, 0, 1);
	outtextxy(280, 40, "4th Phase");
	setfillstyle(SOLID_FILL, LIGHTRED);
	rectangle(270, 440, 370, 400);
	floodfill(275, 405, 15);
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(285, 400, 355, 360);
	floodfill(290, 365, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(425, 440, 555, 400);
	floodfill(430, 405, 15);

	// Calling outline() function
	outline();
}

// Function for moving the YELLOW Disk
// To Second Tower On Top Of LIGHTRED Disk
void p3()
{
	getch();
	cleardevice();
	settextstyle(8, 0, 1);
	outtextxy(280, 40, "3rd Phase");
	setfillstyle(SOLID_FILL, LIGHTRED);
	rectangle(270, 440, 370, 400);
	floodfill(275, 405, 15);
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(285, 400, 355, 360);
	floodfill(290, 365, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(85, 440, 215, 400);
	floodfill(150, 420, 15);

	// Calling outline() function
	outline();
}

// Function for moving the LIGHTRED Disk
// To Second Tower
void p2()
{
	getch();
	cleardevice();
	settextstyle(8, 0, 1);
	outtextxy(280, 40, "2nd Phase");
	setfillstyle(SOLID_FILL, LIGHTRED);
	rectangle(270, 440, 370, 400);
	floodfill(275, 405, 15);
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(455, 440, 525, 400);
	floodfill(490, 420, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(85, 440, 215, 400);
	floodfill(150, 420, 15);

	// Calling outline() function
	outline();
}

// Function for moving the YELLOW Disk
// To Third Tower
void p1()
{
	getch();
	cleardevice();
	settextstyle(8, 0, 1);
	outtextxy(280, 40, "1st Phase");
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(455, 440, 525, 400);
	floodfill(490, 420, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(85, 440, 215, 400);
	floodfill(150, 420, 15);
	setfillstyle(SOLID_FILL, LIGHTRED);
	rectangle(100, 400, 200, 360);
	floodfill(150, 380, 15);

	// Calling outline() function
	outline();
}

// Function to start the animations
void start()
{
	// Starting Condition
	cleardevice();
	settextstyle(8, 0, 1);
	outtextxy(250, 40, "Beginning State");

	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(85, 440, 215, 400);
	floodfill(150, 420, 15);

	// LIGHTRED Coloring Of Disk
	setfillstyle(SOLID_FILL, LIGHTRED);
	rectangle(100, 400, 200, 360);
	floodfill(150, 380, 15);

	// YELLOW Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(115, 360, 185, 320);
	floodfill(150, 340, 15);

	// calling outline() function
	outline();
}

// Driver Code
void main()
{
	int gd = DETECT, gm;

	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	start();
	p1();
	p2();
	p3();
	p4();
	p5();
	p6();
	p7();
	getch();
	closegraph();
}
