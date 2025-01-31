set PATH=%PATH%;C:\utils\cmake-3.31.5-windows-x86_64\bin;C:\utils\bison\Bison.3.7.4\bin;
set PCRE_ROOT=C:/utils/pcre2/PCRE2.10.39.0
PCRE2_INCLUDE_DIRS
rem cmake -G "Visual Studio 16 2019" -A "x64" 
cmake -G "Visual Studio 17 2022" -A x64 -DCMAKE_INSTALL_PREFIX="./install2" -DCMAKE_C_FLAGS="/DPCRE2_STATIC" -DCMAKE_CXX_FLAGS="/DPCRE2_STATIC" -DPCRE2_INCLUDE_DIR="%PCRE_ROOT%/include" -DPCRE2_LIBRARY="%PCRE_ROOT%/lib/pcre2-8-static.lib" -S . -B build
rem cmake --build build --config Release
rem cmake --install build --config Release

rem to test the exe built correctly
rem cd install2/bin
rem ./swig.exe -version
rem ./swig.exe -help
