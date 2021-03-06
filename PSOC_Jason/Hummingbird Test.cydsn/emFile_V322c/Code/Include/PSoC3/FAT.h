/*********************************************************************
*                SEGGER MICROCONTROLLER GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 2003-2010     SEGGER Microcontroller GmbH & Co KG       *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

**** emFile file system for embedded applications ****
emFile is protected by international copyright laws. Knowledge of the
source code may not be used to write a similar product. This file may
only be used in accordance with a license and should not be re-
distributed in any way. We appreciate your understanding and fairness.
----------------------------------------------------------------------
File        : FAT.h
Purpose     : FAT File System Layer header
---------------------------END-OF-HEADER------------------------------
*/

#ifndef _FS_FAT_H_
#define _FS_FAT_H_

#include "FS_Int.h"

#if defined(__cplusplus)
extern "C" {     /* Make sure we have C-declarations in C++ programs */
#endif

/*********************************************************************
*
*       FAT_DiskInfo
*/
int  FS_FAT_GetDiskInfo   (FS_VOLUME xdata * pVolume, FS_DISK_INFO xdata * pDiskData, int Flags);
U32  FS_FAT_GetDiskSpace  (FS_VOLUME xdata * pVolume);
int  FS_FAT_GetVolumeLabel(FS_VOLUME xdata * pVolume, char * pVolumeLabel, unsigned VolumeLabelSize);
int  FS_FAT_SetVolumeLabel(FS_VOLUME xdata * pVolume, const char * pVolumeLabel);

/*********************************************************************
*
*       FAT_Read
*/

U16  FS_FAT_Read(FS_FILE xdata * pFile, void xdata * pData, U16 NumBytes);


/*********************************************************************
*
*       FAT_Write
*/
U16  FS_FAT_Write  (FS_FILE   xdata * pFile, const void * pData, U16 NumBytes);
void FS_FAT_Close  (FS_FILE   xdata * pFile);
void FS_FAT_Clean  (FS_VOLUME xdata * pVolume);


/*********************************************************************
*
*       FAT_Open
*/
char FS_FAT_Open   (const char * pFileName, FS_FILE xdata * pFile, char DoDel, char DoOpen, char DoCreate);

/*********************************************************************
*
*       FAT_Misc
*/
int  FS_FAT_CheckBPB            (FS_VOLUME xdata * pVolume);
int  FS_FAT_CreateJournalFile   (FS_VOLUME xdata * pVolume, U32 NumClusters, U32 * pFirstSector, U32 * pNumSectors);
int  FS_FAT_OpenJournalFile     (FS_VOLUME xdata * pVolume);
U32  FS_FAT_GetIndexOfLastSector(FS_VOLUME xdata * pVolume);

/*********************************************************************
*
*       FAT_Format
*/
int  FS_FAT_Format  (FS_VOLUME xdata * pVolume, FS_FORMAT_INFO    xdata * pFormatInfo);
int  FS_FAT_FormatEx(FS_VOLUME xdata * pVolume, FS_FORMAT_INFO_EX xdata * pFormatInfoEx);


/*********************************************************************
*
*       FAT_Move
*/
int   FS_FAT_Move(const char * sOldName, const char * sNewName, FS_VOLUME xdata * pVolume);


/*********************************************************************
*
*       FS_FAT_DirEntry
*
*/
char  FS_FAT_SetDirEntryInfo(FS_VOLUME xdata * pVolume, const char * sName, const void xdata * p, int Mask);
char  FS_FAT_GetDirEntryInfo(FS_VOLUME xdata * pVolume, const char * sName,       void xdata * p, int Mask);

/*********************************************************************
*
*       FAT_Rename
*/
int   FS_FAT_Rename(const char * sOldName, const char * sNewName, FS_VOLUME xdata * pVolume);

/*********************************************************************
*
*       FAT_Dir
*/
int   FS_FAT_OpenDir  (const char * pDirName, FS__DIR xdata * pDir);
int   FS_FAT_CloseDir (FS__DIR xdata * pDir);
int   FS_FAT_ReadDir  (FS__DIR xdata * pDir, FS_DIRENTRY_INFO xdata * pDirEntryInfo);
int   FS_FAT_RemoveDir(FS_VOLUME xdata * pVolume, const char * pDirName);
int   FS_FAT_CreateDir(FS_VOLUME xdata * pVolume, const char * pDirName);


/*********************************************************************
*
*       FAT_SetEndOfFile
*
*/
int FS_FAT_SetEndOfFile(FS_FILE xdata * pFile);

#if defined(__cplusplus)
}                /* Make sure we have C-declarations in C++ programs */
#endif

#endif  /* _FS_FAT_H_ */

/*************************** End of file ****************************/
