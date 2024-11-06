/*SLYVIA NJERI MURIITHI

CT102/G/22110/24

*/

#include<stdio.h>

int main () {
int hrs;

int wages;

float grosspay;

float overtime;

double taxes;

float net;

overtime = 0;

printf(" Enter hours ");

scanf("%d", &hrs);



printf(" Enter wages ");

scanf("%d", &wages);



if  (hrs > 40) {

overtime = (hrs - 40 ) *wages*1.5;

grosspay = (40 * wages) + overtime;

}else {

grosspay = hrs * wages ;

}

if (grosspay <=600) {

taxes = 600 *0.15 + (grosspay  - 600) * 0.2;

}

net = grosspay - taxes ;

printf("\n grosspay : $%.2f\n", grosspay);

printf("\n taxes : $%.2lf\n", taxes);

printf("\n net : $%.2f\n", net);

return 0;

}











