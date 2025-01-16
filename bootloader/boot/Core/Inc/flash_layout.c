/************************************************************************************//**
* \file         Demo/ARMCM3_STM32F1_Nucleo_F103RB_GCC/Boot/flash_layout.c
* \brief        Custom flash layout table source file.
* \ingroup      Boot_ARMCM3_STM32F1_Nucleo_F103RB_GCC
* \internal
*----------------------------------------------------------------------------------------
*                          C O P Y R I G H T
*----------------------------------------------------------------------------------------
*   Copyright (c) 2017  by Feaser    http://www.feaser.com    All rights reserved
*
*----------------------------------------------------------------------------------------
*                            L I C E N S E
*----------------------------------------------------------------------------------------
* This file is part of OpenBLT. OpenBLT is free software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published by the Free
* Software Foundation, either version 3 of the License, or (at your option) any later
* version.
*
* OpenBLT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
* PURPOSE. See the GNU General Public License for more details.
*
* You have received a copy of the GNU General Public License along with OpenBLT. It
* should be located in ".\Doc\license.html". If not, contact Feaser to obtain a copy.
*
* \endinternal
****************************************************************************************/

/** \brief   Array wit the layout of the flash memory.
 *  \details Also controls what part of the flash memory is reserved for the bootloader.
 *           If the bootloader size changes, the reserved sectors for the bootloader
 *           might need adjustment to make sure the bootloader doesn't get overwritten.
 */
static const tFlashSector flashLayout[] =
{
  /* space is reserved for a bootloader configuration with all supported communication
   * interfaces enabled. when for example only UART is needed, than the space required
   * for the bootloader can be made a lot smaller here.
   */
  /* { 0x08000000, 0x02000 },           flash sector  0 - reserved for bootloader   */
  //{ 0x08002000, 0x02000 },           /* flash sector  1 - 8kb                       */
  //{ 0x08004000, 0x02000 },           /* flash sector  2 - 8kb                       */
  //{ 0x08006000, 0x02000 },           /* flash sector  3 - 8kb                       */
  //{ 0x08008000, 0x02000 },           /* flash sector  4 - 8kb                       */
  //{ 0x0800A000, 0x02000 },           /* flash sector  5 - 8kb                       */
  //{ 0x0800C000, 0x02000 },           /* flash sector  6 - 8kb                       */
  //{ 0x0800E000, 0x02000}             /* flash sector  7 - 8kb                       */
  //  { 0x08000000, 0x00400 },//8
  //  { 0x08000400, 0x00400 },
  //  { 0x08000800, 0x00400 },
  //  { 0x08000C00, 0x00400 },
  //  { 0x08001000, 0x00400 },
  //  { 0x08001400, 0x00400 },
  //  { 0x08001800, 0x00400 },
  //  { 0x08001C00, 0x00400 },
  //  { 0x08002000, 0x00400 },//8
  //  { 0x08002400, 0x00400 },
  //  { 0x08002800, 0x00400 },
  //  { 0x08002C00, 0x00400 },
  //  { 0x08003000, 0x00400 },
  //  { 0x08003400, 0x00400 },
  //  { 0x08003800, 0x00400 },
  //  { 0x08003C00, 0x00400 },
   { 0x08004000, 0x00400 }, //8
   { 0x08004400, 0x00400 },
   { 0x08004800, 0x00400 },
   { 0x08004C00, 0x00400 },
   { 0x08005000, 0x00400 },
   { 0x08005400, 0x00400 },
   { 0x08005800, 0x00400 },
   { 0x08005C00, 0x00400 },
   { 0x08006000, 0x00400 }, //8
   { 0x08006400, 0x00400 },
   { 0x08006800, 0x00400 },
   { 0x08006C00, 0x00400 },
   { 0x08007000, 0x00400 },
   { 0x08007400, 0x00400 },
   { 0x08007800, 0x00400 },
   { 0x08007C00, 0x00400 },
   { 0x08008000, 0x00400 },//8
   { 0x08008400, 0x00400 },
   { 0x08008800, 0x00400 },
   { 0x08008C00, 0x00400 },
   { 0x08009000, 0x00400 },
   { 0x08009400, 0x00400 },
   { 0x08009800, 0x00400 },
   { 0x08009C00, 0x00400 },
   { 0x0800A000, 0x00400 },//8
   { 0x0800A400, 0x00400 },
   { 0x0800A800, 0x00400 },
   { 0x0800AC00, 0x00400 },
   { 0x0800B000, 0x00400 },
   { 0x0800B400, 0x00400 },
   { 0x0800B800, 0x00400 },
   { 0x0800BC00, 0x00400 },
   { 0x0800C000, 0x00400 },//8
   { 0x0800C400, 0x00400 },
   { 0x0800C800, 0x00400 },
   { 0x0800CC00, 0x00400 },
   { 0x0800D000, 0x00400 },
   { 0x0800D400, 0x00400 },
   { 0x0800D800, 0x00400 },
   { 0x0800DC00, 0x00400 },
   { 0x0800E000, 0x00400 },//8
   { 0x0800E400, 0x00400 },
   { 0x0800E800, 0x00400 },
   { 0x0800EC00, 0x00400 },
   { 0x0800F000, 0x00400 },
   { 0x0800F400, 0x00400 },
   { 0x0800F800, 0x00400 },
   { 0x0800FC00, 0x00400 },
};


/*********************************** end of flash_layout.c *****************************/
