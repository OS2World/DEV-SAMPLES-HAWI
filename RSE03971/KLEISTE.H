/* $Header: Y:/Projekte/Redaktion SE/Knopfleiste/Source/rcs/KLEISTE.H 1.1 1996/12/29 13:49:41 HaWi Exp $ */

#ifdef __cplusplus
   extern "C" {
#endif

#ifndef _KLEISTE_H
   #define _KLEISTE_H

   #ifndef DB_RAISED
      #define DB_RAISED 0x0400
   #endif

   #ifndef DB_DEPRESSED
      #define DB_DEPRESSED 0x0800
   #endif

   #define KLEISTE_CLASSNAME "KLEISTE"

   #define WMPKLEISTE                (WM_USER + 1050)
   #define WMPKLEISTE_ACTIVATEBUTTON (WMPKLEISTE + 0)
   #define WMPKLEISTE_ENABLEBUTTON   (WMPKLEISTE + 1)
   #define WMPKLEISTE_INSERTDATA     (WMPKLEISTE + 2)
   #define WMPKLEISTE_QUERYHANDLE    (WMPKLEISTE + 3)
   #define WMPKLEISTE_REMOVEDATA     (WMPKLEISTE + 4)

   #define FID_KLEISTE 1

   typedef struct
      {
      ULONG ulOrder ;
      BOOL  fActive ;
      BOOL  fEnable ;
      ULONG ulBitmap ;
      ULONG ulCommand ;
      } KLEISTEITEM, *PKLEISTEITEM ;

   typedef struct _SUBCLASS
      {
      struct _SUBCLASS *psubclassNext ;
      BOOL             fActive ;
      BOOL             fTimer ;
      CHAR             sz [CCHMAXPATH] ;
      HAB              hab ;
      HWND             ahwnd [99] ;
      HWND             hwndSubclass ;
      HWND             hwndToolbar ;
      KLEISTEITEM      aitem [99] ;
      PFNWP            pfnwp ;
      ULONG            ulCount ;
      ULONG            ulHeight ;
      } SUBCLASS, *PSUBCLASS ;

   typedef struct
      {
      PFNWP pfnwp ;
      } WNDBUTTON, *PWNDBUTTON ;

   #ifndef _MSG_
      #define _MSG_
      typedef unsigned long MSG ;
   #endif

   BOOL EXPENTRY    KLeisteDeregister (HWND) ;
   BOOL EXPENTRY    KLeisteRegister (HWND) ;
   INT              KLeisteSort (const void*, const void*) ;
   MRESULT EXPENTRY SubclassWndProc (HWND, MSG, MPARAM, MPARAM) ;
   MRESULT EXPENTRY ToolbarWndProc (HWND, MSG, MPARAM, MPARAM) ;

   #define IDKLEISTE_LOW      0
   #define IDKLEISTE_2PAGES   (IDKLEISTE_LOW + 162)
   #define IDKLEISTE_4PAGES   (IDKLEISTE_LOW + 163)
   #define IDKLEISTE_ABOOK    (IDKLEISTE_LOW +   0)
   #define IDKLEISTE_ALNBLOCK (IDKLEISTE_LOW +  94)
   #define IDKLEISTE_ALNCNTR  (IDKLEISTE_LOW +  95)
   #define IDKLEISTE_ALNLEFT  (IDKLEISTE_LOW +  96)
   #define IDKLEISTE_ALNRIGHT (IDKLEISTE_LOW +  97)
   #define IDKLEISTE_ARRANGE  (IDKLEISTE_LOW + 156)
   #define IDKLEISTE_ARROWNE  (IDKLEISTE_LOW + 195)
   #define IDKLEISTE_ARROWNW  (IDKLEISTE_LOW + 196)
   #define IDKLEISTE_ARROWSE  (IDKLEISTE_LOW + 197)
   #define IDKLEISTE_ARROWSW  (IDKLEISTE_LOW + 198)
   #define IDKLEISTE_ASCEND   (IDKLEISTE_LOW + 166)
   #define IDKLEISTE_ATTACH   (IDKLEISTE_LOW +   1)
   #define IDKLEISTE_BLZ      (IDKLEISTE_LOW +   2)
   #define IDKLEISTE_BLZDEL   (IDKLEISTE_LOW +   3)
   #define IDKLEISTE_BOLD     (IDKLEISTE_LOW + 111)
   #define IDKLEISTE_BOOK     (IDKLEISTE_LOW + 108)
   #define IDKLEISTE_BOOKMARK (IDKLEISTE_LOW + 135)
   #define IDKLEISTE_BRIGHT   (IDKLEISTE_LOW +  84)
   #define IDKLEISTE_BRUSH    (IDKLEISTE_LOW +  86)
   #define IDKLEISTE_CALC     (IDKLEISTE_LOW +   4)
   #define IDKLEISTE_CALENDAR (IDKLEISTE_LOW +   5)
   #define IDKLEISTE_CAMERA   (IDKLEISTE_LOW +   6)
   #define IDKLEISTE_CD       (IDKLEISTE_LOW + 100)
   #define IDKLEISTE_CDPLAYER (IDKLEISTE_LOW + 101)
   #define IDKLEISTE_CFG      (IDKLEISTE_LOW +   7)
   #define IDKLEISTE_CFGABOOK (IDKLEISTE_LOW +   8)
   #define IDKLEISTE_CFGENTRY (IDKLEISTE_LOW +   9)
   #define IDKLEISTE_CFGPRINT (IDKLEISTE_LOW +  10)
   #define IDKLEISTE_CFGTEXT  (IDKLEISTE_LOW +  11)
   #define IDKLEISTE_CFGTOOL  (IDKLEISTE_LOW +  12)
   #define IDKLEISTE_CFGTOOLB (IDKLEISTE_LOW +  13)
   #define IDKLEISTE_CFGUI    (IDKLEISTE_LOW +  14)
   #define IDKLEISTE_CHECK    (IDKLEISTE_LOW +  15)
   #define IDKLEISTE_CHECKBOX (IDKLEISTE_LOW + 170)
   #define IDKLEISTE_CLIPBORD (IDKLEISTE_LOW + 109)
   #define IDKLEISTE_CLIPIN   (IDKLEISTE_LOW +  82)
   #define IDKLEISTE_CLIPOUT  (IDKLEISTE_LOW +  83)
   #define IDKLEISTE_CLOSE    (IDKLEISTE_LOW +  16)
   #define IDKLEISTE_CLOSEALL (IDKLEISTE_LOW +  17)
   #define IDKLEISTE_COLLECT  (IDKLEISTE_LOW + 202)
   #define IDKLEISTE_COLOR    (IDKLEISTE_LOW +  18)
   #define IDKLEISTE_COLS     (IDKLEISTE_LOW + 159)
   #define IDKLEISTE_COMBOBOX (IDKLEISTE_LOW + 172)
   #define IDKLEISTE_COMPASS  (IDKLEISTE_LOW + 110)
   #define IDKLEISTE_CONTACT  (IDKLEISTE_LOW +  19)
   #define IDKLEISTE_CONTRAST (IDKLEISTE_LOW +  85)
   #define IDKLEISTE_COPY     (IDKLEISTE_LOW +  20)
   #define IDKLEISTE_CORRECT1 (IDKLEISTE_LOW + 139)
   #define IDKLEISTE_CORRECT2 (IDKLEISTE_LOW + 140)
   #define IDKLEISTE_CROSS    (IDKLEISTE_LOW +  21)
   #define IDKLEISTE_CUT      (IDKLEISTE_LOW +  22)
   #define IDKLEISTE_DBCOL    (IDKLEISTE_LOW + 150)
   #define IDKLEISTE_DBCOLDEL (IDKLEISTE_LOW + 151)
   #define IDKLEISTE_DBCREATE (IDKLEISTE_LOW +  23)
   #define IDKLEISTE_DBDEL    (IDKLEISTE_LOW +  24)
   #define IDKLEISTE_DBINFO   (IDKLEISTE_LOW +  25)
   #define IDKLEISTE_DBREC    (IDKLEISTE_LOW + 152)
   #define IDKLEISTE_DBRECDEL (IDKLEISTE_LOW +  26)
   #define IDKLEISTE_DBREORG  (IDKLEISTE_LOW +  27)
   #define IDKLEISTE_DESCEND  (IDKLEISTE_LOW + 167)
   #define IDKLEISTE_DESKTOP  (IDKLEISTE_LOW +  98)
   #define IDKLEISTE_DGTLAUDI (IDKLEISTE_LOW + 102)
   #define IDKLEISTE_DIAL     (IDKLEISTE_LOW +  28)
   #define IDKLEISTE_DOCUMENT (IDKLEISTE_LOW +  29)
   #define IDKLEISTE_DOUBLE   (IDKLEISTE_LOW + 178)
   #define IDKLEISTE_DOUBLE2  (IDKLEISTE_LOW + 180)
   #define IDKLEISTE_DOUBLE3  (IDKLEISTE_LOW + 181)
   #define IDKLEISTE_DOUBLE4  (IDKLEISTE_LOW + 182)
   #define IDKLEISTE_DOWN     (IDKLEISTE_LOW +  30)
   #define IDKLEISTE_DOWN2    (IDKLEISTE_LOW + 189)
   #define IDKLEISTE_DOWNCASE (IDKLEISTE_LOW + 143)
   #define IDKLEISTE_DRIVE    (IDKLEISTE_LOW +  99)
   #define IDKLEISTE_EJECT    (IDKLEISTE_LOW + 116)
   #define IDKLEISTE_ENTER    (IDKLEISTE_LOW + 183)
   #define IDKLEISTE_EXIT     (IDKLEISTE_LOW +  31)
   #define IDKLEISTE_EXPORT   (IDKLEISTE_LOW +  32)
   #define IDKLEISTE_FETT     (IDKLEISTE_LOW +  89)
   #define IDKLEISTE_FIRST    (IDKLEISTE_LOW + 164)
   #define IDKLEISTE_FILTER   (IDKLEISTE_LOW +  33)
   #define IDKLEISTE_GROUPBOX (IDKLEISTE_LOW + 188)
   #define IDKLEISTE_HAND     (IDKLEISTE_LOW +  34)
   #define IDKLEISTE_HANGUP   (IDKLEISTE_LOW +  35)
   #define IDKLEISTE_HELP     (IDKLEISTE_LOW +  36)
   #define IDKLEISTE_HOME     (IDKLEISTE_LOW +  37)
   #define IDKLEISTE_HSCROLL  (IDKLEISTE_LOW + 185)
   #define IDKLEISTE_IDEA     (IDKLEISTE_LOW +  38)
   #define IDKLEISTE_IMPORT   (IDKLEISTE_LOW +  39)
   #define IDKLEISTE_INFO     (IDKLEISTE_LOW +  40)
   #define IDKLEISTE_INFO2    (IDKLEISTE_LOW + 199)
   #define IDKLEISTE_ITALIC   (IDKLEISTE_LOW + 112)
   #define IDKLEISTE_KURSIV   (IDKLEISTE_LOW +  90)
   #define IDKLEISTE_LAST     (IDKLEISTE_LOW + 165)
   #define IDKLEISTE_LEFT     (IDKLEISTE_LOW +  41)
   #define IDKLEISTE_LEFT2    (IDKLEISTE_LOW + 190)
   #define IDKLEISTE_LETTER   (IDKLEISTE_LOW + 173)
   #define IDKLEISTE_LINK     (IDKLEISTE_LOW + 136)
   #define IDKLEISTE_LISTBOX  (IDKLEISTE_LOW + 184)
   #define IDKLEISTE_LOAD     (IDKLEISTE_LOW +  42)
   #define IDKLEISTE_LOCATE   (IDKLEISTE_LOW + 113)
   #define IDKLEISTE_LOCK     (IDKLEISTE_LOW + 168)
   #define IDKLEISTE_LOOK     (IDKLEISTE_LOW + 137)
   #define IDKLEISTE_MANAGER  (IDKLEISTE_LOW + 174)
   #define IDKLEISTE_MENU     (IDKLEISTE_LOW + 186)
   #define IDKLEISTE_MERGE    (IDKLEISTE_LOW + 153)
   #define IDKLEISTE_MERGE2   (IDKLEISTE_LOW + 203) /* h�chster */
   #define IDKLEISTE_MESSAGE  (IDKLEISTE_LOW + 147)
   #define IDKLEISTE_MINUS    (IDKLEISTE_LOW + 176)
   #define IDKLEISTE_MUSTEK   (IDKLEISTE_LOW + 117)
   #define IDKLEISTE_NAVIGATR (IDKLEISTE_LOW + 138)
   #define IDKLEISTE_NEW      (IDKLEISTE_LOW +  43)
   #define IDKLEISTE_NEWSRDR  (IDKLEISTE_LOW + 118)
   #define IDKLEISTE_NO0      (IDKLEISTE_LOW +  44)
   #define IDKLEISTE_NO1      (IDKLEISTE_LOW +  45)
   #define IDKLEISTE_NO2      (IDKLEISTE_LOW + 119)
   #define IDKLEISTE_NO3      (IDKLEISTE_LOW + 120)
   #define IDKLEISTE_NO4      (IDKLEISTE_LOW + 121)
   #define IDKLEISTE_NOTE     (IDKLEISTE_LOW +  46)
   #define IDKLEISTE_ODBACK   (IDKLEISTE_LOW + 122)
   #define IDKLEISTE_ODCLOSE  (IDKLEISTE_LOW + 123)
   #define IDKLEISTE_ODMAX    (IDKLEISTE_LOW + 124)
   #define IDKLEISTE_ODMIN    (IDKLEISTE_LOW + 125)
   #define IDKLEISTE_ODROLLUP (IDKLEISTE_LOW + 126)
   #define IDKLEISTE_OL       (IDKLEISTE_LOW +  93)
   #define IDKLEISTE_OPEN     (IDKLEISTE_LOW + 148)
   #define IDKLEISTE_PACKAGE  (IDKLEISTE_LOW + 175)
   #define IDKLEISTE_PAGECHNG (IDKLEISTE_LOW + 158)
   #define IDKLEISTE_PAGEINS  (IDKLEISTE_LOW + 157)
   #define IDKLEISTE_PASTE    (IDKLEISTE_LOW +  47)
   #define IDKLEISTE_PAUSE    (IDKLEISTE_LOW + 127)
   #define IDKLEISTE_PCTVIEWR (IDKLEISTE_LOW + 103)
   #define IDKLEISTE_PENCIL   (IDKLEISTE_LOW +  48)
   #define IDKLEISTE_PERSON   (IDKLEISTE_LOW +  49)
   #define IDKLEISTE_PHONE    (IDKLEISTE_LOW +  50)
   #define IDKLEISTE_PING     (IDKLEISTE_LOW + 128)
   #define IDKLEISTE_PLAY     (IDKLEISTE_LOW + 114)
   #define IDKLEISTE_PLCEHLDR (IDKLEISTE_LOW +  51)
   #define IDKLEISTE_PLEFT    (IDKLEISTE_LOW +  52)
   #define IDKLEISTE_PLEFT2   (IDKLEISTE_LOW + 194)
   #define IDKLEISTE_PLUS     (IDKLEISTE_LOW + 177)
   #define IDKLEISTE_PLZ      (IDKLEISTE_LOW +  53)
   #define IDKLEISTE_PLZDEL   (IDKLEISTE_LOW +  54)
   #define IDKLEISTE_PREVIEW  (IDKLEISTE_LOW +  55)
   #define IDKLEISTE_PRIGHT   (IDKLEISTE_LOW +  56)
   #define IDKLEISTE_PRIGHT2  (IDKLEISTE_LOW + 193)
   #define IDKLEISTE_PRINT    (IDKLEISTE_LOW +  57)
   #define IDKLEISTE_PROGS    (IDKLEISTE_LOW +  58)
   #define IDKLEISTE_PULSE    (IDKLEISTE_LOW + 129)
   #define IDKLEISTE_PUSHBTN  (IDKLEISTE_LOW + 169)
   #define IDKLEISTE_RADIOBTN (IDKLEISTE_LOW + 171)
   #define IDKLEISTE_RAZOR    (IDKLEISTE_LOW +  88)
   #define IDKLEISTE_RECEIVE  (IDKLEISTE_LOW +  59)
   #define IDKLEISTE_REDO     (IDKLEISTE_LOW +  60)
   #define IDKLEISTE_REGISTER (IDKLEISTE_LOW +  61)
   #define IDKLEISTE_REMINDER (IDKLEISTE_LOW +  62)
   #define IDKLEISTE_REMOTE   (IDKLEISTE_LOW + 146)
   #define IDKLEISTE_REPEAT   (IDKLEISTE_LOW +  63)
   #define IDKLEISTE_RIGHT    (IDKLEISTE_LOW +  64)
   #define IDKLEISTE_RIGHT2   (IDKLEISTE_LOW + 191)
   #define IDKLEISTE_ROWS     (IDKLEISTE_LOW + 160)
   #define IDKLEISTE_RULER    (IDKLEISTE_LOW +  87)
   #define IDKLEISTE_RUN      (IDKLEISTE_LOW +  65)
   #define IDKLEISTE_SAVE     (IDKLEISTE_LOW +  66)
   #define IDKLEISTE_SAVEAS   (IDKLEISTE_LOW +  67)
   #define IDKLEISTE_SCANNER  (IDKLEISTE_LOW +  68)
   #define IDKLEISTE_SEEK     (IDKLEISTE_LOW + 130)
   #define IDKLEISTE_SELECT   (IDKLEISTE_LOW +  69)
   #define IDKLEISTE_SEND     (IDKLEISTE_LOW +  70)
   #define IDKLEISTE_SETUP    (IDKLEISTE_LOW + 200)
   #define IDKLEISTE_SHADOW   (IDKLEISTE_LOW + 131)
   #define IDKLEISTE_SHELF    (IDKLEISTE_LOW + 106)
   #define IDKLEISTE_SHREDDER (IDKLEISTE_LOW + 104)
   #define IDKLEISTE_SIZE     (IDKLEISTE_LOW + 132)
   #define IDKLEISTE_SPREADST (IDKLEISTE_LOW + 154)
   #define IDKLEISTE_STOP     (IDKLEISTE_LOW + 115)
   #define IDKLEISTE_STORE    (IDKLEISTE_LOW + 141)
   #define IDKLEISTE_TEACHING (IDKLEISTE_LOW + 107)
   #define IDKLEISTE_TEXT     (IDKLEISTE_LOW +  71)
   #define IDKLEISTE_TEXTCOLR (IDKLEISTE_LOW + 142)
   #define IDKLEISTE_TIMER    (IDKLEISTE_LOW + 179)
   #define IDKLEISTE_TOOL     (IDKLEISTE_LOW +  72)
   #define IDKLEISTE_TOOLS    (IDKLEISTE_LOW + 155)
   #define IDKLEISTE_TRANSFER (IDKLEISTE_LOW + 161)
   #define IDKLEISTE_TRASH    (IDKLEISTE_LOW +  73)
   #define IDKLEISTE_TYPES    (IDKLEISTE_LOW + 201)
   #define IDKLEISTE_UL       (IDKLEISTE_LOW +  92)
   #define IDKLEISTE_UNDERLNE (IDKLEISTE_LOW +  91)
   #define IDKLEISTE_UNDO     (IDKLEISTE_LOW +  74)
   #define IDKLEISTE_UP       (IDKLEISTE_LOW +  75)
   #define IDKLEISTE_UP2      (IDKLEISTE_LOW + 192)
   #define IDKLEISTE_UPCASE   (IDKLEISTE_LOW + 144)
   #define IDKLEISTE_VIEW     (IDKLEISTE_LOW +  76)
   #define IDKLEISTE_VSCROLL  (IDKLEISTE_LOW + 187)
   #define IDKLEISTE_WORLD    (IDKLEISTE_LOW + 105)
   #define IDKLEISTE_ZIP      (IDKLEISTE_LOW + 145)
   #define IDKLEISTE_ZOOM     (IDKLEISTE_LOW +  77)
   #define IDKLEISTE_ZOOMDOC  (IDKLEISTE_LOW + 134)
   #define IDKLEISTE_ZOOMFLDR (IDKLEISTE_LOW +  78)
   #define IDKLEISTE_ZOOMIN   (IDKLEISTE_LOW +  79)
   #define IDKLEISTE_ZOOMLDHR (IDKLEISTE_LOW +  80)
   #define IDKLEISTE_ZOOMOUT  (IDKLEISTE_LOW +  81)
   #define IDKLEISTE_ZOOMPERS (IDKLEISTE_LOW + 133)
   #define IDKLEISTE_ZOOMTEXT (IDKLEISTE_LOW + 149)
   #define IDKLEISTE_HIGH (IDKLEISTE_LOW + 203)

#endif /* _KLEISTE_H */

#ifdef __cplusplus
   }
#endif

