#include <stdio.h>
#include "counter.h"
#include <stdint.h>
#include "xil_io.h"
//#include <count.o>

#define CUSTOM_IP_BASEADDR 0x43C00000
#define REGISTER_1_OFFSET 0X00
#define REGISTER_2_OFFSET 0X04
#define REGISTER_3_OFFSET 0X08
#define REGISTER_4_OFFSET 0X12
#define REGISTER_5_OFFSET 0X16
#define REGISTER_6_OFFSET 0X20
#define REGISTER_6_OFFSET 0X24

//void set_custom_ip_register(int baseaddr, int offset, int value);
//int get_custom_ip_register(int baseaddr, int offset);
int main(){
 //int a[10];
 //int b[10];
}
 for(int i = 0; i <= 8; i++); {
	 //a[i] = (i + 1);
	 //b[i] = 2 * (i + 1);
// }

// for(int i = 0; i = 6; i++); {
	 //set_custom_ip_register(CUSTOM_IP_BASEADDR, REGISTER_6_OFFSET, a[i]);
	 //set_custom_ip_register(CUSTOM_IP_BASEADDR, REGISTER_5_OFFSET, b[i]);
	 //set_custom_ip_register(CUSTOM_IP_BASEADDR, REGISTER_4_OFFSET, b[i]);
	 //set_custom_ip_register(CUSTOM_IP_BASEADDR, REGISTER_3_OFFSET, b[i]);
	 //set_custom_ip_register(CUSTOM_IP_BASEADDR, REGISTER_2_OFFSET, b[i]);
	 //set_custom_ip_register(CUSTOM_IP_BASEADDR, REGISTER_1_OFFSET, b[i]);
	 
	 //int temp1 = get_custom_ip_register(CUSTOM_IP_BASEADDR, REGISTER_1_OFFSET);

	 //printf("Register 1 = 0x%02X\n\r", temp1);
// }
	printf("Register 1 = 0x%02X\n\r", i); 
	}
 //return 0;
 //}
 //void set_custom_ip_register(int baseaddr, int offset, int value){
 // Xil_Out32(baseaddr + offset, value);
 //}
// int get_custom_ip_register(int baseaddr, int offset){
 // int temp = 0;
 // temp = Xil_In32(baseaddr + offset);
  //return(temp);
 //}
