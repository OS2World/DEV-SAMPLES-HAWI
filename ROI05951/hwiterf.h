
/*
 * This file was generated by the SOM Compiler.
 * FileName: HWITERF.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.2
 *     SOM Emitter emith: 2.41
 */

#ifndef SOM_HWITerF_h
#define SOM_HWITerF_h


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
#ifndef HWITerF
#define HWITerF SOMObject
#endif
#include <wpfolder.h>

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
#ifndef M_HWITerF
    #define M_HWITerF SOMObject
#endif /* M_HWITerF */

/*
 * End of user-defined types.
 */

#define HWITerF_MajorVersion 1
#define HWITerF_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define HWITerFNewClass hwiterfc
#pragma linkage(hwiterfc, system)
#define HWITerFClassData hwiterfd
#define HWITerFCClassData hwiterfx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <HWITERF.h>
/*--------------Migration------------*/
#define HWITerF_classObj HWITerFClassData.classObject
#define _HWITerF HWITerF_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK HWITerFNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(HWITerFNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct HWITerFClassDataStructure {
	SOMAny *classObject;
} SOMDLINK HWITerFClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct HWITerFCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK HWITerFCClassData;

/*
 * New and Renew macros for HWITerF
 */
#define HWITerFNew() \
   (_somNew(_HWITerF ? _HWITerF : HWITerFNewClass(HWITerF_MajorVersion, HWITerF_MinorVersion)))
#define HWITerFRenew(buf) \
   (_somRenew(_HWITerF ? _HWITerF : HWITerFNewClass(HWITerF_MajorVersion, HWITerF_MinorVersion), buf))

/*
 * Override method: wpDragOver
 */
#define HWITerF_wpDragOver(somSelf,hwndCnr,pdrgInfo) \
	WPObject_wpDragOver(somSelf,hwndCnr,pdrgInfo)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define HWITerF_wpSetFldrFlags WPFolder_wpSetFldrFlags
