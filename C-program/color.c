
#include <stdio.h>
//#include <conio.h>
#include "esc_color.h"

int main(){

puts( CLEAR RED "Roses " NORM "are " BRED "red" NORM ". " );
puts( PURPLE "Volvets " NORM "are " BPURPLE "purple"  NORM ". " ); 
puts( YELLOW "Sugar " NORM "is " BYELLOW "sweet" NORM ". " ); 
puts( "And so are " UNDER BOLD "you" NORM ". " ); 
//puts("[1;31mapple[m is [31mred[m. "); 
//puts( GREEN LIGHT "leaf " NORM "is " GREEN "green" NORM ". " ); 

return 0 ;

}
