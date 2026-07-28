project(LawnProject)

option(LAWN_USE_UNFINISHED_GAMEPAD_SUPPORT "Enable the unfinished gamepad support" OFF)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/*.h"
)

# ..and the lawn files in root dir
file(GLOB LAWN_FILES
    "${CMAKE_SOURCE_DIR}/src/*.rc"
    "${CMAKE_SOURCE_DIR}/src/*.cpp"
    "${CMAKE_SOURCE_DIR}/src/*.h"

    # Todlib is a part of pvz
    "${CMAKE_SOURCE_DIR}/src/Sexy.TodLib/*.cpp"
    "${CMAKE_SOURCE_DIR}/src/Sexy.TodLib/*.h"
)
list(APPEND SOURCES ${LAWN_FILES})

# popcap...WHYYYY
set(EXCLUDE_FILES
    "${CMAKE_SOURCE_DIR}/src/Sexy.TodLib/TodDrawTriangle.cpp"
    "${CMAKE_SOURCE_DIR}/src/Sexy.TodLib/TodDrawTriangleInc.cpp"
)

foreach(EXCLUDED_FILE IN LISTS EXCLUDE_FILES)
    list(REMOVE_ITEM SOURCES "${EXCLUDED_FILE}")
endforeach()

add_executable(${PROJECT_NAME} ${SOURCES})

target_compile_definitions(${PROJECT_NAME} PUBLIC
    $<$<CONFIG:Debug>:DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
)

if(SEXY_USE_IMGUI)
    target_compile_definitions(${PROJECT_NAME} PUBLIC
        $<$<CONFIG:Debug>:LAWN_DEBUG_TOOLS>
    )
endif()

if(SEXY_USE_CONTROLLER)
    target_compile_definitions(${PROJECT_NAME} PUBLIC
        $<$<BOOL:${LAWN_USE_UNFINISHED_GAMEPAD_SUPPORT}>:LAWN_USE_UNFINISHED_GAMEPAD_SUPPORT>
    )
endif()

target_link_libraries(${PROJECT_NAME} PUBLIC
    SexyAppFramework
)

foreach(FILE_PATH IN LISTS SOURCES)
    get_filename_component(EXT "${FILE_PATH}" EXT)
    file(RELATIVE_PATH REL_PATH "${CMAKE_SOURCE_DIR}/src" "${FILE_PATH}")

    get_filename_component(FOLDER_PATH "${REL_PATH}" PATH)
    string(REPLACE "/" "\\" FOLDER_PATH "${FOLDER_PATH}")

    if(EXT STREQUAL ".cpp" OR EXT STREQUAL ".c" OR EXT STREQUAL ".cc")
        set(BASE_GROUP "Source Files")
    elseif(EXT STREQUAL ".h" OR EXT STREQUAL ".hpp" OR EXT STREQUAL ".hh")
        set(BASE_GROUP "Header Files")
    elseif(EXT STREQUAL ".rc" OR EXT STREQUAL ".res")
        set(BASE_GROUP "Resource Files")
    else()
        set(BASE_GROUP "Other Files")
    endif()

    if(FOLDER_PATH)
        set(GROUP_NAME "${BASE_GROUP}\\${FOLDER_PATH}")
    else()
        set(GROUP_NAME "${BASE_GROUP}")
    endif()

    source_group("${GROUP_NAME}" FILES "${FILE_PATH}")
endforeach()

set(EXPORT_DIR "${CMAKE_SOURCE_DIR}/Export")

if (CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(ARCHITECTURE "x64")
else()
    set(ARCHITECTURE "x86")
endif()

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${EXPORT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${EXPORT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${EXPORT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO "${EXPORT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL "${EXPORT_DIR}"
    ARCHIVE_OUTPUT_DIRECTORY "${EXPORT_DIR}"
)

set(MDK_DIR "${EXPORT_DIR}/mdk")

set(BLOOM_API_FOLDER "${MDK_DIR}/bloomapi")

set(COPY_DOTLIB_TO "${BLOOM_API_FOLDER}/bin/${CMAKE_BUILD_TYPE}_${ARCHITECTURE}.lib")

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${EXPORT_DIR}/${PROJECT_NAME}.lib"
            "${COPY_DOTLIB_TO}"
    )

#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${EXPORT_DIR}")

# Assets
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND}
        -DSRC="${CMAKE_SOURCE_DIR}/assets"
        -DDST="${EXPORT_DIR}"
        -DMANIFEST="${CMAKE_BINARY_DIR}/asset_manifest.txt"
        -P "${CMAKE_SOURCE_DIR}/cmake/sync_assets.cmake"
    COMMENT "Syncing assets..."
)
# DLL

set(THIRDPARTY_DIR "${CMAKE_SOURCE_DIR}/thirdparty/${ARCHITECTURE}")

set(DLLS_TO_COPY
    bass.dll
    avcodec-61.dll
    avdevice-61.dll
    avformat-61.dll
    avutil-59.dll
    swresample-5.dll
    swscale-8.dll
)

foreach(DLL ${DLLS_TO_COPY})
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${THIRDPARTY_DIR}/${DLL}"
            "${EXPORT_DIR}"
    )
endforeach()

set(LIBS_TO_COPY
    bass.lib
    avcodec.lib
    avdevice.lib
    avformat.lib
    avutil.lib
    swresample.lib
    swscale.lib
)

foreach(LIB ${LIBS_TO_COPY})
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${THIRDPARTY_DIR}/${LIB}"
            "${MDK_DIR}/thirdparty/${ARCHITECTURE}/${LIB}"
    )
endforeach()

#kinda stupid
set(HEADERS_TO_COPY
    "BloomLib/Bloom.h"
    "BloomLib/PlantEatenContext.h"
    "BloomLib/Events.h"
    "BloomLib/Event.h"
    "BloomLib/RegistryTypeHolder.h"
    "BloomLib/BloomType.h"
    "BloomLib/Identifier.h"
    "BloomLib/Patch.h"
    "BloomLib/PatchHolder.h"
    "BloomLib/EventList.h"
    "BloomLib/BillFunctional.h"
    "BloomLib/Identifier.h"
    "BloomLib/Patch.h"
    "BloomLib/PatchHolder.h"
    "BloomLib/Registry.h"
    "BloomLib/RegistryTypeHolder.h"
    "BloomLib/ListInsertion.h"
    "BloomLib/InsertionList.h"
    "BloomLib/InsertionListGroup.h"
    "BloomLib/EventPriority.h"
    "Lawn/GameObject.h"
    "Lawn/Plant.h"
    "Lawn/Zombie.h"
    "Lawn/Projectile.h"
    "Lawn/Coin.h"
    "Lawn/LawnMower.h"
    "Lawn/GridItem.h"
    "Lawn/System/PlayerInfo.h"
    "Lawn/System/Zombatar.h"
    "Lawn/Board.h"
    "Lawn/LawnCommon.h"
    "Lawn/Registries.h"
    "Lawn/StoreItem/StoreItemTypes.h"
    "Lawn/StoreItem/StoreItemType.h"
    "Lawn/StoreItem/PacketUpgradeStoreItemType.h"
    "Lawn/StoreItem/SeedPacketStoreItemType.h"
    "Lawn/StoreItem/StoreItemModifiers.h"
    "Lawn/StoreItem/StoreItem.h"
    "Lawn/StoreItem/StoreItemGroups.h"
    "Lawn/StoreItem/StoreItemGroup.h"
    "SexyAppFramework/Common.h"
    "SexyAppFramework/Rect.h"
    "SexyAppFramework/Color.h"
    "SexyAppFramework/Graphics.h"
    "SexyAppFramework/Image.h"
    "SexyAppFramework/Point.h"
    "SexyAppFramework/TriVertex.h"
    "SexyAppFramework/SexyApp.h"
    "SexyAppFramework/SexyAppBase.h"
    "SexyAppFramework/Version.h"
    "SexyAppFramework/Gamepad.h"
    "SexyAppFramework/ButtonListener.h"
    "SexyAppFramework/DialogListener.h"
    "SexyAppFramework/Buffer.h"
    "SexyAppFramework/CritSect.h"
    "SexyAppFramework/SharedImage.h"
    "SexyAppFramework/Ratio.h"
    "SexyAppFramework/WidgetContainer.h"
    "SexyAppFramework/Widget.h"
    "SexyAppFramework/EditWidget.h"
    "SexyAppFramework/Insets.h"
    "SexyAppFramework/KeyCodes.h"
    "SexyAppFramework/Flags.h"
    "SexyAppFramework/ResourceManager.h"
    "SexyAppFramework/OpenALSoundInstance.h"
    "SexyAppFramework/SoundInstance.h"
    "Sexy.TodLib/DataArray.h"
    "Sexy.TodLib/TodDebug.h"
    "Sexy.TodLib/TodCommon.h"
    "Sexy.TodLib/TodFoley.h"
    "LawnApp.h"
    "ConstEnums.h"
    "GameConstants.h"
    "Resources.h"
)

foreach(HEADER ${HEADERS_TO_COPY})
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${CMAKE_SOURCE_DIR}/src/${HEADER}"
            "${BLOOM_API_FOLDER}/include/${HEADER}"
    )
endforeach()

target_link_libraries(${PROJECT_NAME} PRIVATE BloomLib)