#include "led.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEK STM32H7������
//LED��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//��������:2017/6/8
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2014-2024
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	

//��ʼ��PB0,PB1Ϊ���.��ʹ���������ڵ�ʱ��		    
//LED IO��ʼ��
void LED_Init(void)
{
//    GPIO_InitTypeDef GPIO_Initure;
//    __HAL_RCC_GPIOB_CLK_ENABLE();					//����GPIOBʱ��
//	
//    GPIO_Initure.Pin=GPIO_PIN_0|GPIO_PIN_1;			//PB0��1
//    GPIO_Initure.Mode=GPIO_MODE_OUTPUT_PP;  		//�������
//    GPIO_Initure.Pull=GPIO_PULLUP;         			//����
//    GPIO_Initure.Speed=GPIO_SPEED_FREQ_VERY_HIGH;  	//����
//    HAL_GPIO_Init(GPIOB,&GPIO_Initure);     		//��ʼ��GPIOB.0��GPIOB.1
//	
//    HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET);	//PB0��0
//	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,GPIO_PIN_SET);	//PB1��1 

		//ʱ��ʹ��
RCC->AHB4ENR|=1<<1;
	
//GPIOB.8 �������
GPIOB->MODER=0X00010000;//0X55555555;
GPIOB->OTYPER=0X00000000;
GPIOB->OSPEEDR=0X00030000;//0XFFFFFFFF;
GPIOB->PUPDR=0X00010000;

GPIOB->BSRRH=0X0100;//��
GPIOB->BSRRL=0X0100;  //��
}