#define HWITerF_wpQueryFldrFlags WPFolder_wpQueryFldrFlags
#define HWITerF_wpSetFldrFont WPFolder_wpSetFldrFont
#define HWITerF_wpQueryFldrFont WPFolder_wpQueryFldrFont
#define HWITerF_wpSetFldrAttr WPFolder_wpSetFldrAttr
#define HWITerF_wpQueryFldrAttr WPFolder_wpQueryFldrAttr
#define HWITerF_wpSetNextIconPos WPFolder_wpSetNextIconPos
#define HWITerF_wpQueryNextIconPos WPFolder_wpQueryNextIconPos
#define HWITerF_wpPopulate WPFolder_wpPopulate
#define HWITerF_wpQueryContent WPFolder_wpQueryContent
#define HWITerF_wpAddFolderView1Page WPFolder_wpAddFolderView1Page
#define HWITerF_wpAddFolderView2Page WPFolder_wpAddFolderView2Page
#define HWITerF_wpAddFolderView3Page WPFolder_wpAddFolderView3Page
#define HWITerF_wpAddFolderIncludePage WPFolder_wpAddFolderIncludePage
#define HWITerF_wpAddFolderSortPage WPFolder_wpAddFolderSortPage
#define HWITerF_wpAddFolderBackgroundPage WPFolder_wpAddFolderBackgroundPage
#define HWITerF_wpAddFolderSelfClosePage WPFolder_wpAddFolderSelfClosePage
#define HWITerF_wpInitIconPosData WPFolder_wpInitIconPosData
#define HWITerF_wpFreeIconPosData WPFolder_wpFreeIconPosData
#define HWITerF_wpStoreIconPosData WPFolder_wpStoreIconPosData
#define HWITerF_wpQueryIconPosition WPFolder_wpQueryIconPosition
#define HWITerF_wpSetFldrSort WPFolder_wpSetFldrSort
#define HWITerF_wpQueryFldrSort WPFolder_wpQueryFldrSort
#define HWITerF_wpRestoreFldrRunObjs WPFolder_wpRestoreFldrRunObjs
#define HWITerF_wpStoreFldrRunObjs WPFolder_wpStoreFldrRunObjs
#define HWITerF_wpHideFldrRunObjs WPFolder_wpHideFldrRunObjs
#define HWITerF_wpDeleteContents WPFolder_wpDeleteContents
#define HWITerF_wpSetFldrDetailsClass WPFolder_wpSetFldrDetailsClass
#define HWITerF_wpQueryFldrDetailsClass WPFolder_wpQueryFldrDetailsClass
#define HWITerF_wpSearchFolder WPFolder_wpSearchFolder
#define HWITerF_wpContainsFolders WPFolder_wpContainsFolders
#define HWITerF_wpQueryOpenFolders WPFolder_wpQueryOpenFolders
#define HWITerF_wpModifyFldrFlags WPFolder_wpModifyFldrFlags
#define HWITerF_wpAddToContent WPFolder_wpAddToContent
#define HWITerF_wpDeleteFromContent WPFolder_wpDeleteFromContent
#define HWITerF_wpSetDetailsColumnVisibility WPFolder_wpSetDetailsColumnVisibility
#define HWITerF_wpIsDetailsColumnVisible WPFolder_wpIsDetailsColumnVisible
#define HWITerF_wpSetFldrSortClass WPFolder_wpSetFldrSortClass
#define HWITerF_wpQueryFldrSortClass WPFolder_wpQueryFldrSortClass
#define HWITerF_wpSetSortAttribAvailable WPFolder_wpSetSortAttribAvailable
#define HWITerF_wpIsSortAttribAvailable WPFolder_wpIsSortAttribAvailable
#define HWITerF_wpQueryIconViewPos WPFolder_wpQueryIconViewPos
#define HWITerF_wpAddFirstChild WPFolder_wpAddFirstChild
#define HWITerF_wpSetRealName WPFileSystem_wpSetRealName
#define HWITerF_wpSetType WPFileSystem_wpSetType
#define HWITerF_wpQueryType WPFileSystem_wpQueryType
#define HWITerF_wpSetAttr WPFileSystem_wpSetAttr
#define HWITerF_wpQueryAttr WPFileSystem_wpQueryAttr
#define HWITerF_wpAddFile1Page WPFileSystem_wpAddFile1Page
#define HWITerF_wpAddFile2Page WPFileSystem_wpAddFile2Page
#define HWITerF_wpAddFile3Page WPFileSystem_wpAddFile3Page
#define HWITerF_wpAddFileMenuPage WPFileSystem_wpAddFileMenuPage
#define HWITerF_wpQueryCreation WPFileSystem_wpQueryCreation
#define HWITerF_wpQueryLastAccess WPFileSystem_wpQueryLastAccess
#define HWITerF_wpQueryLastWrite WPFileSystem_wpQueryLastWrite
#define HWITerF_wpQueryFileSize WPFileSystem_wpQueryFileSize
#define HWITerF_wpQueryEASize WPFileSystem_wpQueryEASize
#define HWITerF_wpSetDateInfo WPFileSystem_wpSetDateInfo
#define HWITerF_wpSetFileSizeInfo WPFileSystem_wpSetFileSizeInfo
#define HWITerF_wpRefresh WPFileSystem_wpRefresh
#define HWITerF_wpQueryRefreshFlags WPFileSystem_wpQueryRefreshFlags
#define HWITerF_wpSetRefreshFlags WPFileSystem_wpSetRefreshFlags
#define HWITerF_wpPrintPlainTextFile WPFileSystem_wpPrintPlainTextFile
#define HWITerF_wpSetTitleAndRenameFile WPFileSystem_wpSetTitleAndRenameFile
#define HWITerF_wpConfirmRenameFileWithExt WPFileSystem_wpConfirmRenameFileWithExt
#define HWITerF_wpVerifyUpdateAccess WPFileSystem_wpVerifyUpdateAccess
#define HWITerF_wpAddUserItemsToPopupMenu WPFileSystem_wpAddUserItemsToPopupMenu
#define HWITerF_wpIsDiskSwapped WPFileSystem_wpIsDiskSwapped
#define HWITerF_wpQueryRealName WPFileSystem_wpQueryRealName
#define HWITerF_wpQueryFilename WPFileSystem_wpQueryFilename
#define HWITerF_wpQueryDisk WPFileSystem_wpQueryDisk
#define HWITerF_wpQueryDateInfo WPFileSystem_wpQueryDateInfo
#define HWITerF_wpConfirmKeepAssoc WPFileSystem_wpConfirmKeepAssoc
#define HWITerF_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define HWITerF_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define HWITerF_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define HWITerF_wpAddSettingsPages WPObject_wpAddSettingsPages
#define HWITerF_wpAddToObjUseList WPObject_wpAddToObjUseList
#define HWITerF_wpAllocMem WPObject_wpAllocMem
#define HWITerF_wpAppendObject WPObject_wpAppendObject
#define HWITerF_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define HWITerF_wpClose WPObject_wpClose
#define HWITerF_wpCnrInsertObject WPObject_wpCnrInsertObject
#define HWITerF_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define HWITerF_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define HWITerF_wpConfirmDelete WPObject_wpConfirmDelete
#define HWITerF_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define HWITerF_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define HWITerF_wpCopyObject WPObject_wpCopyObject
#define HWITerF_wpCreateAnother WPObject_wpCreateAnother
#define HWITerF_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define HWITerF_wpCreateShadowObject WPObject_wpCreateShadowObject
#define HWITerF_wpDelete WPObject_wpDelete
#define HWITerF_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define HWITerF_wpDisplayHelp WPObject_wpDisplayHelp
#define HWITerF_wpDisplayMenu WPObject_wpDisplayMenu
#define HWITerF_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define HWITerF_wpDraggedOverObject WPObject_wpDraggedOverObject
#define HWITerF_wpDrop WPObject_wpDrop
#define HWITerF_wpDroppedOnObject WPObject_wpDroppedOnObject
#define HWITerF_wpEndConversation WPObject_wpEndConversation
#define HWITerF_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define HWITerF_wpFindUseItem WPObject_wpFindUseItem
#define HWITerF_wpFormatDragItem WPObject_wpFormatDragItem
#define HWITerF_wpFree WPObject_wpFree
#define HWITerF_wpFreeMem WPObject_wpFreeMem
#define HWITerF_wpHide WPObject_wpHide
#define HWITerF_wpInitData WPObject_wpInitData
#define HWITerF_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define HWITerF_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define HWITerF_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define HWITerF_wpMenuItemSelected WPObject_wpMenuItemSelected
#define HWITerF_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define HWITerF_wpMoveObject WPObject_wpMoveObject
#define HWITerF_wpOpen WPObject_wpOpen
#define HWITerF_wpPrintObject WPObject_wpPrintObject
#define HWITerF_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define HWITerF_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define HWITerF_wpQueryConfirmations WPObject_wpQueryConfirmations
#define HWITerF_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define HWITerF_wpQueryDefaultView WPObject_wpQueryDefaultView
#define HWITerF_wpQueryDetailsData WPObject_wpQueryDetailsData
#define HWITerF_wpQueryError WPObject_wpQueryError
#define HWITerF_wpSetFolder WPObject_wpSetFolder
#define HWITerF_wpQueryFolder WPObject_wpQueryFolder
#define HWITerF_wpQueryIcon WPObject_wpQueryIcon
#define HWITerF_wpQueryIconData WPObject_wpQueryIconData
#define HWITerF_wpQueryMinWindow WPObject_wpQueryMinWindow
#define HWITerF_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define HWITerF_wpQueryStyle WPObject_wpQueryStyle
#define HWITerF_wpSetTaskRec WPObject_wpSetTaskRec
#define HWITerF_wpFindTaskRec WPObject_wpFindTaskRec
#define HWITerF_wpQueryTitle WPObject_wpQueryTitle
#define HWITerF_wpRegisterView WPObject_wpRegisterView
#define HWITerF_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define HWITerF_wpRender WPObject_wpRender
#define HWITerF_wpRenderComplete WPObject_wpRenderComplete
#define HWITerF_wpReplaceObject WPObject_wpReplaceObject
#define HWITerF_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define HWITerF_wpRestore WPObject_wpRestore
#define HWITerF_wpRestoreData WPObject_wpRestoreData
#define HWITerF_wpRestoreLong WPObject_wpRestoreLong
#define HWITerF_wpRestoreState WPObject_wpRestoreState
#define HWITerF_wpRestoreString WPObject_wpRestoreString
#define HWITerF_wpSaveData WPObject_wpSaveData
#define HWITerF_wpSaveImmediate WPObject_wpSaveImmediate
#define HWITerF_wpSaveDeferred WPObject_wpSaveDeferred
#define HWITerF_wpSaveLong WPObject_wpSaveLong
#define HWITerF_wpSaveState WPObject_wpSaveState
#define HWITerF_wpSaveString WPObject_wpSaveString
#define HWITerF_wpScanSetupString WPObject_wpScanSetupString
#define HWITerF_wpSetConcurrentView WPObject_wpSetConcurrentView
#define HWITerF_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define HWITerF_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define HWITerF_wpSetDefaultView WPObject_wpSetDefaultView
#define HWITerF_wpSetError WPObject_wpSetError
#define HWITerF_wpSetIconHandle WPObject_wpSetIconHandle
#define HWITerF_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define HWITerF_wpSetupOnce WPObject_wpSetupOnce
#define HWITerF_wpSetIcon WPObject_wpSetIcon
#define HWITerF_wpSetIconData WPObject_wpSetIconData
#define HWITerF_wpSetMinWindow WPObject_wpSetMinWindow
#define HWITerF_wpSetStyle WPObject_wpSetStyle
#define HWITerF_wpModifyStyle WPObject_wpModifyStyle
#define HWITerF_wpSetTitle WPObject_wpSetTitle
#define HWITerF_wpSetup WPObject_wpSetup
#define HWITerF_wpSwitchTo WPObject_wpSwitchTo
#define HWITerF_wpUnInitData WPObject_wpUnInitData
#define HWITerF_wpViewObject WPObject_wpViewObject
#define HWITerF_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define HWITerF_wpQueryHandle WPObject_wpQueryHandle
#define HWITerF_wpUnlockObject WPObject_wpUnlockObject
#define HWITerF_wpObjectReady WPObject_wpObjectReady
#define HWITerF_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define HWITerF_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define HWITerF_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define HWITerF_wpIsDeleteable WPObject_wpIsDeleteable
#define HWITerF_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define HWITerF_wpSetObjectID WPObject_wpSetObjectID
#define HWITerF_wpQueryObjectID WPObject_wpQueryObjectID
#define HWITerF_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define HWITerF_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define HWITerF_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define HWITerF_wpFindViewItem WPObject_wpFindViewItem
#define HWITerF_wpLockObject WPObject_wpLockObject
#define HWITerF_wpIsLocked WPObject_wpIsLocked
#define HWITerF_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define HWITerF_wpWaitForClose WPObject_wpWaitForClose
#define HWITerF_somDefaultInit SOMObject_somDefaultInit
#define HWITerF_somDestruct SOMObject_somDestruct
#define HWITerF_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define HWITerF_somDefaultAssign SOMObject_somDefaultAssign
#define HWITerF_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define HWITerF_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define HWITerF_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define HWITerF_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define HWITerF_somDefaultVAssign SOMObject_somDefaultVAssign
#define HWITerF_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define HWITerF_somInit SOMObject_somInit
#define HWITerF_somFree SOMObject_somFree
#define HWITerF_somUninit SOMObject_somUninit
#define HWITerF_somGetClass SOMObject_somGetClass
#define HWITerF_somGetClassName SOMObject_somGetClassName
#define HWITerF_somGetSize SOMObject_somGetSize
#define HWITerF_somIsA SOMObject_somIsA
#define HWITerF_somIsInstanceOf SOMObject_somIsInstanceOf
#define HWITerF_somRespondsTo SOMObject_somRespondsTo
#define HWITerF_somDispatch SOMObject_somDispatch
#define HWITerF_somClassDispatch SOMObject_somClassDispatch
#define HWITerF_somCastObj SOMObject_somCastObj
#define HWITerF_somResetObj SOMObject_somResetObj
#define HWITerF_somDispatchV SOMObject_somDispatchV
#define HWITerF_somDispatchL SOMObject_somDispatchL
#define HWITerF_somDispatchA SOMObject_somDispatchA
#define HWITerF_somDispatchD SOMObject_somDispatchD
#define HWITerF_somPrintSelf SOMObject_somPrintSelf
#define HWITerF_somDumpSelf SOMObject_somDumpSelf
#define HWITerF_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_HWITerF_h */

