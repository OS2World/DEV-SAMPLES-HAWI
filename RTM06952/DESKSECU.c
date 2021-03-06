/*
 *  This file was generated by the SOM Compiler and Emitter Framework.
 *  Generated using: 
 *      SOM Emitter emitctm: 2.41
 */

#ifndef SOM_Module_desksecu_Source
#define SOM_Module_desksecu_Source
#endif
#define DeskSecu_Class_Source

#include "DESKSECU.ih"

/* Funktion wpFilterPopupMenu um ungewollte Direkteintr�ge auszuschlie�en */
SOM_Scope ULONG SOMLINK desksecu_wpFilterPopupMenu (DeskSecu* somSelf,
                                                    ULONG     ulFlags,
                                                    HWND      hwndCnr,
                                                    BOOL      fMultiSelect)
   {
   static const ULONG aul [] = { CTXT_SETTINGS } ;
   ULONG              ul ;
   ULONG              ulI ;

   /* Variable zur Aufnahme der geODERten Direkteintr�ge vorbesetzen */
   ul = 0 ;
   /* In einer Schleife alle Direkteintr�ge abarbeiten */
   for  (ulI = 0; ulI < sizeof (aul) / sizeof (aul [0]); ulI++)
        {
        /* geODERte Werte addieren */
        ul += aul [ulI] ;
        }
   /* Elternmethode um die ungew�nschten Eintr�ge reduzieren */
   return DeskSecu_parent_WPDesktop_wpFilterPopupMenu (somSelf,
                                                       ulFlags,
                                                       hwndCnr,
                                                       fMultiSelect) & ~ul ;
   }

/* Funktion wpModifyPopupMenu um ungewollte Eintr�ge im Nachhinein auszuschlie�en */
SOM_Scope BOOL SOMLINK desksecu_wpModifyPopupMenu (DeskSecu* somSelf,
                                                   HWND      hwndMenu,
                                                   HWND      hwndCnr,
                                                   ULONG     iPosition)
   {
   BOOL               f ;
   static const ULONG aul [] = { WPMENUID_ARRANGE,
                                 WPMENUID_CREATESHADOW,
                                 WPMENUID_FIND,
                                 WPMENUID_HELP,
                                 WPMENUID_EXTENDEDHELP,
                                 WPMENUID_HELPKEYS,
                                 WPMENUID_HOWTOGETHELP,
                                 WPMENUID_LOCKUP,
                                 WPMENUID_OPEN,
                                 714,
                                 WPMENUID_DETAILS,
                                 WPMENUID_ICON,
                                 WPMENUID_TREE,
                                 WPMENUID_REFRESH,
                                 WPMENUID_SELECT,
                                 WPMENUID_DESELALL,
                                 WPMENUID_SELALL,
                                 WPMENUID_SORT,
/*                               WPMENUID_SHUTDOWN, */
                                 WPMENUID_SYSTEMSETUP } ;
   ULONG              ulI ;

   /* Elternmethode aufrufen und R�ckgabewert merken */
   f = DeskSecu_parent_WPDesktop_wpModifyPopupMenu (somSelf,
                                                    hwndMenu,
                                                    hwndCnr,
                                                    iPosition) ;
   /* In einer Schleife alle Eintr�ge abarbeiten */
   for  (ulI = 0; ulI < sizeof (aul) / sizeof (aul [0]); ulI++)
        {
        /* Gefundene Eintr�ge hart aus dem Men� entfernen */
        WinSendMsg (hwndMenu,
                    MM_DELETEITEM,
                    MPFROM2SHORT (aul [ulI], TRUE),
                    MPVOID) ;
        }
   /* Jetzt erst den R�ckgabewert an das System zur�ckliefern */
   return f ;
   }
