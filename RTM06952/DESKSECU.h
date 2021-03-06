
/*
 * This file was generated by the SOM Compiler.
 * FileName: DESKSECU.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.2
 *     SOM Emitter emith: 2.41
 */

#ifndef SOM_DeskSecu_h
#define SOM_DeskSecu_h


#include <som.h>

/*
 * -- This emitter treats Method Tokens as Thunks by default.
 * -- Use the sc modifier "nothunks" to change this default
 */
#undef somresolve_
#define somresolve_(obj,mToken) ((somMethodProc*)((void)obj, mToken))

/*
 * Define the class name as an object type
 */
#ifndef DeskSecu
#define DeskSecu SOMObject
#endif
#include <wpdesk.h>

/*
 * Start of user-defined types:
 */
#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef WPFolder
    #define WPFolder SOMObject
#endif /* WPFolder */
#ifndef M_WPObject
    #define M_WPObject SOMObject
#endif /* M_WPObject */
#ifndef WPObject
    #define WPObject SOMObject
#endif /* WPObject */
#ifndef M_WPFileSystem
    #define M_WPFileSystem SOMObject
#endif /* M_WPFileSystem */
#ifndef M_WPFolder
    #define M_WPFolder SOMObject
#endif /* M_WPFolder */
#ifndef M_WPDesktop
    #define M_WPDesktop SOMObject
#endif /* M_WPDesktop */

/*
 * End of user-defined types.
 */

#define DeskSecu_MajorVersion 1
#define DeskSecu_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define DeskSecuNewClass desksecuc
#pragma linkage(desksecuc, system)
#define DeskSecuClassData desksecud
#define DeskSecuCClassData desksecux
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define DeskSecu_classObj DeskSecuClassData.classObject
#define _DeskSecu DeskSecu_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK DeskSecuNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(DeskSecuNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct DeskSecuClassDataStructure {
	SOMAny *classObject;
} SOMDLINK DeskSecuClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct DeskSecuCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK DeskSecuCClassData;

/*
 * New and Renew macros for DeskSecu
 */
#define DeskSecuNew() \
   (_somNew(_DeskSecu ? _DeskSecu : DeskSecuNewClass(DeskSecu_MajorVersion, DeskSecu_MinorVersion)))
#define DeskSecuRenew(buf) \
   (_somRenew(_DeskSecu ? _DeskSecu : DeskSecuNewClass(DeskSecu_MajorVersion, DeskSecu_MinorVersion), buf))

/*
 * Override method: wpFilterPopupMenu
 */
#define DeskSecu_wpFilterPopupMenu(somSelf,ulFlags,hwndCnr,fMultiSelect) \
	WPObject_wpFilterPopupMenu(somSelf,ulFlags,hwndCnr,fMultiSelect)

/*
 * Override method: wpModifyPopupMenu
 */
#define DeskSecu_wpModifyPopupMenu(somSelf,hwndMenu,hwndCnr,iPosition) \
	WPObject_wpModifyPopupMenu(somSelf,hwndMenu,hwndCnr,iPosition)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define DeskSecu_wpIsCurrentDesktop WPDesktop_wpIsCurrentDesktop
