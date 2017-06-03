cmake_minimum_required(VERSION 3.1.0)

PROJECT(JVM)

add_executable(JVM
    main.c
    leitor.c
    exibidor.c 
    constant_pool.c
)
set_property(TARGET JVM PROPERTY C_STANDARD 99)
