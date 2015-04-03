
# Modules of OCCT

SET(BUILD_FoundationClasses OFF CACHE BOOL "include FoundationClasses"  )
SET(BUILD_ModelingData OFF CACHE BOOL "include ModelingData"  )
SET(BUILD_ModelingAlgorithms OFF CACHE BOOL "include ModelingAlgorithms"  )
SET(BUILD_Visualization OFF CACHE BOOL "include Visualization"  )
SET(BUILD_ApplicationFramework OFF CACHE BOOL "include ApplicationFramework"  )
SET(BUILD_DataExchange ON CACHE BOOL "include DataExchange"  )
IF (NOT DEFINED ANDROID)
    SET(BUILD_Draw OFF CACHE BOOL "include Draw"  )
ENDIF()

