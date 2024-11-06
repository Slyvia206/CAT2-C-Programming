/* SLYVIA NJERI MURIITHI

CT102/G/22110/24

*/

// arrays in c 

#include<stdio.h>

int main(){



int a,v;

int scores[4][2]={{65,92},{84,72},{35,70},{59,67}};

for(a=0;a<4;a++){

for(v=0;v<2;v++){

printf("scores[%d][%d]=%d\n",a,v,scores[a][v]);

}

}

return 0;
}