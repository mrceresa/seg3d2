PROJECT(ITKEXTHDRS)

IF(NOT ITK_INSTALL_NO_DEVELOPMENT)
  FILE(GLOB __files "${CMAKE_CURRENT_SOURCE_DIR}/*.h")
  INSTALL(FILES ${__files}
    DESTINATION ${ITK_INSTALL_INCLUDE_DIR_CM24}/Utilities/itkExtHdrs
    COMPONENT Development)
ENDIF(NOT ITK_INSTALL_NO_DEVELOPMENT)


