#include <stdio.h>
#include <stdlib.h>

int main()
{
float T1[13], min1, max1 ;
float T2[15], min2, max2;
float T3[28];
int i, j, k, cpt, temps;
for(i=0;i<13;i++){
    printf("donnez la moyenne de l'étudiant : %f \n", i);
    scanf("%f", &T1[i]);
}
max1=0;
min1=0;
for(i=0;i<13;i++){
if(min1>T1[i]){
    min1=T1[i];
}
if(max1<T1[i]){
    max1=T1[i];
}
}
printf("la note majorante de 1er classe est %f \n", max1);
printf("la derniére note de 1er classe est: %f \n", min1);
for(i=0;i<13;i++){
    if(T1[i]>=10){
        printf("Affichez la note superieur ou egal a dix %f \n ", T1[i]);
    }
}
for(j=0;j<15;j++){
    printf("donnez la moyenne de l'étudiant : %f \n", j);
    scanf("%f", &T2[j]);
}
max2=0;
min2=0;
for(j=0;j<15;j++){
    if(max2<T2[j]){
       max2=T2[j];
    }
    if(min2>T2[j]){
        min2=T2[j];
    }
    printf("la note majorantede 2éme classe  est : %f \n", max2);
    printf("la derniére de 2éme classe est : %f \n", min2);
}
for(j=0;j<15;j++){
    if(T2[j]>=10){
        printf("affichez la note superieure est : %f \n", T2[j]);
    }
}
for(i=0;i<13;i++){
        	T3[i]=T1[i];
		}
		cpt=13;
		for(i=0;i<15;i++){
			T3[cpt]=T2[i];
			cpt=cpt+1;
			}
        for(i=0;i<28;i++){
        	for(k=i+1;k<28;k++){
        		if(T3[i] > T3[k]){
        			temps = T3[k];
        			T3[i] = T3[k];
        			T3[k] = temps;
				}
			}
		}
       printf("\n voila le tableau trier en ordre croissante :\n");
	   for(i=0;i<28;i++){
	   	printf("%f",T3[k]);
	   }
return 0;
}
