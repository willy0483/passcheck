cmake_minimum_required(VERSION 3.8)

project(passcheck VERSION 1.0.0 DESCRIPTION "check password")

add_library(passcheck STATIC src/passcheck.c)

target_compile_definitions(passcheck PRIVATE
    $<$<CONFIG:Debug>:DEBUG>
)

target_compile_definitions(passcheck PRIVATE
    $<$<CONFIG:Release>:RELEASE>
)

target_compile_definitions(passcheck PRIVATE
    $<$<CONFIG:Testing>:TESTING>
)
