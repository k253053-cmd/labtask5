#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
/*A traffic light system works in two stages. First, it checks if the power is on (powerOn is 1). If
the power is on, it then checks the lightColor (&#39;R&#39;, &#39;Y&#39;, &#39;G&#39;) to decide the action: &quot;Stop&quot; for red,
&quot;Caution&quot; for yellow, &quot;Go&quot; for green. If the power is off, it should always print &quot;Signal Off&quot;.
Write the code for this system
*/
bool power = 1;
char color = '\0';
printf("write traffic light color: \n");
scanf(" %c",&color);
if(power){
    switch(color){
case 'R':
printf("stop\n");
break;
case 'Y':
printf("caution\n");
break;
case 'G':
printf("Go\n");
break;
default:
printf("write a valid color for light\n");
break;
    }
}
else{
printf("signal off\n");
}








    return 0;
}