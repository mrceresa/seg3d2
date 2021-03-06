#ifndef __itk_NrrdIO_mangle_h
#define __itk_NrrdIO_mangle_h

/*

This header file mangles all symbols exported from the
NrrdIO library. It is included in all files while building
the NrrdIO library.  Due to namespace pollution, no NrrdIO
headers should be included in .h files in ITK.

This file was created via the mangle.pl script in the
NrrdIO distribution:

  perl mangle.pl itk > itk_NrrdIO_mangle.h

This uses nm to list all text (T), data (D) symbols, as well
read-only (R) things (seen on Linux) and "other" (S) things
(seen on Mac).  On Macs, the preceeding underscore is removed.
*/

#define airExists itk_airExists
#define airFPClass_d itk_airFPClass_d
#define airFPClass_f itk_airFPClass_f
#define airFPFprintf_d itk_airFPFprintf_d
#define airFPFprintf_f itk_airFPFprintf_f
#define airFPGen_d itk_airFPGen_d
#define airFPGen_f itk_airFPGen_f
#define airFPPartsToVal_d itk_airFPPartsToVal_d
#define airFPPartsToVal_f itk_airFPPartsToVal_f
#define airFPValToParts_d itk_airFPValToParts_d
#define airFPValToParts_f itk_airFPValToParts_f
#define airFloatNegInf itk_airFloatNegInf
#define airFloatPosInf itk_airFloatPosInf
#define airFloatQNaN itk_airFloatQNaN
#define airFloatSNaN itk_airFloatSNaN
#define airIsInf_d itk_airIsInf_d
#define airIsInf_f itk_airIsInf_f
#define airIsNaN itk_airIsNaN
#define airMyQNaNHiBit itk_airMyQNaNHiBit
#define airNaN itk_airNaN
#define _airMopPrint itk__airMopPrint
#define _airMopWhenStr itk__airMopWhenStr
#define airMopAdd itk_airMopAdd
#define airMopDebug itk_airMopDebug
#define airMopDone itk_airMopDone
#define airMopError itk_airMopError
#define airMopMem itk_airMopMem
#define airMopNew itk_airMopNew
#define airMopOkay itk_airMopOkay
#define airMopPrint itk_airMopPrint
#define airMopSub itk_airMopSub
#define airMopUnMem itk_airMopUnMem
#define _airLenSet itk__airLenSet
#define _airSetData itk__airSetData
#define airArrayLenIncr itk_airArrayLenIncr
#define airArrayLenPreSet itk_airArrayLenPreSet
#define airArrayLenSet itk_airArrayLenSet
#define airArrayNew itk_airArrayNew
#define airArrayNix itk_airArrayNix
#define airArrayNuke itk_airArrayNuke
#define airArrayPointerCB itk_airArrayPointerCB
#define airArrayStructCB itk_airArrayStructCB
#define _airBool itk__airBool
#define _airBoolDesc itk__airBoolDesc
#define _airBoolStr itk__airBoolStr
#define _airBoolStrEqv itk__airBoolStrEqv
#define _airBoolVal itk__airBoolVal
#define _airBoolValEqv itk__airBoolValEqv
#define airAtod itk_airAtod
#define airBool itk_airBool
#define airParseStr itk_airParseStr
#define airParseStrB itk_airParseStrB
#define airParseStrC itk_airParseStrC
#define airParseStrD itk_airParseStrD
#define airParseStrE itk_airParseStrE
#define airParseStrF itk_airParseStrF
#define airParseStrI itk_airParseStrI
#define airParseStrS itk_airParseStrS
#define airParseStrUI itk_airParseStrUI
#define airParseStrZ itk_airParseStrZ
#define airSingleSscanf itk_airSingleSscanf
#define _airNoDioErr itk__airNoDioErr
#define airDioInfo itk_airDioInfo
#define airDioMalloc itk_airDioMalloc
#define airDioRead itk_airDioRead
#define airDioTest itk_airDioTest
#define airDioWrite itk_airDioWrite
#define airDisableDio itk_airDisableDio
#define airMyDio itk_airMyDio
#define airNoDioErr itk_airNoDioErr
#define _airBadInsane itk__airBadInsane
#define _airInsaneErr itk__airInsaneErr
#define airInsaneErr itk_airInsaneErr
#define airSanity itk_airSanity
#define _airEndian itk__airEndian
#define _airEndianDesc itk__airEndianDesc
#define _airEndianStr itk__airEndianStr
#define _airEndianVal itk__airEndianVal
#define airEndian itk_airEndian
#define airMyEndian itk_airMyEndian
#define airEndsWith itk_airEndsWith
#define airOneLine itk_airOneLine
#define airOneLinify itk_airOneLinify
#define airStrdup itk_airStrdup
#define airStrlen itk_airStrlen
#define airStrntok itk_airStrntok
#define airStrtok itk_airStrtok
#define airStrtokQuoting itk_airStrtokQuoting
#define airStrtrans itk_airStrtrans
#define airToLower itk_airToLower
#define airToUpper itk_airToUpper
#define airUnescape itk_airUnescape
#define _airEnumIndex itk__airEnumIndex
#define airEnumDesc itk_airEnumDesc
#define airEnumFmtDesc itk_airEnumFmtDesc
#define airEnumStr itk_airEnumStr
#define airEnumUnknown itk_airEnumUnknown
#define airEnumVal itk_airEnumVal
#define airEnumValCheck itk_airEnumValCheck
#define _airSanityHelper itk__airSanityHelper
#define airFclose itk_airFclose
#define airFopen itk_airFopen
#define airFree itk_airFree
#define airMy32Bit itk_airMy32Bit
#define airNull itk_airNull
#define airSetNull itk_airSetNull
#define airSinglePrintf itk_airSinglePrintf
#define airTeemReleaseDate itk_airTeemReleaseDate
#define airTeemVersion itk_airTeemVersion
#define _biffAA itk__biffAA
#define _biffAddErr itk__biffAddErr
#define _biffAddKey itk__biffAddKey
#define _biffCheckKey itk__biffCheckKey
#define _biffErr itk__biffErr
#define _biffFindKey itk__biffFindKey
#define _biffFindMaxAndSum itk__biffFindMaxAndSum
#define _biffGetStr itk__biffGetStr
#define _biffIdx itk__biffIdx
#define _biffInit itk__biffInit
#define _biffNewEntry itk__biffNewEntry
#define _biffNuke itk__biffNuke
#define _biffNukeEntry itk__biffNukeEntry
#define _biffNum itk__biffNum
#define biffAdd itk_biffAdd
#define biffCheck itk_biffCheck
#define biffDone itk_biffDone
#define biffGet itk_biffGet
#define biffGetDone itk_biffGetDone
#define biffGetStrlen itk_biffGetStrlen
#define biffMaybeAdd itk_biffMaybeAdd
#define biffMove itk_biffMove
#define biffSetStr itk_biffSetStr
#define biffSetStrDone itk_biffSetStrDone
#define _nrrdInsertDBCH itk__nrrdInsertDBCH
#define _nrrdInsertDBDB itk__nrrdInsertDBDB
#define _nrrdInsertDBFL itk__nrrdInsertDBFL
#define _nrrdInsertDBJN itk__nrrdInsertDBJN
#define _nrrdInsertDBLL itk__nrrdInsertDBLL
#define _nrrdInsertDBSH itk__nrrdInsertDBSH
#define _nrrdInsertDBUC itk__nrrdInsertDBUC
#define _nrrdInsertDBUI itk__nrrdInsertDBUI
#define _nrrdInsertDBUL itk__nrrdInsertDBUL
#define _nrrdInsertDBUS itk__nrrdInsertDBUS
#define _nrrdInsertFLCH itk__nrrdInsertFLCH
#define _nrrdInsertFLDB itk__nrrdInsertFLDB
#define _nrrdInsertFLFL itk__nrrdInsertFLFL
#define _nrrdInsertFLJN itk__nrrdInsertFLJN
#define _nrrdInsertFLLL itk__nrrdInsertFLLL
#define _nrrdInsertFLSH itk__nrrdInsertFLSH
#define _nrrdInsertFLUC itk__nrrdInsertFLUC
#define _nrrdInsertFLUI itk__nrrdInsertFLUI
#define _nrrdInsertFLUL itk__nrrdInsertFLUL
#define _nrrdInsertFLUS itk__nrrdInsertFLUS
#define _nrrdInsertJNCH itk__nrrdInsertJNCH
#define _nrrdInsertJNDB itk__nrrdInsertJNDB
#define _nrrdInsertJNFL itk__nrrdInsertJNFL
#define _nrrdInsertJNJN itk__nrrdInsertJNJN
#define _nrrdInsertJNLL itk__nrrdInsertJNLL
#define _nrrdInsertJNSH itk__nrrdInsertJNSH
#define _nrrdInsertJNUC itk__nrrdInsertJNUC
#define _nrrdInsertJNUI itk__nrrdInsertJNUI
#define _nrrdInsertJNUL itk__nrrdInsertJNUL
#define _nrrdInsertJNUS itk__nrrdInsertJNUS
#define _nrrdLoadDBCH itk__nrrdLoadDBCH
#define _nrrdLoadDBDB itk__nrrdLoadDBDB
#define _nrrdLoadDBFL itk__nrrdLoadDBFL
#define _nrrdLoadDBJN itk__nrrdLoadDBJN
#define _nrrdLoadDBLL itk__nrrdLoadDBLL
#define _nrrdLoadDBSH itk__nrrdLoadDBSH
#define _nrrdLoadDBUC itk__nrrdLoadDBUC
#define _nrrdLoadDBUI itk__nrrdLoadDBUI
#define _nrrdLoadDBUL itk__nrrdLoadDBUL
#define _nrrdLoadDBUS itk__nrrdLoadDBUS
#define _nrrdLoadFLCH itk__nrrdLoadFLCH
#define _nrrdLoadFLDB itk__nrrdLoadFLDB
#define _nrrdLoadFLFL itk__nrrdLoadFLFL
#define _nrrdLoadFLJN itk__nrrdLoadFLJN
#define _nrrdLoadFLLL itk__nrrdLoadFLLL
#define _nrrdLoadFLSH itk__nrrdLoadFLSH
#define _nrrdLoadFLUC itk__nrrdLoadFLUC
#define _nrrdLoadFLUI itk__nrrdLoadFLUI
#define _nrrdLoadFLUL itk__nrrdLoadFLUL
#define _nrrdLoadFLUS itk__nrrdLoadFLUS
#define _nrrdLoadJNCH itk__nrrdLoadJNCH
#define _nrrdLoadJNDB itk__nrrdLoadJNDB
#define _nrrdLoadJNFL itk__nrrdLoadJNFL
#define _nrrdLoadJNJN itk__nrrdLoadJNJN
#define _nrrdLoadJNLL itk__nrrdLoadJNLL
#define _nrrdLoadJNSH itk__nrrdLoadJNSH
#define _nrrdLoadJNUC itk__nrrdLoadJNUC
#define _nrrdLoadJNUI itk__nrrdLoadJNUI
#define _nrrdLoadJNUL itk__nrrdLoadJNUL
#define _nrrdLoadJNUS itk__nrrdLoadJNUS
#define _nrrdLookupDBCH itk__nrrdLookupDBCH
#define _nrrdLookupDBDB itk__nrrdLookupDBDB
#define _nrrdLookupDBFL itk__nrrdLookupDBFL
#define _nrrdLookupDBJN itk__nrrdLookupDBJN
#define _nrrdLookupDBLL itk__nrrdLookupDBLL
#define _nrrdLookupDBSH itk__nrrdLookupDBSH
#define _nrrdLookupDBUC itk__nrrdLookupDBUC
#define _nrrdLookupDBUI itk__nrrdLookupDBUI
#define _nrrdLookupDBUL itk__nrrdLookupDBUL
#define _nrrdLookupDBUS itk__nrrdLookupDBUS
#define _nrrdLookupFLCH itk__nrrdLookupFLCH
#define _nrrdLookupFLDB itk__nrrdLookupFLDB
#define _nrrdLookupFLFL itk__nrrdLookupFLFL
#define _nrrdLookupFLJN itk__nrrdLookupFLJN
#define _nrrdLookupFLLL itk__nrrdLookupFLLL
#define _nrrdLookupFLSH itk__nrrdLookupFLSH
#define _nrrdLookupFLUC itk__nrrdLookupFLUC
#define _nrrdLookupFLUI itk__nrrdLookupFLUI
#define _nrrdLookupFLUL itk__nrrdLookupFLUL
#define _nrrdLookupFLUS itk__nrrdLookupFLUS
#define _nrrdLookupJNCH itk__nrrdLookupJNCH
#define _nrrdLookupJNDB itk__nrrdLookupJNDB
#define _nrrdLookupJNFL itk__nrrdLookupJNFL
#define _nrrdLookupJNJN itk__nrrdLookupJNJN
#define _nrrdLookupJNLL itk__nrrdLookupJNLL
#define _nrrdLookupJNSH itk__nrrdLookupJNSH
#define _nrrdLookupJNUC itk__nrrdLookupJNUC
#define _nrrdLookupJNUI itk__nrrdLookupJNUI
#define _nrrdLookupJNUL itk__nrrdLookupJNUL
#define _nrrdLookupJNUS itk__nrrdLookupJNUS
#define _nrrdSprintCH itk__nrrdSprintCH
#define _nrrdSprintDB itk__nrrdSprintDB
#define _nrrdSprintFL itk__nrrdSprintFL
#define _nrrdSprintIN itk__nrrdSprintIN
#define _nrrdSprintLL itk__nrrdSprintLL
#define _nrrdSprintSH itk__nrrdSprintSH
#define _nrrdSprintUC itk__nrrdSprintUC
#define _nrrdSprintUI itk__nrrdSprintUI
#define _nrrdSprintUL itk__nrrdSprintUL
#define _nrrdSprintUS itk__nrrdSprintUS
#define _nrrdStoreDBCH itk__nrrdStoreDBCH
#define _nrrdStoreDBDB itk__nrrdStoreDBDB
#define _nrrdStoreDBFL itk__nrrdStoreDBFL
#define _nrrdStoreDBJN itk__nrrdStoreDBJN
#define _nrrdStoreDBLL itk__nrrdStoreDBLL
#define _nrrdStoreDBSH itk__nrrdStoreDBSH
#define _nrrdStoreDBUC itk__nrrdStoreDBUC
#define _nrrdStoreDBUI itk__nrrdStoreDBUI
#define _nrrdStoreDBUL itk__nrrdStoreDBUL
#define _nrrdStoreDBUS itk__nrrdStoreDBUS
#define _nrrdStoreFLCH itk__nrrdStoreFLCH
#define _nrrdStoreFLDB itk__nrrdStoreFLDB
#define _nrrdStoreFLFL itk__nrrdStoreFLFL
#define _nrrdStoreFLJN itk__nrrdStoreFLJN
#define _nrrdStoreFLLL itk__nrrdStoreFLLL
#define _nrrdStoreFLSH itk__nrrdStoreFLSH
#define _nrrdStoreFLUC itk__nrrdStoreFLUC
#define _nrrdStoreFLUI itk__nrrdStoreFLUI
#define _nrrdStoreFLUL itk__nrrdStoreFLUL
#define _nrrdStoreFLUS itk__nrrdStoreFLUS
#define _nrrdStoreJNCH itk__nrrdStoreJNCH
#define _nrrdStoreJNDB itk__nrrdStoreJNDB
#define _nrrdStoreJNFL itk__nrrdStoreJNFL
#define _nrrdStoreJNJN itk__nrrdStoreJNJN
#define _nrrdStoreJNLL itk__nrrdStoreJNLL
#define _nrrdStoreJNSH itk__nrrdStoreJNSH
#define _nrrdStoreJNUC itk__nrrdStoreJNUC
#define _nrrdStoreJNUI itk__nrrdStoreJNUI
#define _nrrdStoreJNUL itk__nrrdStoreJNUL
#define _nrrdStoreJNUS itk__nrrdStoreJNUS
#define nrrdDInsert itk_nrrdDInsert
#define nrrdDLoad itk_nrrdDLoad
#define nrrdDLookup itk_nrrdDLookup
#define nrrdDStore itk_nrrdDStore
#define nrrdFInsert itk_nrrdFInsert
#define nrrdFLoad itk_nrrdFLoad
#define nrrdFLookup itk_nrrdFLookup
#define nrrdFStore itk_nrrdFStore
#define nrrdIInsert itk_nrrdIInsert
#define nrrdILoad itk_nrrdILoad
#define nrrdILookup itk_nrrdILookup
#define nrrdIStore itk_nrrdIStore
#define nrrdSprint itk_nrrdSprint
#define nrrdDefCenter itk_nrrdDefCenter
#define nrrdDefSpacing itk_nrrdDefSpacing
#define nrrdDefWriteBareText itk_nrrdDefWriteBareText
#define nrrdDefWriteCharsPerLine itk_nrrdDefWriteCharsPerLine
#define nrrdDefWriteEncoding itk_nrrdDefWriteEncoding
#define nrrdDefWriteValsPerLine itk_nrrdDefWriteValsPerLine
#define nrrdStateAlwaysSetContent itk_nrrdStateAlwaysSetContent
#define nrrdStateDisableContent itk_nrrdStateDisableContent
#define nrrdStateGrayscaleImage3D itk_nrrdStateGrayscaleImage3D
#define nrrdStateKeyValueReturnInternalPointers itk_nrrdStateKeyValueReturnInternalPointers
#define nrrdStateKindNoop itk_nrrdStateKindNoop
#define nrrdStateUnknownContent itk_nrrdStateUnknownContent
#define nrrdStateVerboseIO itk_nrrdStateVerboseIO
#define _nrrdCenterDesc itk__nrrdCenterDesc
#define _nrrdCenterStr itk__nrrdCenterStr
#define _nrrdCenter_enum itk__nrrdCenter_enum
#define _nrrdEncodingType itk__nrrdEncodingType
#define _nrrdEncodingTypeDesc itk__nrrdEncodingTypeDesc
#define _nrrdEncodingTypeStr itk__nrrdEncodingTypeStr
#define _nrrdEncodingTypeStrEqv itk__nrrdEncodingTypeStrEqv
#define _nrrdEncodingTypeValEqv itk__nrrdEncodingTypeValEqv
#define _nrrdField itk__nrrdField
#define _nrrdFieldDesc itk__nrrdFieldDesc
#define _nrrdFieldStr itk__nrrdFieldStr
#define _nrrdFieldStrEqv itk__nrrdFieldStrEqv
#define _nrrdFieldValEqv itk__nrrdFieldValEqv
#define _nrrdFormatType itk__nrrdFormatType
#define _nrrdFormatTypeDesc itk__nrrdFormatTypeDesc
#define _nrrdFormatTypeStr itk__nrrdFormatTypeStr
#define _nrrdFormatTypeStrEqv itk__nrrdFormatTypeStrEqv
#define _nrrdFormatTypeValEqv itk__nrrdFormatTypeValEqv
#define _nrrdKindDesc itk__nrrdKindDesc
#define _nrrdKindStr itk__nrrdKindStr
#define _nrrdKindStr_Eqv itk__nrrdKindStr_Eqv
#define _nrrdKindVal_Eqv itk__nrrdKindVal_Eqv
#define _nrrdKind_enum itk__nrrdKind_enum
#define _nrrdSpace itk__nrrdSpace
#define _nrrdSpaceDesc itk__nrrdSpaceDesc
#define _nrrdSpaceStr itk__nrrdSpaceStr
#define _nrrdSpaceStrEqv itk__nrrdSpaceStrEqv
#define _nrrdSpaceValEqv itk__nrrdSpaceValEqv
#define _nrrdType itk__nrrdType
#define _nrrdTypeDesc itk__nrrdTypeDesc
#define _nrrdTypeStr itk__nrrdTypeStr
#define _nrrdTypeStrEqv itk__nrrdTypeStrEqv
#define _nrrdTypeValEqv itk__nrrdTypeValEqv
#define nrrdCenter itk_nrrdCenter
#define nrrdEncodingType itk_nrrdEncodingType
#define nrrdField itk_nrrdField
#define nrrdFormatType itk_nrrdFormatType
#define nrrdKind itk_nrrdKind
#define nrrdSpace itk_nrrdSpace
#define nrrdType itk_nrrdType
#define _nrrdFieldOnePerAxis itk__nrrdFieldOnePerAxis
#define _nrrdFieldRequired itk__nrrdFieldRequired
#define _nrrdFieldValidInImage itk__nrrdFieldValidInImage
#define _nrrdFieldValidInText itk__nrrdFieldValidInText
#define nrrdTypeIsIntegral itk_nrrdTypeIsIntegral
#define nrrdTypeIsUnsigned itk_nrrdTypeIsUnsigned
#define nrrdTypeMax itk_nrrdTypeMax
#define nrrdTypeMin itk_nrrdTypeMin
#define nrrdTypeNumberOfValues itk_nrrdTypeNumberOfValues
#define nrrdTypePrintfStr itk_nrrdTypePrintfStr
#define nrrdTypeSize itk_nrrdTypeSize
#define _nrrdCopy itk__nrrdCopy
#define _nrrdSizeCheck itk__nrrdSizeCheck
#define nrrdAlloc itk_nrrdAlloc
#define nrrdAlloc_nva itk_nrrdAlloc_nva
#define nrrdBasicInfoCopy itk_nrrdBasicInfoCopy
#define nrrdBasicInfoInit itk_nrrdBasicInfoInit
#define nrrdCopy itk_nrrdCopy
#define nrrdEmpty itk_nrrdEmpty
#define nrrdInit itk_nrrdInit
#define nrrdIoStateInit itk_nrrdIoStateInit
#define nrrdIoStateNew itk_nrrdIoStateNew
#define nrrdIoStateNix itk_nrrdIoStateNix
#define nrrdMaybeAlloc itk_nrrdMaybeAlloc
#define nrrdMaybeAlloc_nva itk_nrrdMaybeAlloc_nva
#define nrrdNew itk_nrrdNew
#define nrrdNix itk_nrrdNix
#define nrrdNuke itk_nrrdNuke
#define nrrdPGM itk_nrrdPGM
#define nrrdPPM itk_nrrdPPM
#define nrrdPeripheralCopy itk_nrrdPeripheralCopy
#define nrrdPeripheralInit itk_nrrdPeripheralInit
#define nrrdWrap itk_nrrdWrap
#define nrrdWrap_nva itk_nrrdWrap_nva
#define nrrdAxesInsert itk_nrrdAxesInsert
#define nrrdAxesPermute itk_nrrdAxesPermute
#define nrrdInvertPerm itk_nrrdInvertPerm
#define nrrdShuffle itk_nrrdShuffle
#define _nrrdAxisInfoCopy itk__nrrdAxisInfoCopy
#define _nrrdAxisInfoInit itk__nrrdAxisInfoInit
#define _nrrdAxisInfoNewInit itk__nrrdAxisInfoNewInit
#define _nrrdCenter itk__nrrdCenter
#define _nrrdCenter2 itk__nrrdCenter2
#define _nrrdKindAltered itk__nrrdKindAltered
#define nrrdAxisInfoCopy itk_nrrdAxisInfoCopy
#define nrrdAxisInfoGet itk_nrrdAxisInfoGet
#define nrrdAxisInfoGet_nva itk_nrrdAxisInfoGet_nva
#define nrrdAxisInfoIdx itk_nrrdAxisInfoIdx
#define nrrdAxisInfoIdxRange itk_nrrdAxisInfoIdxRange
#define nrrdAxisInfoMinMaxSet itk_nrrdAxisInfoMinMaxSet
#define nrrdAxisInfoPos itk_nrrdAxisInfoPos
#define nrrdAxisInfoPosRange itk_nrrdAxisInfoPosRange
#define nrrdAxisInfoSet itk_nrrdAxisInfoSet
#define nrrdAxisInfoSet_nva itk_nrrdAxisInfoSet_nva
#define nrrdAxisInfoSpacingSet itk_nrrdAxisInfoSpacingSet
#define nrrdDomainAxesGet itk_nrrdDomainAxesGet
#define nrrdKindIsDomain itk_nrrdKindIsDomain
#define nrrdKindSize itk_nrrdKindSize
#define nrrdRangeAxesGet itk_nrrdRangeAxesGet
#define nrrdSpacingCalculate itk_nrrdSpacingCalculate
#define _nrrdCheck itk__nrrdCheck
#define _nrrdCheckEnums itk__nrrdCheckEnums
#define _nrrdContentGet itk__nrrdContentGet
#define _nrrdContentSet itk__nrrdContentSet
#define _nrrdContentSet_nva itk__nrrdContentSet_nva
#define _nrrdFieldCheck itk__nrrdFieldCheck
#define _nrrdFieldCheckSpaceInfo itk__nrrdFieldCheckSpaceInfo
#define _nrrdFieldCheck_axis_maxs itk__nrrdFieldCheck_axis_maxs
#define _nrrdFieldCheck_axis_mins itk__nrrdFieldCheck_axis_mins
#define _nrrdFieldCheck_block_size itk__nrrdFieldCheck_block_size
#define _nrrdFieldCheck_centers itk__nrrdFieldCheck_centers
#define _nrrdFieldCheck_dimension itk__nrrdFieldCheck_dimension
#define _nrrdFieldCheck_keyvalue itk__nrrdFieldCheck_keyvalue
#define _nrrdFieldCheck_kinds itk__nrrdFieldCheck_kinds
#define _nrrdFieldCheck_labels itk__nrrdFieldCheck_labels
#define _nrrdFieldCheck_measurement_frame itk__nrrdFieldCheck_measurement_frame
#define _nrrdFieldCheck_noop itk__nrrdFieldCheck_noop
#define _nrrdFieldCheck_old_max itk__nrrdFieldCheck_old_max
#define _nrrdFieldCheck_old_min itk__nrrdFieldCheck_old_min
#define _nrrdFieldCheck_sizes itk__nrrdFieldCheck_sizes
#define _nrrdFieldCheck_space itk__nrrdFieldCheck_space
#define _nrrdFieldCheck_space_dimension itk__nrrdFieldCheck_space_dimension
#define _nrrdFieldCheck_space_directions itk__nrrdFieldCheck_space_directions
#define _nrrdFieldCheck_space_origin itk__nrrdFieldCheck_space_origin
#define _nrrdFieldCheck_space_units itk__nrrdFieldCheck_space_units
#define _nrrdFieldCheck_spacings itk__nrrdFieldCheck_spacings
#define _nrrdFieldCheck_thicknesses itk__nrrdFieldCheck_thicknesses
#define _nrrdFieldCheck_type itk__nrrdFieldCheck_type
#define _nrrdFieldCheck_units itk__nrrdFieldCheck_units
#define _nrrdSpaceVecNorm itk__nrrdSpaceVecNorm
#define _nrrdSpaceVecScale itk__nrrdSpaceVecScale
#define _nrrdSpaceVecScaleAdd2 itk__nrrdSpaceVecScaleAdd2
#define _nrrdSpaceVecSetNaN itk__nrrdSpaceVecSetNaN
#define _nrrdSplitSizes itk__nrrdSplitSizes
#define nrrdBiffKey itk_nrrdBiffKey
#define nrrdCheck itk_nrrdCheck
#define nrrdContentSet itk_nrrdContentSet
#define nrrdDescribe itk_nrrdDescribe
#define nrrdElementNumber itk_nrrdElementNumber
#define nrrdElementSize itk_nrrdElementSize
#define nrrdOriginCalculate itk_nrrdOriginCalculate
#define nrrdSameSize itk_nrrdSameSize
#define nrrdSanity itk_nrrdSanity
#define nrrdSpaceDimension itk_nrrdSpaceDimension
#define nrrdSpaceDimensionSet itk_nrrdSpaceDimensionSet
#define nrrdSpaceOriginGet itk_nrrdSpaceOriginGet
#define nrrdSpaceOriginSet itk_nrrdSpaceOriginSet
#define nrrdSpaceSet itk_nrrdSpaceSet
#define nrrdCommentAdd itk_nrrdCommentAdd
#define nrrdCommentClear itk_nrrdCommentClear
#define nrrdCommentCopy itk_nrrdCommentCopy
#define _nrrdFwriteEscaped itk__nrrdFwriteEscaped
#define _nrrdKeyValueFwrite itk__nrrdKeyValueFwrite
#define _nrrdKeyValueIdxFind itk__nrrdKeyValueIdxFind
#define nrrdKeyValueAdd itk_nrrdKeyValueAdd
#define nrrdKeyValueClear itk_nrrdKeyValueClear
#define nrrdKeyValueCopy itk_nrrdKeyValueCopy
#define nrrdKeyValueErase itk_nrrdKeyValueErase
#define nrrdKeyValueGet itk_nrrdKeyValueGet
#define nrrdKeyValueIndex itk_nrrdKeyValueIndex
#define nrrdKeyValueSize itk_nrrdKeyValueSize
#define _nrrdBlockEndian itk__nrrdBlockEndian
#define _nrrdNoopEndian itk__nrrdNoopEndian
#define _nrrdSwap16Endian itk__nrrdSwap16Endian
#define _nrrdSwap32Endian itk__nrrdSwap32Endian
#define _nrrdSwap64Endian itk__nrrdSwap64Endian
#define _nrrdSwapEndian itk__nrrdSwapEndian
#define nrrdSwapEndian itk_nrrdSwapEndian
#define _nrrdContainsPercentDAndMore itk__nrrdContainsPercentDAndMore
#define _nrrdDataFNCheck itk__nrrdDataFNCheck
#define _nrrdDataFNNumber itk__nrrdDataFNNumber
#define _nrrdGetQuotedString itk__nrrdGetQuotedString
#define _nrrdReadNrrdParseField itk__nrrdReadNrrdParseField
#define _nrrdReadNrrdParse_axis_maxs itk__nrrdReadNrrdParse_axis_maxs
#define _nrrdReadNrrdParse_axis_mins itk__nrrdReadNrrdParse_axis_mins
#define _nrrdReadNrrdParse_block_size itk__nrrdReadNrrdParse_block_size
#define _nrrdReadNrrdParse_byte_skip itk__nrrdReadNrrdParse_byte_skip
#define _nrrdReadNrrdParse_centers itk__nrrdReadNrrdParse_centers
#define _nrrdReadNrrdParse_comment itk__nrrdReadNrrdParse_comment
#define _nrrdReadNrrdParse_content itk__nrrdReadNrrdParse_content
#define _nrrdReadNrrdParse_data_file itk__nrrdReadNrrdParse_data_file
#define _nrrdReadNrrdParse_dimension itk__nrrdReadNrrdParse_dimension
#define _nrrdReadNrrdParse_encoding itk__nrrdReadNrrdParse_encoding
#define _nrrdReadNrrdParse_endian itk__nrrdReadNrrdParse_endian
#define _nrrdReadNrrdParse_keyvalue itk__nrrdReadNrrdParse_keyvalue
#define _nrrdReadNrrdParse_kinds itk__nrrdReadNrrdParse_kinds
#define _nrrdReadNrrdParse_labels itk__nrrdReadNrrdParse_labels
#define _nrrdReadNrrdParse_line_skip itk__nrrdReadNrrdParse_line_skip
#define _nrrdReadNrrdParse_max itk__nrrdReadNrrdParse_max
#define _nrrdReadNrrdParse_measurement_frame itk__nrrdReadNrrdParse_measurement_frame
#define _nrrdReadNrrdParse_min itk__nrrdReadNrrdParse_min
#define _nrrdReadNrrdParse_nonfield itk__nrrdReadNrrdParse_nonfield
#define _nrrdReadNrrdParse_number itk__nrrdReadNrrdParse_number
#define _nrrdReadNrrdParse_old_max itk__nrrdReadNrrdParse_old_max
#define _nrrdReadNrrdParse_old_min itk__nrrdReadNrrdParse_old_min
#define _nrrdReadNrrdParse_sample_units itk__nrrdReadNrrdParse_sample_units
#define _nrrdReadNrrdParse_sizes itk__nrrdReadNrrdParse_sizes
#define _nrrdReadNrrdParse_space itk__nrrdReadNrrdParse_space
#define _nrrdReadNrrdParse_space_dimension itk__nrrdReadNrrdParse_space_dimension
#define _nrrdReadNrrdParse_space_directions itk__nrrdReadNrrdParse_space_directions
#define _nrrdReadNrrdParse_space_origin itk__nrrdReadNrrdParse_space_origin
#define _nrrdReadNrrdParse_space_units itk__nrrdReadNrrdParse_space_units
#define _nrrdReadNrrdParse_spacings itk__nrrdReadNrrdParse_spacings
#define _nrrdReadNrrdParse_thicknesses itk__nrrdReadNrrdParse_thicknesses
#define _nrrdReadNrrdParse_type itk__nrrdReadNrrdParse_type
#define _nrrdReadNrrdParse_units itk__nrrdReadNrrdParse_units
#define _nrrdSpaceVectorParse itk__nrrdSpaceVectorParse
#define nrrdFieldInfoParse itk_nrrdFieldInfoParse
#define _nrrdGzClose itk__nrrdGzClose
#define _nrrdGzDummySymbol itk__nrrdGzDummySymbol
#define _nrrdGzOpen itk__nrrdGzOpen
#define _nrrdGzRead itk__nrrdGzRead
#define _nrrdGzWrite itk__nrrdGzWrite
#define _nrrdCalloc itk__nrrdCalloc
#define _nrrdFieldSep itk__nrrdFieldSep
#define _nrrdNoSpaceVector itk__nrrdNoSpaceVector
#define _nrrdOneLine itk__nrrdOneLine
#define _nrrdRelativePathFlag itk__nrrdRelativePathFlag
#define _nrrdSplitName itk__nrrdSplitName
#define _nrrdTextSep itk__nrrdTextSep
#define nrrdByteSkip itk_nrrdByteSkip
#define nrrdLineSkip itk_nrrdLineSkip
#define nrrdLoad itk_nrrdLoad
#define nrrdRead itk_nrrdRead
#define _nrrdEncodingMaybeSet itk__nrrdEncodingMaybeSet
#define _nrrdFieldInteresting itk__nrrdFieldInteresting
#define _nrrdFormatMaybeGuess itk__nrrdFormatMaybeGuess
#define _nrrdFormatMaybeSet itk__nrrdFormatMaybeSet
#define _nrrdFprintFieldInfo itk__nrrdFprintFieldInfo
#define _nrrdSprintFieldInfo itk__nrrdSprintFieldInfo
#define _nrrdStrcatSpaceVector itk__nrrdStrcatSpaceVector
#define nrrdIoStateEncodingGet itk_nrrdIoStateEncodingGet
#define nrrdIoStateEncodingSet itk_nrrdIoStateEncodingSet
#define nrrdIoStateFormatGet itk_nrrdIoStateFormatGet
#define nrrdIoStateFormatSet itk_nrrdIoStateFormatSet
#define nrrdIoStateGet itk_nrrdIoStateGet
#define nrrdIoStateSet itk_nrrdIoStateSet
#define nrrdSave itk_nrrdSave
#define nrrdWrite itk_nrrdWrite
#define _nrrdFormatUnknown itk__nrrdFormatUnknown
#define _nrrdFormatUnknown_available itk__nrrdFormatUnknown_available
#define _nrrdFormatUnknown_contentStartsLike itk__nrrdFormatUnknown_contentStartsLike
#define _nrrdFormatUnknown_fitsInto itk__nrrdFormatUnknown_fitsInto
#define _nrrdFormatUnknown_nameLooksLike itk__nrrdFormatUnknown_nameLooksLike
#define _nrrdFormatUnknown_read itk__nrrdFormatUnknown_read
#define _nrrdFormatUnknown_write itk__nrrdFormatUnknown_write
#define nrrdFormatArray itk_nrrdFormatArray
#define nrrdFormatUnknown itk_nrrdFormatUnknown
#define _nrrdFormatNRRD itk__nrrdFormatNRRD
#define _nrrdFormatNRRD_available itk__nrrdFormatNRRD_available
#define _nrrdFormatNRRD_contentStartsLike itk__nrrdFormatNRRD_contentStartsLike
#define _nrrdFormatNRRD_fitsInto itk__nrrdFormatNRRD_fitsInto
#define _nrrdFormatNRRD_nameLooksLike itk__nrrdFormatNRRD_nameLooksLike
#define _nrrdFormatNRRD_read itk__nrrdFormatNRRD_read
#define _nrrdFormatNRRD_whichVersion itk__nrrdFormatNRRD_whichVersion
#define _nrrdFormatNRRD_write itk__nrrdFormatNRRD_write
#define _nrrdFormatURLLine0 itk__nrrdFormatURLLine0
#define _nrrdFormatURLLine1 itk__nrrdFormatURLLine1
#define _nrrdHeaderCheck itk__nrrdHeaderCheck
#define nrrdFormatNRRD itk_nrrdFormatNRRD
#define nrrdIoStateDataFileIterBegin itk_nrrdIoStateDataFileIterBegin
#define nrrdIoStateDataFileIterNext itk_nrrdIoStateDataFileIterNext
#define _nrrdEncodingUnknown itk__nrrdEncodingUnknown
#define _nrrdEncodingUnknown_available itk__nrrdEncodingUnknown_available
#define _nrrdEncodingUnknown_read itk__nrrdEncodingUnknown_read
#define _nrrdEncodingUnknown_write itk__nrrdEncodingUnknown_write
#define nrrdEncodingArray itk_nrrdEncodingArray
#define nrrdEncodingUnknown itk_nrrdEncodingUnknown
#define _nrrdEncodingRaw itk__nrrdEncodingRaw
#define _nrrdEncodingRaw_available itk__nrrdEncodingRaw_available
#define _nrrdEncodingRaw_read itk__nrrdEncodingRaw_read
#define _nrrdEncodingRaw_write itk__nrrdEncodingRaw_write
#define nrrdEncodingRaw itk_nrrdEncodingRaw
#define _nrrdEncodingAscii itk__nrrdEncodingAscii
#define _nrrdEncodingAscii_available itk__nrrdEncodingAscii_available
#define _nrrdEncodingAscii_read itk__nrrdEncodingAscii_read
#define _nrrdEncodingAscii_write itk__nrrdEncodingAscii_write
#define nrrdEncodingAscii itk_nrrdEncodingAscii
#define _nrrdEncodingHex itk__nrrdEncodingHex
#define _nrrdEncodingHex_available itk__nrrdEncodingHex_available
#define _nrrdEncodingHex_read itk__nrrdEncodingHex_read
#define _nrrdEncodingHex_write itk__nrrdEncodingHex_write
#define _nrrdReadHexTable itk__nrrdReadHexTable
#define _nrrdWriteHexTable itk__nrrdWriteHexTable
#define nrrdEncodingHex itk_nrrdEncodingHex
#define _nrrdEncodingGzip itk__nrrdEncodingGzip
#define _nrrdEncodingGzip_available itk__nrrdEncodingGzip_available
#define _nrrdEncodingGzip_read itk__nrrdEncodingGzip_read
#define _nrrdEncodingGzip_write itk__nrrdEncodingGzip_write
#define nrrdEncodingGzip itk_nrrdEncodingGzip
#define nrrdCrop itk_nrrdCrop
#define nrrdSlice itk_nrrdSlice
#define _nrrdEncodingBzip2 itk__nrrdEncodingBzip2
#define _nrrdEncodingBzip2_available itk__nrrdEncodingBzip2_available
#define _nrrdEncodingBzip2_read itk__nrrdEncodingBzip2_read
#define _nrrdEncodingBzip2_write itk__nrrdEncodingBzip2_write
#define nrrdEncodingBzip2 itk_nrrdEncodingBzip2
#define _nrrdFormatEPS itk__nrrdFormatEPS
#define _nrrdFormatEPS_available itk__nrrdFormatEPS_available
#define _nrrdFormatEPS_contentStartsLike itk__nrrdFormatEPS_contentStartsLike
#define _nrrdFormatEPS_fitsInto itk__nrrdFormatEPS_fitsInto
#define _nrrdFormatEPS_nameLooksLike itk__nrrdFormatEPS_nameLooksLike
#define _nrrdFormatEPS_read itk__nrrdFormatEPS_read
#define _nrrdFormatEPS_write itk__nrrdFormatEPS_write
#define nrrdFormatEPS itk_nrrdFormatEPS
#define _nrrdFormatPNG itk__nrrdFormatPNG
#define _nrrdFormatPNG_available itk__nrrdFormatPNG_available
#define _nrrdFormatPNG_contentStartsLike itk__nrrdFormatPNG_contentStartsLike
#define _nrrdFormatPNG_fitsInto itk__nrrdFormatPNG_fitsInto
#define _nrrdFormatPNG_nameLooksLike itk__nrrdFormatPNG_nameLooksLike
#define _nrrdFormatPNG_read itk__nrrdFormatPNG_read
#define _nrrdFormatPNG_write itk__nrrdFormatPNG_write
#define nrrdFormatPNG itk_nrrdFormatPNG
#define _nrrdFormatPNM itk__nrrdFormatPNM
#define _nrrdFormatPNM_available itk__nrrdFormatPNM_available
#define _nrrdFormatPNM_contentStartsLike itk__nrrdFormatPNM_contentStartsLike
#define _nrrdFormatPNM_fitsInto itk__nrrdFormatPNM_fitsInto
#define _nrrdFormatPNM_nameLooksLike itk__nrrdFormatPNM_nameLooksLike
#define _nrrdFormatPNM_read itk__nrrdFormatPNM_read
#define _nrrdFormatPNM_write itk__nrrdFormatPNM_write
#define nrrdFormatPNM itk_nrrdFormatPNM
#define _nrrdFormatText itk__nrrdFormatText
#define _nrrdFormatText_available itk__nrrdFormatText_available
#define _nrrdFormatText_contentStartsLike itk__nrrdFormatText_contentStartsLike
#define _nrrdFormatText_fitsInto itk__nrrdFormatText_fitsInto
#define _nrrdFormatText_nameLooksLike itk__nrrdFormatText_nameLooksLike
#define _nrrdFormatText_read itk__nrrdFormatText_read
#define _nrrdFormatText_write itk__nrrdFormatText_write
#define nrrdFormatText itk_nrrdFormatText
#define _nrrdFormatVTK itk__nrrdFormatVTK
#define _nrrdFormatVTK_available itk__nrrdFormatVTK_available
#define _nrrdFormatVTK_contentStartsLike itk__nrrdFormatVTK_contentStartsLike
#define _nrrdFormatVTK_fitsInto itk__nrrdFormatVTK_fitsInto
#define _nrrdFormatVTK_nameLooksLike itk__nrrdFormatVTK_nameLooksLike
#define _nrrdFormatVTK_read itk__nrrdFormatVTK_read
#define _nrrdFormatVTK_write itk__nrrdFormatVTK_write
#define nrrdFormatVTK itk_nrrdFormatVTK
#endif  /* __itk_NrrdIO_mangle_h */ 
