# Copyright (C) 2014-2016 AscEmu Team <http://www.ascemu.org>

if(NOT BUILD_QUESTSCRIPTS )
  message("\tQuestScripts was skipped because BUILD_QUESTSCRIPTS is unchecked.")
  return()
endif()

# set up our project name
project(QuestScripts CXX)

SET(sources
   Setup.cpp 
   ../Common/Base.cpp 
   Quest_ArathiHighlands.cpp 
   Quest_Azshara.cpp 
   Quest_Azuremyst_Isle.cpp 
   Quest_BladeEdge_Mountains.cpp 
   Quest_BlastedLands.cpp 
   Quest_BloodmystIsle.cpp 
   Quest_BoreanTundra.cpp 
   Quest_BurningSteppes.cpp 
   Quest_Darkshore.cpp 
   Quest_DeathKnight.cpp 
   Quest_Desolace.cpp 
   Quest_Dragonblight.cpp 
   Quest_Druid.cpp 
   Quest_Duskwood.cpp 
   Quest_Dustwallow_Marsh.cpp 
   Quest_Eastern_Plaguelands.cpp 
   Quest_EversongWoods.cpp 
   Quest_FirstAid.cpp 
   Quest_Ghostlands.cpp 
   Quest_Hellfire_Peninsula.cpp 
   Quest_HillsbradFoothills.cpp 
   Quest_Isle_of_QuelDanas.cpp 
   Quest_Howling_Fjord.cpp 
   Quest_LochModan.cpp 
   Quest_Mage.cpp 
   Quest_Mulgore.cpp 
   Quest_Nagrand.cpp 
   Quest_Netherstorm.cpp 
   Quest_Paladin.cpp 
   QuestGossip.cpp 
   QuestHooks.cpp 
   Quest_RedridgeMountains.cpp 
   Quest_ShadowMoon.cpp 
   Quest_SholazarBasin.cpp 
   Quest_Silithus.cpp 
   Quest_SilvermoonCity.cpp 
   Quest_Silverpine_Forest.cpp 
   Quest_StonetalonMountains.cpp
   Quest_Stormwind.cpp 
   Quest_StranglethornVale.cpp 
   Quest_Tanaris.cpp 
   Quest_Teldrassil.cpp 
   Quest_Terrokar_Forest.cpp 
   Quest_The_Barrens.cpp 
   Quest_TheStormPeaks.cpp 
   Quest_ThousandNeedles.cpp 
   Quest_TirisfalGlades.cpp 
   Quest_Undercity.cpp 
   Quest_UnGoro.cpp 
   Unsorted.cpp 
   Quest_Warrior.cpp 
   Quest_Westfall.cpp 
   Quest_Wetlands.cpp
   Quest_Winterspring.cpp 
   Quest_Zangarmarsh.cpp
   )

set(headers
   Setup.h
   ../Common/Base.h
   ../Common/EasyFunctions.h
   ../Common/Instance_Base.h
   )

include_directories(
   ${OPENSSL_INCLUDE_DIR}
   ${PCRE_INCLUDE_DIR}
   ${CMAKE_SOURCE_DIR}/dep/recastnavigation/Detour/Include
   ${CMAKE_SOURCE_DIR}/dep/vmaplib/include
   ${CMAKE_SOURCE_DIR}/dep/g3dlite/include
   ${CMAKE_SOURCE_DIR}/src/shared
   ${CMAKE_SOURCE_DIR}/src/world
   ${CMAKE_CURRENT_SOURCE_DIR}
   ${ZLIB_INCLUDE_DIRS}
)
add_library(${PROJECT_NAME} SHARED ${sources} ${headers})

# special case for project linking
# on some operating systems linking is a bit strange
# OS X can't link executable, MSVC can't link world library... weird
if(WIN32)
    add_dependencies(${PROJECT_NAME} worldserver)
    target_link_libraries(${PROJECT_NAME} worldserver)
elseif(APPLE)
    add_dependencies(${PROJECT_NAME} world)
    target_link_libraries(${PROJECT_NAME} world)
endif()
if(USE_PCH AND PCHSupport_FOUND)
    ADD_NATIVE_PRECOMPILED_HEADER(${PROJECT_NAME} Setup.h ${CMAKE_CURRENT_SOURCE_DIR}/Setup.cpp)
endif()

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${ASCEMU_SCRIPTLIB_PATH} LIBRARY DESTINATION ${ASCEMU_SCRIPTLIB_PATH})
unset(sources)
unset(headers)
