
linux-g++ { 
    # Development machine
    # QMAKE_CXX = distcc
    QMAKE_CXXFLAGS_RELEASE = -g3 \
        -Wall \
        -pg
    
    # QMAKE_CXXFLAGS_RELEASE = -march=core2 -O3 -pipe -mfpmath=sse -Wall
    QMAKE_LFLAGS_RELEASE = 
    INSTALL_INCLUDEDIR = /usr/include
    INSTALL_LIBDIR = /usr/lib
}
win32-g++ { 
    # Target platform - Windows
    # Pentium-Pro -- becouse of Intel and AMD fork
     QMAKE_CXXFLAGS_RELEASE  = -g3 -Wall
    #  QMAKE_CXXFLAGS_RELEASE = -march=pentium4 -Os -Wall -pipe -mfpmath=sse
    
    #QMAKE_LFLAGS_RELEASE    = -g3 
    
}
win32-msvc2008 { 
    # Target platform - Windows VISUAL STUDIO 2003 .NET
    # Pentium-Pro / PII / PIII - Windows Application optimalization
    QMAKE_CXXFLAGS_RELEASE += /O2 \
        /Ot \
        /GA \
        /arch:SSE2
    QMAKE_LFLAGS_RELEASE += 
    INCLUDEPATH += 
}