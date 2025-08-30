project(CFE_HS C)
# This file is from https://github.com/cfs-apps/proxy_hs

include_directories(fsw/inc)
include_directories(fsw/src)

aux_source_directory(fsw/src APP_SRC_FILES)
aux_source_directory(fsw/tables APP_TABLE_FILES)

# Create the app module
add_cfe_app(hs ${APP_SRC_FILES})
add_cfe_tables(hs ${APP_TABLE_FILES})

