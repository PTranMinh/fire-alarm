/**
  ******************************************************************************
  * Ten Tep      :        lcd_16x2.h
  * Tac Gia      :        Nguyen Quy Nhat
  * Cong Ty      :        MinhHaGroup
  * Website      :        BanLinhKien.Vn
  * Phien Ban    :        V1.0.0
  * Ngay         :        31-07-2012
  * Tom Tat      :        Khai bao cac ham dieu khien LCD 16x2.
  *           
  *
  ******************************************************************************
  * Chu Y        :   Phai dinh nghia cac chan su dung cho LCD vao file main.h
  *					 Vi Du:
                        PIC        AVR        8051
#define     LCD_RS     PORTD0     PORTD.0     P0_0
#define     LCD_RW     PORTD1     PORTD.1     P0_1
#define     LCD_EN     PORTD2     PORTD.2     P0_2
#define     LCD_D4     PORTD4     PORTD.4     P0_4
#define     LCD_D5     PORTD5     PORTD.5     P0_5
#define     LCD_D6     PORTD6     PORTD.6     P0_6
#define     LCD_D7     PORTD7     PORTD.7     P0_7                   
  ******************************************************************************
**/
#ifndef __LCD_16X2_H
#define __LCD_16X2_H
#include "main.h"
/*******************************************************************************
Noi Dung    :   Gui tin hieu Enable den LCD.
Tham Bien   :   Khong.
Tra Ve      :   Khong.
********************************************************************************/
 void LCD_Enable(void);
 /*******************************************************************************
Noi Dung    :   Gui 4 bit du lieu den LCD.
Tham Bien   :   Data: 4 bit thap cua Data chua 4 bit du lieu can gui.
Tra Ve      :   Khong.
********************************************************************************/

 void LCD_Send4Bit( uint8_t  Data );
 /*******************************************************************************
Noi Dung    :   Gui 1 byte du lieu den LCD.
Tham Bien   :   command: byte du lieu can gui.
Tra Ve      :   Khong.
********************************************************************************/
 void LCD_SendCommand (uint8_t  command );
 /*******************************************************************************
Noi Dung    :   Khoi tao LCD.
Tham Bien   :   Khong.
Tra Ve      :   Khong.
********************************************************************************/
 void LCD_Init ( void );
 /*******************************************************************************
Noi Dung    :   Thiet lap vi tri con tro LCD.
Tham Bien   :   x: vi tri cot cua con tro. x = 0 - 15.
                y: vi tri hang cua con tro. y= 0,1.
Tra Ve      :   Khong.
********************************************************************************/
void LCD_Gotoxy(uint8_t  x, uint8_t  y);
 /*******************************************************************************
Noi Dung    :   Xoa noi dung hien thi tren LCD.
Tham Bien   :   Khong.
Tra Ve      :   Khong.
********************************************************************************/
void LCD_Clear();
 /*******************************************************************************
Noi Dung    :   Viet 1 ki tu len LCD.
Tham Bien   :   Khong.
Tra Ve      :   Khong.
********************************************************************************/
 void LCD_PutChar ( uint8_t  Data );
 /*******************************************************************************
Noi Dung    :   Viet 1 chuoi ki tu len LCD.
Tham Bien   :   Khong.
Tra Ve      :   Khong.
********************************************************************************/
void LCD_Puts (uint8_t *s);
#endif
/******************************KET THUC FILE******************************
______________________________NGUYEN QUY NHAT______________________________*/



