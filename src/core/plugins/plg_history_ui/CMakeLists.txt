CMAKE_MINIMUM_REQUIRED( VERSION 3.1.1 )
PROJECT( plg_history_ui )

INCLUDE( WGToolsCoreProject )
find_package(QT5 ${QT_FIND_PACKAGE_VERSION})

SET( ALL_SRCS
	metadata/history_object.mpp
    metadata/display_object.mpp
	history_object.cpp
	history_object.hpp
	history_model.cpp
	history_model.hpp
    display_object.cpp
    display_object.hpp
	plg_history_ui.cpp
)
WG_AUTO_SOURCE_GROUPS( ${ALL_SRCS} )

BW_QT_ADD_QRC(WGHistory resources/WGHistory)
BW_GLOB_RESOURCE_FILES()

WG_BLOB_SOURCES( BLOB_SRCS
	${ALL_SRCS}
)
BW_ADD_TOOL_PLUGIN( plg_history_ui SHARED
	${BLOB_SRCS}
	${RESOURCE_FILES}
	${COMPILED_RESOURCES}
)

BW_TARGET_LINK_LIBRARIES( plg_history_ui PRIVATE
	core_command_system
	core_reflection
	core_generic_plugin
	core_serialization_xml
)

BW_PROJECT_CATEGORY( plg_history_ui "Plugins" )

