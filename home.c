/*Name=Naresh Choudhary
  Roll No=20EJICS087*/
#include<stdio.h>
#include<stdlib.h>
#include <graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	

	/*roof*/
	line(50,100,235,20);
	delay(500);
	line(420,100,235,20);
	delay(500);
	line(420,20,235,20);
	delay(500);
	line(420,20,605,100);
	


	/*horizontal line*/ 
	delay(500); 	
	line(50,100,605,100);
	delay(500);
	line(50,350,605,350);
	delay(500);
	line(605,100,605,350);
	

	/*vertical line*/
	delay(500);
	line(50,100,50,350);
	delay(500);
	line(420,100,420,350);
	delay(500);
	

	/*circle */
	circle(235,50,20);
	delay(500);
	

	/*door*/
	rectangle(195,350,275,200);
	delay(500);


	/*Window*/
	rectangle(582,260,482,200);
	delay(500);
	line(532,260,532,200);
	delay(500);
	line(482,230,582,230);
	delay(6000);

	closegraph();
	return 0;
	}