#ifndef SOM_M_HWITerF_h
#define SOM_M_HWITerF_h


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
#ifndef M_HWITerF
#define M_HWITerF SOMObject
#endif
#include <wpfolder.h>

/*
 * Start of user-defined types:
 */

/*
 * End of user-defined types.
 */

#define M_HWITerF_MajorVersion 1
#define M_HWITerF_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_HWITerFNewClass hwiterfc
#pragma linkage(hwiterfc, system)
#define M_HWITerFClassData hwiterfd
#define M_HWITerFCClassData hwiterfx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_HWITerF_classObj M_HWITerFClassData.classObject
#define _M_HWITerF M_HWITerF_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_HWITerFNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_HWITerFNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_HWITerFClassDataStructure {
	SOMAny *classObject;
} SOMDLINK M_HWITerFClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_HWITerFCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_HWITerFCClassData;

/*
 * New and Renew macros for M_HWITerF
 */
#define M_HWITerFNew() \
   (_somNew(_M_HWITerF ? _M_HWITerF : M_HWITerFNewClass(M_HWITerF_MajorVersion, M_HWITerF_MinorVersion)))
#define M_HWITerFRenew(buf) \
   (_somRenew(_M_HWITerF ? _M_HWITerF : M_HWITerFNewClass(M_HWITerF_MajorVersion, M_HWITerF_MinorVersion), buf))

