# The following lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.16)

idf_component_register(SRCS
        sd_card.c
        INCLUDE_DIRS "."
        PRIV_REQUIRES driver fatfs
)