
#include <stdio.h>

int main(){ 

float x,y; 
int quadrant = 0 ; 

puts("please input a point in format (x,y) : ");
scanf("(%10f,%10f)",&x,&y);

if( x > 0 ){
	if( y > 0 ) quadrant = 1 ;
	if( y < 0 ) quadrant = 4 ;
}else if( x < 0 ){
	if( y > 0 ) quadrant = 2 ;
	if( y < 0 ) quadrant = 3 ;
}

printf("point (x,y) = (%f,%f) at %dquadrant. \n\n", x, y, quadrant); 

/*****************************************************************/


int hr, money = 0 , sec = 1 ; 

puts("please keyin how many hour you work: ");
scanf("%d", &hr); 

if( hr > 50 ) sec++ ; 
if( hr > 70 ) sec++ ; 

switch( sec ){

case 3 : 
	money += 150*(hr-70) ; 
	hr = 70 ;

case 2 :
	money += 125*(hr-50) ; 
	hr = 50 ;

case 1 :
	money += hr*100; 

}

printf("you earn %d dollar. \n\n", money); 


/**************************************************/

int month; 
puts("please input a month number: ");
scanf("%d", &month);

/*
 * if( month <= 2 || month >= 12) puts("winter. ");
else if( month <= 5 ) puts("spring. "); 
else if( month <= 8 ) puts("summer. "); 
else puts("autom. "); 
*/

switch( (month-2)%12/3 ){

case 0: 
        puts("spring. ");
        break; 
case 1:
        puts("summer. ");
        break;
case 2:
	puts("autom. "); 
        break; 
case 3: 
        puts("winter. ");
}


return 0 ;

}