#define DeskSecu_wpAddDesktopLockup1Page WPDesktop_wpAddDesktopLockup1Page
#define DeskSecu_wpAddDesktopLockup2Page WPDesktop_wpAddDesktopLockup2Page
#define DeskSecu_wpAddDesktopLockup3Page WPDesktop_wpAddDesktopLockup3Page
#define DeskSecu_wpAddDesktopArcRest1Page WPDesktop_wpAddDesktopArcRest1Page
#define DeskSecu_wpAddDesktopDefDT1Page WPDesktop_wpAddDesktopDefDT1Page
#define DeskSecu_wpSetFldrFlags WPFolder_wpSetFldrFlags
#define DeskSecu_wpQueryFldrFlags WPFolder_wpQueryFldrFlags
#define DeskSecu_wpSetFldrFont WPFolder_wpSetFldrFont
#define DeskSecu_wpQueryFldrFont WPFolder_wpQueryFldrFont
#define DeskSecu_wpSetFldrAttr WPFolder_wpSetFldrAttr
#define DeskSecu_wpQueryFldrAttr WPFolder_wpQueryFldrAttr
#define DeskSecu_wpSetNextIconPos WPFolder_wpSetNextIconPos
#define DeskSecu_wpQueryNextIconPos WPFolder_wpQueryNextIconPos
#define DeskSecu_wpPopulate WPFolder_wpPopulate
#define DeskSecu_wpQueryContent WPFolder_wpQueryContent
#define DeskSecu_wpAddFolderView1Page WPFolder_wpAddFolderView1Page
#define DeskSecu_wpAddFolderView2Page WPFolder_wpAddFolderView2Page
#define DeskSecu_wpAddFolderView3Page WPFolder_wpAddFolderView3Page
#define DeskSecu_wpAddFolderIncludePage WPFolder_wpAddFolderIncludePage
#define DeskSecu_wpAddFolderSortPage WPFolder_wpAddFolderSortPage
#define DeskSecu_wpAddFolderBackgroundPage WPFolder_wpAddFolderBackgroundPage
#define DeskSecu_wpAddFolderSelfClosePage WPFolder_wpAddFolderSelfClosePage
#define DeskSecu_wpInitIconPosData WPFolder_wpInitIconPosData
#define DeskSecu_wpFreeIconPosData WPFolder_wpFreeIconPosData
#define DeskSecu_wpStoreIconPosData WPFolder_wpStoreIconPosData
#define DeskSecu_wpQueryIconPosition WPFolder_wpQueryIconPosition
#define DeskSecu_wpSetFldrSort WPFolder_wpSetFldrSort
#define DeskSecu_wpQueryFldrSort WPFolder_wpQueryFldrSort
#define DeskSecu_wpRestoreFldrRunObjs WPFolder_wpRestoreFldrRunObjs
#define DeskSecu_wpStoreFldrRunObjs WPFolder_wpStoreFldrRunObjs
#define DeskSecu_wpHideFldrRunObjs WPFolder_wpHideFldrRunObjs
#define DeskSecu_wpDeleteContents WPFolder_wpDeleteContents
#define DeskSecu_wpSetFldrDetailsClass WPFolder_wpSetFldrDetailsClass
#define DeskSecu_wpQueryFldrDetailsClass WPFolder_wpQueryFldrDetailsClass
#define DeskSecu_wpSearchFolder WPFolder_wpSearchFolder
#define DeskSecu_wpContainsFolders WPFolder_wpContainsFolders
#define DeskSecu_wpQueryOpenFolders WPFolder_wpQueryOpenFolders
#define DeskSecu_wpModifyFldrFlags WPFolder_wpModifyFldrFlags
#define DeskSecu_wpAddToContent WPFolder_wpAddToContent
#define DeskSecu_wpDeleteFromContent WPFolder_wpDeleteFromContent
#define DeskSecu_wpSetDetailsColumnVisibility WPFolder_wpSetDetailsColumnVisibility
#define DeskSecu_wpIsDetailsColumnVisible WPFolder_wpIsDetailsColumnVisible
#define DeskSecu_wpSetFldrSortClass WPFolder_wpSetFldrSortClass
#define DeskSecu_wpQueryFldrSortClass WPFolder_wpQueryFldrSortClass
#define DeskSecu_wpSetSortAttribAvailable WPFolder_wpSetSortAttribAvailable
#define DeskSecu_wpIsSortAttribAvailable WPFolder_wpIsSortAttribAvailable
#define DeskSecu_wpQueryIconViewPos WPFolder_wpQueryIconViewPos
#define DeskSecu_wpAddFirstChild WPFolder_wpAddFirstChild
#define DeskSecu_wpSetRealName WPFileSystem_wpSetRealName
#define DeskSecu_wpSetType WPFileSystem_wpSetType
#define DeskSecu_wpQueryType WPFileSystem_wpQueryType
#define DeskSecu_wpSetAttr WPFileSystem_wpSetAttr
#define DeskSecu_wpQueryAttr WPFileSystem_wpQueryAttr
#define DeskSecu_wpAddFile1Page WPFileSystem_wpAddFile1Page
#define DeskSecu_wpAddFile2Page WPFileSystem_wpAddFile2Page
#define DeskSecu_wpAddFile3Page WPFileSystem_wpAddFile3Page
#define DeskSecu_wpAddFileMenuPage WPFileSystem_wpAddFileMenuPage
#define DeskSecu_wpQueryCreation WPFileSystem_wpQueryCreation
#define DeskSecu_wpQueryLastAccess WPFileSystem_wpQueryLastAccess
#define DeskSecu_wpQueryLastWrite WPFileSystem_wpQueryLastWrite
#define DeskSecu_wpQueryFileSize WPFileSystem_wpQueryFileSize
#define DeskSecu_wpQueryEASize WPFileSystem_wpQueryEASize
#define DeskSecu_wpSetDateInfo WPFileSystem_wpSetDateInfo
#define DeskSecu_wpSetFileSizeInfo WPFileSystem_wpSetFileSizeInfo
#define DeskSecu_wpRefresh WPFileSystem_wpRefresh
#define DeskSecu_wpQueryRefreshFlags WPFileSystem_wpQueryRefreshFlags
#define DeskSecu_wpSetRefreshFlags WPFileSystem_wpSetRefreshFlags
#define DeskSecu_wpPrintPlainTextFile WPFileSystem_wpPrintPlainTextFile
#define DeskSecu_wpSetTitleAndRenameFile WPFileSystem_wpSetTitleAndRenameFile
#define DeskSecu_wpConfirmRenameFileWithExt WPFileSystem_wpConfirmRenameFileWithExt
#define DeskSecu_wpVerifyUpdateAccess WPFileSystem_wpVerifyUpdateAccess
#define DeskSecu_wpAddUserItemsToPopupMenu WPFileSystem_wpAddUserItemsToPopupMenu
#define DeskSecu_wpIsDiskSwapped WPFileSystem_wpIsDiskSwapped
#define DeskSecu_wpQueryRealName WPFileSystem_wpQueryRealName
#define DeskSecu_wpQueryFilename WPFileSystem_wpQueryFilename
#define DeskSecu_wpQueryDisk WPFileSystem_wpQueryDisk
#define DeskSecu_wpQueryDateInfo WPFileSystem_wpQueryDateInfo
#define DeskSecu_wpConfirmKeepAssoc WPFileSystem_wpConfirmKeepAssoc
#define DeskSecu_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define DeskSecu_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define DeskSecu_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define DeskSecu_wpAddSettingsPages WPObject_wpAddSettingsPages
#define DeskSecu_wpAddToObjUseList WPObject_wpAddToObjUseList
#define DeskSecu_wpAllocMem WPObject_wpAllocMem
#define DeskSecu_wpAppendObject WPObject_wpAppendObject
#define DeskSecu_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define DeskSecu_wpClose WPObject_wpClose
#define DeskSecu_wpCnrInsertObject WPObject_wpCnrInsertObject
#define DeskSecu_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define DeskSecu_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define DeskSecu_wpConfirmDelete WPObject_wpConfirmDelete
#define DeskSecu_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define DeskSecu_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define DeskSecu_wpCopyObject WPObject_wpCopyObject
#define DeskSecu_wpCreateAnother WPObject_wpCreateAnother
#define DeskSecu_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define DeskSecu_wpCreateShadowObject WPObject_wpCreateShadowObject
#define DeskSecu_wpDelete WPObject_wpDelete
#define DeskSecu_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define DeskSecu_wpDisplayHelp WPObject_wpDisplayHelp
#define DeskSecu_wpDisplayMenu WPObject_wpDisplayMenu
#define DeskSecu_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define DeskSecu_wpDraggedOverObject WPObject_wpDraggedOverObject
#define DeskSecu_wpDragOver WPObject_wpDragOver
#define DeskSecu_wpDrop WPObject_wpDrop
#define DeskSecu_wpDroppedOnObject WPObject_wpDroppedOnObject
#define DeskSecu_wpEndConversation WPObject_wpEndConversation
#define DeskSecu_wpFindUseItem WPObject_wpFindUseItem
#define DeskSecu_wpFormatDragItem WPObject_wpFormatDragItem
#define DeskSecu_wpFree WPObject_wpFree
#define DeskSecu_wpFreeMem WPObject_wpFreeMem
#define DeskSecu_wpHide WPObject_wpHide
#define DeskSecu_wpInitData WPObject_wpInitData
#define DeskSecu_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define DeskSecu_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define DeskSecu_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define DeskSecu_wpMenuItemSelected WPObject_wpMenuItemSelected
#define DeskSecu_wpMoveObject WPObject_wpMoveObject
#define DeskSecu_wpOpen WPObject_wpOpen
#define DeskSecu_wpPrintObject WPObject_wpPrintObject
#define DeskSecu_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define DeskSecu_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define DeskSecu_wpQueryConfirmations WPObject_wpQueryConfirmations
#define DeskSecu_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define DeskSecu_wpQueryDefaultView WPObject_wpQueryDefaultView
#define DeskSecu_wpQueryDetailsData WPObject_wpQueryDetailsData
#define DeskSecu_wpQueryError WPObject_wpQueryError
#define DeskSecu_wpSetFolder WPObject_wpSetFolder
#define DeskSecu_wpQueryFolder WPObject_wpQueryFolder
#define DeskSecu_wpQueryIcon WPObject_wpQueryIcon
#define DeskSecu_wpQueryIconData WPObject_wpQueryIconData
#define DeskSecu_wpQueryMinWindow WPObject_wpQueryMinWindow
#define DeskSecu_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define DeskSecu_wpQueryStyle WPObject_wpQueryStyle
#define DeskSecu_wpSetTaskRec WPObject_wpSetTaskRec
#define DeskSecu_wpFindTaskRec WPObject_wpFindTaskRec
#define DeskSecu_wpQueryTitle WPObject_wpQueryTitle
#define DeskSecu_wpRegisterView WPObject_wpRegisterView
#define DeskSecu_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define DeskSecu_wpRender WPObject_wpRender
#define DeskSecu_wpRenderComplete WPObject_wpRenderComplete
#define DeskSecu_wpReplaceObject WPObject_wpReplaceObject
#define DeskSecu_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define DeskSecu_wpRestore WPObject_wpRestore
#define DeskSecu_wpRestoreData WPObject_wpRestoreData
#define DeskSecu_wpRestoreLong WPObject_wpRestoreLong
#define DeskSecu_wpRestoreState WPObject_wpRestoreState
#define DeskSecu_wpRestoreString WPObject_wpRestoreString
#define DeskSecu_wpSaveData WPObject_wpSaveData
#define DeskSecu_wpSaveImmediate WPObject_wpSaveImmediate
#define DeskSecu_wpSaveDeferred WPObject_wpSaveDeferred
#define DeskSecu_wpSaveLong WPObject_wpSaveLong
#define DeskSecu_wpSaveState WPObject_wpSaveState
#define DeskSecu_wpSaveString WPObject_wpSaveString
#define DeskSecu_wpScanSetupString WPObject_wpScanSetupString
#define DeskSecu_wpSetConcurrentView WPObject_wpSetConcurrentView
#define DeskSecu_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define DeskSecu_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define DeskSecu_wpSetDefaultView WPObject_wpSetDefaultView
#define DeskSecu_wpSetError WPObject_wpSetError
#define DeskSecu_wpSetIconHandle WPObject_wpSetIconHandle
#define DeskSecu_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define DeskSecu_wpSetupOnce WPObject_wpSetupOnce
#define DeskSecu_wpSetIcon WPObject_wpSetIcon
#define DeskSecu_wpSetIconData WPObject_wpSetIconData
#define DeskSecu_wpSetMinWindow WPObject_wpSetMinWindow
#define DeskSecu_wpSetStyle WPObject_wpSetStyle
#define DeskSecu_wpModifyStyle WPObject_wpModifyStyle
#define DeskSecu_wpSetTitle WPObject_wpSetTitle
#define DeskSecu_wpSetup WPObject_wpSetup
#define DeskSecu_wpSwitchTo WPObject_wpSwitchTo
#define DeskSecu_wpUnInitData WPObject_wpUnInitData
#define DeskSecu_wpViewObject WPObject_wpViewObject
#define DeskSecu_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define DeskSecu_wpQueryHandle WPObject_wpQueryHandle
#define DeskSecu_wpUnlockObject WPObject_wpUnlockObject
#define DeskSecu_wpObjectReady WPObject_wpObjectReady
#define DeskSecu_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define DeskSecu_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define DeskSecu_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define DeskSecu_wpIsDeleteable WPObject_wpIsDeleteable
#define DeskSecu_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define DeskSecu_wpSetObjectID WPObject_wpSetObjectID
#define DeskSecu_wpQueryObjectID WPObject_wpQueryObjectID
#define DeskSecu_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define DeskSecu_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define DeskSecu_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define DeskSecu_wpFindViewItem WPObject_wpFindViewItem
#define DeskSecu_wpLockObject WPObject_wpLockObject
#define DeskSecu_wpIsLocked WPObject_wpIsLocked
#define DeskSecu_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define DeskSecu_wpWaitForClose WPObject_wpWaitForClose
#define DeskSecu_somDefaultInit SOMObject_somDefaultInit
#define DeskSecu_somDestruct SOMObject_somDestruct
#define DeskSecu_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define DeskSecu_somDefaultAssign SOMObject_somDefaultAssign
#define DeskSecu_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define DeskSecu_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define DeskSecu_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define DeskSecu_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define DeskSecu_somDefaultVAssign SOMObject_somDefaultVAssign
#define DeskSecu_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define DeskSecu_somInit SOMObject_somInit
#define DeskSecu_somFree SOMObject_somFree
#define DeskSecu_somUninit SOMObject_somUninit
#define DeskSecu_somGetClass SOMObject_somGetClass
#define DeskSecu_somGetClassName SOMObject_somGetClassName
#define DeskSecu_somGetSize SOMObject_somGetSize
#define DeskSecu_somIsA SOMObject_somIsA
#define DeskSecu_somIsInstanceOf SOMObject_somIsInstanceOf
#define DeskSecu_somRespondsTo SOMObject_somRespondsTo
#define DeskSecu_somDispatch SOMObject_somDispatch
#define DeskSecu_somClassDispatch SOMObject_somClassDispatch
#define DeskSecu_somCastObj SOMObject_somCastObj
#define DeskSecu_somResetObj SOMObject_somResetObj
#define DeskSecu_somDispatchV SOMObject_somDispatchV
#define DeskSecu_somDispatchL SOMObject_somDispatchL
#define DeskSecu_somDispatchA SOMObject_somDispatchA
#define DeskSecu_somDispatchD SOMObject_somDispatchD
#define DeskSecu_somPrintSelf SOMObject_somPrintSelf
#define DeskSecu_somDumpSelf SOMObject_somDumpSelf
#define DeskSecu_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_DeskSecu_h */
