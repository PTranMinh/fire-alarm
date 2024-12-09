/**
  ******************************************************************************
  * Ten Tep      :        dht11.h
  * Tac Gia      :        Nguyen Quy Nhat
  * Cong Ty      :        MinhHaGroup
  * Website      :        BanLinhKien.Vn
  * Phien Ban    :        V1.0.0
  * Ngay         :        31-07-2012
  * Tom Tat      :        Khai bao cac ham dieu khien dht11.
  *           
  *
  ******************************************************************************
  * Chu Y        :   Phai dinh nghia cac chan su dung cho DHT11 vao file main.h
  *                Vi Du:
                                PIC       AVR       8051
#define         DHT_DATA_IN     PINB0     PINB.0    P2_0
#define         DHT_DATA_OUT    PORTB0    PORTB.0   P2_0
               Voi PIC va AVR can dinh nghia them huong du lieu.
                                PIC       AVR
#define         DHT_DDR_DATA    DDRB0     DDRB.0                  
  ******************************************************************************
**/
#ifndef __DHT11_H
#define __DHT11_H
#include "main.h"
#define DHT_ER       0
#define DHT_OK       1
 /*******************************************************************************
Noi Dung    :   MCU gui yeu cau chuyen doi den DHT11.
Tham Bien   :   Khong.
Tra Ve      :   Khong.
********************************************************************************/
uint8_t DHT_Start(void);
 /*******************************************************************************
Noi Dung    :   Kiem tra dap ung cua DHT11 sau yeu cau chuyen doi.
Tham Bien   :   Khong.
Tra Ve      :   DHT_ER: Dap ung cua DHT bi loi.
                DHT_OK: Dap ung cua DHT thanh cong.
********************************************************************************/  
//uint8_t   DHT_IsOk(void);
/*******************************************************************************
Noi Dung    :   Doc 1 byte du lieu tu DHT11.
Tham Bien   :   Khong.
Tra Ve      :   1 byte du lieu.
 *******************************************************************************/
uint8_t DHT_ReadByte(void);
/*******************************************************************************
Noi Dung    :   Doc 1 khung du lieu tu DHT11 gui ve.
Tham Bien   :   array: mang so nguyen 8 bit luu tru khung du lieu.
Tra Ve      :   - DHT_OK:   Neu DHT va MCU gui du lieu thanh cong.
                - DHT_ER:   Neu DHT va MCU gui du lieu that bai.
 *******************************************************************************/
uint8_t DHT_GetFrame(uint8_t *array);   
/*******************************************************************************
Noi Dung    :   Doc gia tri nhiet do, do am tu DHT.
Tham Bien   :   *tem:    con tro luu tru gia tri nhiet do.
                *humi:   con tro luu tru gia tri do am.   
Tra Ve      :   - DHT_OK:   Neu do nhiet do,do am thanh cong.
                - DHT_ER:   Neu do nhiet do, do am xay ra loi.
 *******************************************************************************/
uint8_t DHT_GetTemHumi (uint8_t *tem,uint8_t *humi);
#endif
/******************************KET THUC FILE******************************
______________________________NGUYEN QUY NHAT______________________________*/
