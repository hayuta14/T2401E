#include <stdio.h>
 float crystalTienDien(int soKWh) {
 	float pay;
 	if (soKWh<=50){
 		pay = soKWh *500 ;
	 }
	 else if(soKWh<=100){
	 	pay = 50 * 500 + (soKWh-50) * 700;
	 }
	 else{
	 	pay = 50 * 500 + 50 *700 + (soKWh-100) * 900;
	 }
	 return pay;
 }
 int main(){
 	int KWh1=30,KWh2=80,KWh3=120;
 	printf("Electricity bill for %d kWh: %f VND\n", KWh1, crystalTienDien(KWh1));
    printf("Electricity bill for %d kWh: %f VND\n", KWh2, crystalTienDien(KWh2));
    printf("Electricity bill for %d kWh: %f VND\n", KWh3, crystalTienDien(KWh3));

    return 0;
 }
