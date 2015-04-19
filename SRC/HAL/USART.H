#ifndef __USART_H__
#define __USART_H__

#include "stm32f10x.h"

//-----USART����-----//
#define BAUD 115200

//-----���ͺͻ�����Size�趨�궨��-----//
#define TxBufferSize   10
#define RxBufferSize   TxBufferSize

extern __IO uint8_t TxCounter;				// ���ͼ�����
extern __IO uint8_t RxCounter;				// ���ռ�����
extern uint8_t TxBuffer[TxBufferSize];		// ���ͻ�����
extern uint8_t RxBuffer[RxBufferSize];		// ���ջ�����

//-----����-----//
extern void Uart1_PutChar(const u8 ch);						// ����1�����ַ�
extern void Uart1_PutString(const u8 * buf, const u8 len);	// ����1�����ַ���

#endif