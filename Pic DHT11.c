//#include "main.h"
//#include "var.h"
//#include "lcd16x2/lcd_16x2.c"
//#include <16F887.h> 
//#include <def_877a.h>
#include "dht/dht11.c"

#define l1          PORTD7
#define l2          PORTD6
#define l3          PORTD5
#define l4          PORTD4
#define BUZ         PORTD0
#define GAS         PINA0

const unsigned char so[]={0xC0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
//int dh_nhiet_do,dh_do_am;
uint8_t dh_nhiet_do=26,dh_do_am = 50;
  void hienthi7doan()
{
     int i;
   for(i=0;i<5;i++)
   {
      PORTC = so[dh_do_am/10];
      l1 = 0;
      delay_us(100);
      l1 = 1;
      PORTC = so[dh_do_am%10];
      l2 = 0;
      delay_us(100);
      l2 = 1;
      PORTC = so[dh_nhiet_do/10];
      l3 = 0;
      delay_us(100);
      l3 = 1;
      PORTC = so[dh_nhiet_do%10];
      l4 = 0;
      delay_us(100);
      l4 = 1;
   }
 }
void main()
{ 
 //  uint8_t dh_nhiet_do,dh_do_am;
 //  uint8_t str[20];

  // DDRA=0x1e;
   DDRA=0xff;
   DDRB=0xff;
   DDRC=0x00;
   DDRD=0x00;
 //  DDRE=0x00;
   port_b_pullups(TRUE); 

l1=l2=l3=l4=1; 
   while(TRUE)
   {
   hienthi7doan();
      if(DHT_GetTemHumi(&dh_nhiet_do,&dh_do_am))
      { 
          hienthi7doan();
      }
      if(!GAS) {
         BUZ = 1;
      } else {
         BUZ = 0;
      }
      //delay_ms(500);
   }
   }

