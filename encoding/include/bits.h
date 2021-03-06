/*********************************************************************************************/
/*                    bits.h Created by xuli on 2017/08/15                                   */
/*                      本文件用于获取一个整型数据的位数                                     */
/*********************************************************************************************/

#ifndef __BITS_H__
#define __BITS_H__


#include <stdint.h>

/************************************************************************************************
 * 获取一个整型数据的位数
 * @number:待获取位数的整型数据
 * @return:返回整型数据的位数
 ************************************************************************************************/
int  getbits(uint64_t number);


#endif