/*
 * Override method: wpclsInitData
 */
#define M_HWITerF_wpclsInitData(somSelf) \
	M_WPObject_wpclsInitData(somSelf)

/*
 * Override method: wpclsQueryIconData
 */
#define M_HWITerF_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)

/*
 * Override method: wpclsQueryStyle
 */
#define M_HWITerF_wpclsQueryStyle(somSelf) \
	M_WPObject_wpclsQueryStyle(somSelf)

/*
 * Override method: wpclsQueryTitle
 */
#define M_HWITerF_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_HWITerF_wpclsQueryIconDataN M_WPFolder_wpclsQueryIconDataN
#define M_HWITerF_wpclsQueryIconN M_WPFolder_wpclsQueryIconN
#define M_HWITerF_wpclsQueryOpenFolders M_WPFolder_wpclsQueryOpenFolders
#define M_HWITerF_wpclsQueryAwakeObject M_WPFileSystem_wpclsQueryAwakeObject
#define M_HWITerF_wpclsFileSysExists M_WPFileSystem_wpclsFileSysExists
#define M_HWITerF_wpclsQueryObjectFromPath M_WPFileSystem_wpclsQueryObjectFromPath
#define M_HWITerF_wpclsQueryInstanceType M_WPFileSystem_wpclsQueryInstanceType
#define M_HWITerF_wpclsQueryInstanceFilter M_WPFileSystem_wpclsQueryInstanceFilter
#define M_HWITerF_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_HWITerF_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_HWITerF_wpclsNew M_WPObject_wpclsNew
#define M_HWITerF_wpclsQueryDefaultHelp M_WPObject_wpclsQueryDefaultHelp
#define M_HWITerF_wpclsQueryDefaultView M_WPObject_wpclsQueryDefaultView
#define M_HWITerF_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_HWITerF_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_HWITerF_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_HWITerF_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_HWITerF_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_HWITerF_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_HWITerF_wpclsUnInitData M_WPObject_wpclsUnInitData
#define M_HWITerF_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_HWITerF_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_HWITerF_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_HWITerF_wpclsSetError M_WPObject_wpclsSetError
#define M_HWITerF_wpclsQueryError M_WPObject_wpclsQueryError
#define M_HWITerF_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_HWITerF_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_HWITerF_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_HWITerF_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_HWITerF_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_HWITerF_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_HWITerF_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_HWITerF_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_HWITerF_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_HWITerF_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_HWITerF_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_HWITerF_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_HWITerF__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_HWITerF__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_HWITerF__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_HWITerF__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_HWITerF_somNew SOMClass_somNew
#define M_HWITerF_somNewNoInit SOMClass_somNewNoInit
#define M_HWITerF_somRenew SOMClass_somRenew
#define M_HWITerF_somRenewNoInit SOMClass_somRenewNoInit
#define M_HWITerF_somRenewNoZero SOMClass_somRenewNoZero
#define M_HWITerF_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_HWITerF_somAllocate SOMClass_somAllocate
#define M_HWITerF_somDeallocate SOMClass_somDeallocate
#define M_HWITerF__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_HWITerF__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_HWITerF_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_HWITerF_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_HWITerF_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_HWITerF_somInitClass SOMClass_somInitClass
#define M_HWITerF_somInitMIClass SOMClass_somInitMIClass
#define M_HWITerF_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_HWITerF_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_HWITerF_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_HWITerF_somClassReady SOMClass_somClassReady
#define M_HWITerF_somGetApplyStub SOMClass_somGetApplyStub
#define M_HWITerF_somGetClassData SOMClass_somGetClassData
#define M_HWITerF_somSetClassData SOMClass_somSetClassData
#define M_HWITerF_somGetClassMtab SOMClass_somGetClassMtab
#define M_HWITerF_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_HWITerF_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_HWITerF_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_HWITerF_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_HWITerF_somGetMemberToken SOMClass_somGetMemberToken
#define M_HWITerF_somGetMethodData SOMClass_somGetMethodData
#define M_HWITerF_somGetRdStub SOMClass_somGetRdStub
#define M_HWITerF_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_HWITerF_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_HWITerF_somGetMethodToken SOMClass_somGetMethodToken
#define M_HWITerF_somGetName SOMClass_somGetName
#define M_HWITerF_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_HWITerF_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_HWITerF_somGetNumMethods SOMClass_somGetNumMethods
#define M_HWITerF_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_HWITerF_somGetParent SOMClass_somGetParent
#define M_HWITerF_somGetParents SOMClass_somGetParents
#define M_HWITerF_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_HWITerF_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_HWITerF_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_HWITerF_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_HWITerF_somFindMethod SOMClass_somFindMethod
#define M_HWITerF_somFindMethodOk SOMClass_somFindMethodOk
#define M_HWITerF_somFindSMethod SOMClass_somFindSMethod
#define M_HWITerF_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_HWITerF_somLookupMethod SOMClass_somLookupMethod
#define M_HWITerF_somCheckVersion SOMClass_somCheckVersion
#define M_HWITerF_somDescendedFrom SOMClass_somDescendedFrom
#define M_HWITerF_somSupportsMethod SOMClass_somSupportsMethod
#define M_HWITerF_somDefinedMethod SOMClass_somDefinedMethod
#define M_HWITerF_somOverrideMtab SOMClass_somOverrideMtab
#define M_HWITerF_somDefaultInit SOMObject_somDefaultInit
#define M_HWITerF_somDestruct SOMObject_somDestruct
#define M_HWITerF_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_HWITerF_somDefaultAssign SOMObject_somDefaultAssign
#define M_HWITerF_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_HWITerF_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_HWITerF_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_HWITerF_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_HWITerF_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_HWITerF_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_HWITerF_somInit SOMObject_somInit
#define M_HWITerF_somFree SOMObject_somFree
#define M_HWITerF_somUninit SOMObject_somUninit
#define M_HWITerF_somGetClass SOMObject_somGetClass
#define M_HWITerF_somGetClassName SOMObject_somGetClassName
#define M_HWITerF_somGetSize SOMObject_somGetSize
#define M_HWITerF_somIsA SOMObject_somIsA
#define M_HWITerF_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_HWITerF_somRespondsTo SOMObject_somRespondsTo
#define M_HWITerF_somDispatch SOMObject_somDispatch
#define M_HWITerF_somClassDispatch SOMObject_somClassDispatch
#define M_HWITerF_somCastObj SOMObject_somCastObj
#define M_HWITerF_somResetObj SOMObject_somResetObj
#define M_HWITerF_somDispatchV SOMObject_somDispatchV
#define M_HWITerF_somDispatchL SOMObject_somDispatchL
#define M_HWITerF_somDispatchA SOMObject_somDispatchA
#define M_HWITerF_somDispatchD SOMObject_somDispatchD
#define M_HWITerF_somPrintSelf SOMObject_somPrintSelf
#define M_HWITerF_somDumpSelf SOMObject_somDumpSelf
#define M_HWITerF_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_HWITerF_h */
